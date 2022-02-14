
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int chunk_hooks_t ;
struct TYPE_4__ {int chunks_ad_cached; int chunks_szad_cached; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (TYPE_1__*,int *,int *,int *,int,void*,size_t,size_t,int*,int*,int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

void *
FUNC_3(arena_t *VAR_2, chunk_hooks_t *VAR_3, void *VAR_4,
    size_t VAR_5, size_t VAR_6, bool *VAR_7, bool VAR_8)
{
 void *VAR_9;
 bool VAR_10;

 FUNC_1(VAR_5 != 0);
 FUNC_1((VAR_5 & VAR_0) == 0);
 FUNC_1(VAR_6 != 0);
 FUNC_1((VAR_6 & VAR_0) == 0);

 VAR_10 = 1;
 VAR_9 = FUNC_2(VAR_2, VAR_3, &VAR_2->chunks_szad_cached,
     &VAR_2->chunks_ad_cached, 1, VAR_4, VAR_5, VAR_6, VAR_7,
     &VAR_10, VAR_8);
 if (VAR_9 == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_10);
 if (VAR_1)
  FUNC_0(VAR_9, VAR_5);
 return (VAR_9);
}
