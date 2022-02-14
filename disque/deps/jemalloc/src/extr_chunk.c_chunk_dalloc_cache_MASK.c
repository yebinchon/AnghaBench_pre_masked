
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int chunk_hooks_t ;
struct TYPE_5__ {int chunks_ad_cached; int chunks_szad_cached; } ;
typedef TYPE_1__ arena_t ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *,int *,int *,int,void*,size_t,int,int) ;
 size_t VAR_0 ;

void
FUNC_4(arena_t *VAR_1, chunk_hooks_t *VAR_2, void *VAR_3,
    size_t VAR_4, bool VAR_5)
{

 FUNC_2(VAR_3 != ((void*)0));
 FUNC_2(FUNC_0(VAR_3) == VAR_3);
 FUNC_2(VAR_4 != 0);
 FUNC_2((VAR_4 & VAR_0) == 0);

 FUNC_3(VAR_1, VAR_2, &VAR_1->chunks_szad_cached,
     &VAR_1->chunks_ad_cached, 1, VAR_3, VAR_4, 0, VAR_5);
 FUNC_1(VAR_1);
}
