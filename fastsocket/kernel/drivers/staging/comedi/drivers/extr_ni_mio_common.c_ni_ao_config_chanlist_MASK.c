
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int reg_type; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,unsigned int*,unsigned int,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,unsigned int*,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3,
     unsigned int VAR_4[], unsigned int VAR_5,
     int VAR_6)
{
 if (VAR_0.reg_type & VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
            VAR_6);
 else
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
