
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
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct comedi_subdevice*,short) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_6)
{
 struct comedi_subdevice *VAR_7 = VAR_6->subdevices + VAR_3;
 short VAR_8;
 u32 VAR_9;

 if (VAR_4.reg_type != VAR_5)
  return;


 if (FUNC_1(VAR_2) & 0x01) {
  FUNC_2(0x01, VAR_0);
  VAR_9 = FUNC_1(VAR_1);


  VAR_8 = (VAR_9 >> 16) & 0xffff;
  FUNC_0(VAR_7, VAR_8);
 }
}
