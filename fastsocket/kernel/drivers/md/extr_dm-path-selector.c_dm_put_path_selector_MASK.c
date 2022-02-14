
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int module; } ;
struct ps_internal {TYPE_1__ pst; } ;
struct path_selector_type {int name; } ;


 struct ps_internal* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct path_selector_type *VAR_1)
{
 struct ps_internal *VAR_2;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_0);
 VAR_2 = FUNC_0(VAR_1->name);
 if (!VAR_2)
  goto out;

 FUNC_2(VAR_2->pst.module);
out:
 FUNC_3(&VAR_0);
}
