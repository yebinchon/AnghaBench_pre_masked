
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {scalar_t__ hw_version; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,struct ipw_hardware*) ;
 int FUNC_1 (int,struct ipw_hardware*) ;

irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct ipw_hardware *VAR_3 = VAR_2;

 if (VAR_3->hw_version == VAR_0)
  return FUNC_0(VAR_1, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_3);
}
