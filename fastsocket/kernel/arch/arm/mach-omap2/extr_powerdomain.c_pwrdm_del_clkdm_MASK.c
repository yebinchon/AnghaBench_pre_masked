
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {struct clockdomain** pwrdm_clkdms; int name; } ;
struct clockdomain {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct powerdomain *VAR_4, struct clockdomain *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;
 int VAR_8;

 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 FUNC_0("powerdomain: dissociating clockdomain %s from powerdomain "
   "%s\n", VAR_5->name, VAR_4->name);

 FUNC_1(&VAR_3, VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  if (VAR_4->pwrdm_clkdms[VAR_8] == VAR_5)
   break;

 if (VAR_8 == VAR_2) {
  FUNC_0("powerdomain: clkdm %s not associated with pwrdm "
    "%s ?!\n", VAR_5->name, VAR_4->name);
  VAR_7 = -VAR_1;
  goto pdc_exit;
 }

 VAR_4->pwrdm_clkdms[VAR_8] = ((void*)0);

 VAR_7 = 0;

pdc_exit:
 FUNC_2(&VAR_3, VAR_6);

 return VAR_7;
}
