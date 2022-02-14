
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int inactives_cnt; int inactives; } ;
typedef TYPE_1__ lwp_objinfo ;
struct TYPE_6__ {TYPE_1__* information; } ;
typedef TYPE_2__ lwp_obj ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

lwp_obj* FUNC_3(lwp_objinfo *VAR_0)
{
 u32 VAR_1;
 lwp_obj* VAR_2;

 FUNC_0(VAR_1);
  VAR_2 = (lwp_obj*)FUNC_2(&VAR_0->inactives);
  if(VAR_2) {
   VAR_2->information = VAR_0;
   VAR_0->inactives_cnt--;
  }
 FUNC_1(VAR_1);

 return VAR_2;
}
