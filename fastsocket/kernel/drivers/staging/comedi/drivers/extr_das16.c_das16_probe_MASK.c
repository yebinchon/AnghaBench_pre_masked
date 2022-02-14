
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct comedi_devconfig {int dummy; } ;
struct TYPE_4__ {int ai_unipolar; int ai_singleended; } ;
struct TYPE_3__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_6, struct comedi_devconfig *VAR_7)
{
 int VAR_8;
 int VAR_9;



 VAR_8 = FUNC_0(VAR_6->iobase + VAR_2);

 if ((VAR_8 & VAR_3)) {
  VAR_4->ai_unipolar = 1;
 } else {
  VAR_4->ai_unipolar = 0;
 }

 if ((VAR_8 & VAR_1)) {
  VAR_4->ai_singleended = 1;
 } else {
  VAR_4->ai_singleended = 0;
 }



 VAR_9 = FUNC_0(VAR_6->iobase + VAR_0) & 0xf0;

 FUNC_1(" id bits are 0x%02x\n", VAR_9);
 if (VAR_5->id != VAR_9) {
  FUNC_1(" requested board's id bits are 0x%x (ignore)\n",
         VAR_5->id);
 }

 return 0;
}
