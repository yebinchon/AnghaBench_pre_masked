
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

irq_handler_t FUNC_0(struct adapter *VAR_5)
{
 if (VAR_5->flags & VAR_1)
  return VAR_4;
 if (VAR_5->flags & VAR_0)
  return VAR_3;
 return VAR_2;
}
