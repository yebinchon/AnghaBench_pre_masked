
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* (* alloc ) (void*,size_t,size_t,int*,int*,int ) ;} ;
typedef TYPE_1__ chunk_hooks_t ;
struct TYPE_8__ {int ind; } ;
typedef TYPE_2__ arena_t ;


 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (void*,size_t,size_t,int*,int*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_3 (void*,size_t,size_t,int*,int*,int ) ;

void *
FUNC_4(arena_t *VAR_2, chunk_hooks_t *VAR_3, void *VAR_4,
    size_t VAR_5, size_t VAR_6, bool *VAR_7, bool *VAR_8)
{
 void *VAR_9;

 FUNC_2(VAR_2, VAR_3);
 VAR_9 = VAR_3->alloc(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_2->ind);
 if (VAR_9 == ((void*)0))
  return (((void*)0));
 if (VAR_1 && VAR_3->alloc != FUNC_1)
  FUNC_0(VAR_9, VAR_0);
 return (VAR_9);
}
