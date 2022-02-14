
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* decommit ) (void*,size_t,int ,size_t,int ) ;int (* purge ) (void*,size_t,int ,size_t,int ) ;int (* dalloc ) (void*,size_t,int,int ) ;} ;
typedef TYPE_1__ chunk_hooks_t ;
struct TYPE_10__ {int chunks_ad_retained; int chunks_szad_retained; int ind; } ;
typedef TYPE_2__ arena_t ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int *,int *,int,void*,size_t,int,int) ;
 size_t VAR_0 ;
 int FUNC_4 (void*,size_t,int,int ) ;
 int FUNC_5 (void*,size_t,int ,size_t,int ) ;
 int FUNC_6 (void*,size_t,int ,size_t,int ) ;

void
FUNC_7(arena_t *VAR_1, chunk_hooks_t *VAR_2, void *VAR_3,
    size_t VAR_4, bool VAR_5, bool VAR_6)
{

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(FUNC_0(VAR_3) == VAR_3);
 FUNC_1(VAR_4 != 0);
 FUNC_1((VAR_4 & VAR_0) == 0);

 FUNC_2(VAR_1, VAR_2);

 if (!VAR_2->dalloc(VAR_3, VAR_4, VAR_6, VAR_1->ind))
  return;

 if (VAR_6) {
  VAR_6 = VAR_2->decommit(VAR_3, VAR_4, 0, VAR_4,
      VAR_1->ind);
 }
 VAR_5 = !VAR_6 || !VAR_2->purge(VAR_3, VAR_4, 0, VAR_4,
     VAR_1->ind);
 FUNC_3(VAR_1, VAR_2, &VAR_1->chunks_szad_retained,
     &VAR_1->chunks_ad_retained, 0, VAR_3, VAR_4, VAR_5, VAR_6);
}
