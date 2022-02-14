
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int chunk_hooks_t ;
struct TYPE_4__ {int chunks_mtx; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

chunk_hooks_t
FUNC_3(arena_t *VAR_0)
{
 chunk_hooks_t VAR_1;

 FUNC_1(&VAR_0->chunks_mtx);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->chunks_mtx);

 return (VAR_1);
}
