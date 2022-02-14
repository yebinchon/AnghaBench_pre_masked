
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int reg_type; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned FUNC_0(struct comedi_device *VAR_2)
{
 if (VAR_0.reg_type & VAR_1)
  return 8;
 else
  return 7;
}
