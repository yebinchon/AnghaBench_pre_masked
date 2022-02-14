
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int prof_tctx_t ;
typedef int extent_node_t ;
struct TYPE_3__ {int huge_mtx; } ;
typedef TYPE_1__ arena_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (void const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(const void *VAR_0, prof_tctx_t *VAR_1)
{
 extent_node_t *VAR_2;
 arena_t *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(&VAR_3->huge_mtx);
 FUNC_1(VAR_2, VAR_1);
 FUNC_4(&VAR_3->huge_mtx);
}
