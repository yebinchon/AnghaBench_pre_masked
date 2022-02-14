
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int name; int node; int omap_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct powerdomain *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = -VAR_1;

 if (!VAR_4)
  return -VAR_1;

 if (!FUNC_2(VAR_4->omap_chip))
  return -VAR_1;

 FUNC_4(&VAR_3, VAR_5);
 if (FUNC_0(VAR_4->name)) {
  VAR_6 = -VAR_0;
  goto pr_unlock;
 }

 FUNC_1(&VAR_4->node, &VAR_2);

 FUNC_3("powerdomain: registered %s\n", VAR_4->name);
 VAR_6 = 0;

pr_unlock:
 FUNC_5(&VAR_3, VAR_5);

 return VAR_6;
}
