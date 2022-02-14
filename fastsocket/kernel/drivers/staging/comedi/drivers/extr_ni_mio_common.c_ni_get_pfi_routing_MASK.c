
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int reg_type; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct comedi_device*,unsigned int) ;
 int FUNC_1 (struct comedi_device*,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static unsigned FUNC_2(struct comedi_device *VAR_2, unsigned VAR_3)
{
 if (VAR_0.reg_type & VAR_1)
  return FUNC_0(VAR_2, VAR_3);
 else
  return FUNC_1(VAR_2, VAR_3);
}
