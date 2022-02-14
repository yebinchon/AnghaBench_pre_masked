
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int inactives_cnt; int inactives; } ;
typedef TYPE_1__ lwp_objinfo ;
struct TYPE_6__ {int * information; int node; } ;
typedef TYPE_2__ lwp_obj ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(lwp_objinfo *VAR_0,lwp_obj *VAR_1)
{
 u32 VAR_2;

 FUNC_0(VAR_2);
 FUNC_2(&VAR_0->inactives,&VAR_1->node);
 VAR_1->information = ((void*)0);
 VAR_0->inactives_cnt++;
 FUNC_1(VAR_2);
}
