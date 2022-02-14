
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int clockbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_3->iobase + VAR_1);

 if (VAR_4 & VAR_0) {
  VAR_2->clockbase = 100;
  FUNC_1(" 10MHz pacer clock\n");
 } else {
  VAR_2->clockbase = 1000;
  FUNC_1(" 1MHz pacer clock\n");
 }

 FUNC_2(VAR_3);

 return 0;
}
