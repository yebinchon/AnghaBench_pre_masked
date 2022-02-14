
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {scalar_t__ reg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,short) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_5)
{
 struct comedi_subdevice *VAR_6 = VAR_5->subdevices + VAR_1;
 short VAR_7;
 u32 VAR_8;

 if (VAR_3.reg_type != VAR_4)
  return;


 if (FUNC_1(VAR_2) & 0x80) {
  VAR_8 = FUNC_2(VAR_0);
  VAR_7 = (VAR_8 & 0xffff);
  FUNC_0(VAR_6, VAR_7);
 }
}
