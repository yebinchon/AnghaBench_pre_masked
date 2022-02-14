
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {int flags; TYPE_1__ params; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

irq_handler_t FUNC_0(struct adapter *VAR_9, int VAR_10)
{
 if (VAR_9->flags & VAR_1)
  return VAR_10 ? VAR_6 : VAR_5;
 if (VAR_9->flags & VAR_0)
  return VAR_10 ? VAR_4 : VAR_3;
 if (VAR_9->params.rev > 0)
  return VAR_10 ? VAR_8 : VAR_7;
 return VAR_2;
}
