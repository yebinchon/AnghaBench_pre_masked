
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_4__ {scalar_t__ layout; } ;
struct TYPE_3__ {scalar_t__ main_iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_cmd*) ;
 TYPE_2__* FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_cmd*) ;
 TYPE_1__* FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_5, struct comedi_cmd *VAR_6)
{
 uint32_t VAR_7 = 0, VAR_8 = 0;

 FUNC_5(VAR_5, VAR_6);

 FUNC_7(VAR_5, VAR_6);

 if (FUNC_4(VAR_5)->layout == VAR_4) {
  VAR_7 = FUNC_1(VAR_5, VAR_6);
 } else {
  VAR_7 = FUNC_2(VAR_5, VAR_6);
  VAR_8 = FUNC_3(VAR_5, VAR_6);
 }


 FUNC_8(VAR_7 & 0xffff,
        FUNC_6(VAR_5)->main_iobase + VAR_2);
 FUNC_0("convert counter 0x%x\n", VAR_7);

 FUNC_8((VAR_7 >> 16) & 0xff,
        FUNC_6(VAR_5)->main_iobase + VAR_3);

 FUNC_8(VAR_8 & 0xffff,
        FUNC_6(VAR_5)->main_iobase + VAR_0);

 FUNC_8((VAR_8 >> 16) & 0xff,
        FUNC_6(VAR_5)->main_iobase + VAR_1);
 FUNC_0("scan counter 0x%x\n", VAR_8);
}
