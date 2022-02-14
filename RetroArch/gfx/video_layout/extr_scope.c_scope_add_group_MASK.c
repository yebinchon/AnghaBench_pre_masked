
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int view_t ;
struct TYPE_3__ {int groups_count; int * groups; } ;
typedef TYPE_1__ scope_t ;


 int FUNC_0 (void**,int,int) ;
 int FUNC_1 (int *,int *) ;

view_t *FUNC_2(scope_t *VAR_0)
{
   view_t *VAR_1;

   FUNC_0((void**)&VAR_0->groups, sizeof(view_t), ++VAR_0->groups_count);

   VAR_1 = &VAR_0->groups[VAR_0->groups_count - 1];
   FUNC_1(VAR_1, ((void*)0));

   return VAR_1;
}
