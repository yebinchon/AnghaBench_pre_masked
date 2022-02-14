
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
typedef int tcache_t ;
typedef int extent_node_t ;
struct TYPE_4__ {int huge_mtx; int huge; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (void*) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int FUNC_10 (int *,int *,int ) ;

void
FUNC_11(tsd_t *VAR_1, void *VAR_2, tcache_t *VAR_3)
{
 extent_node_t *VAR_4;
 arena_t *VAR_5;

 VAR_4 = FUNC_5(VAR_2);
 VAR_5 = FUNC_2(VAR_4);
 FUNC_6(VAR_2, VAR_4);
 FUNC_8(&VAR_5->huge_mtx);
 FUNC_10(&VAR_5->huge, VAR_4, VAR_0);
 FUNC_9(&VAR_5->huge_mtx);

 FUNC_4(FUNC_1(VAR_4),
     FUNC_3(VAR_4));
 FUNC_0(FUNC_2(VAR_4),
     FUNC_1(VAR_4), FUNC_3(VAR_4));
 FUNC_7(VAR_1, VAR_4, VAR_3, 1);
}
