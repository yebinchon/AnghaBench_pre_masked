
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* purge ) (void*,size_t,size_t,size_t,int ) ;} ;
typedef TYPE_1__ chunk_hooks_t ;
struct TYPE_8__ {int ind; } ;
typedef TYPE_2__ arena_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (void*,size_t,size_t,size_t,int ) ;

bool
FUNC_2(arena_t *VAR_0, chunk_hooks_t *VAR_1, void *VAR_2,
    size_t VAR_3, size_t VAR_4, size_t VAR_5)
{

 FUNC_0(VAR_0, VAR_1);
 return (VAR_1->purge(VAR_2, VAR_3, VAR_4, VAR_5, VAR_0->ind));
}
