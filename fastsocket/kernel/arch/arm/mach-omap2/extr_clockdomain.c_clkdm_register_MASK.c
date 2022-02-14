
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powerdomain {int dummy; } ;
struct TYPE_2__ {struct powerdomain* ptr; int name; } ;
struct clockdomain {int name; int node; TYPE_1__ pwrdm; int omap_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (struct powerdomain*,struct clockdomain*) ;
 struct powerdomain* FUNC_8 (int ) ;

int FUNC_9(struct clockdomain *VAR_4)
{
 int VAR_5 = -VAR_1;
 struct powerdomain *VAR_6;

 if (!VAR_4 || !VAR_4->name)
  return -VAR_1;

 if (!FUNC_4(VAR_4->omap_chip))
  return -VAR_1;

 VAR_6 = FUNC_8(VAR_4->pwrdm.name);
 if (!VAR_6) {
  FUNC_6("clockdomain: %s: powerdomain %s does not exist\n",
   VAR_4->name, VAR_4->pwrdm.name);
  return -VAR_1;
 }
 VAR_4->pwrdm.ptr = VAR_6;

 FUNC_2(&VAR_3);

 if (FUNC_0(VAR_4->name)) {
  VAR_5 = -VAR_0;
  goto cr_unlock;
 }

 FUNC_1(&VAR_4->node, &VAR_2);

 FUNC_7(VAR_6, VAR_4);

 FUNC_5("clockdomain: registered %s\n", VAR_4->name);
 VAR_5 = 0;

cr_unlock:
 FUNC_3(&VAR_3);

 return VAR_5;
}
