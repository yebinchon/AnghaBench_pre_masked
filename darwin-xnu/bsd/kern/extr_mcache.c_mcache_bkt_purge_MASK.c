
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * cache_bkttype; TYPE_2__* mc_cpu; } ;
typedef TYPE_1__ mcache_t ;
struct TYPE_8__ {int cc_objs; int cc_pobjs; int cc_lock; scalar_t__ cc_bktsize; int * cc_pfilled; int * cc_filled; } ;
typedef TYPE_2__ mcache_cpu_t ;
typedef int mcache_bkttype_t ;
typedef int mcache_bkt_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(mcache_t *VAR_1)
{
 mcache_cpu_t *VAR_2;
 mcache_bkt_t *VAR_3, *VAR_4;
 mcache_bkttype_t *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_2 = &VAR_1->mc_cpu[VAR_6];

  FUNC_0(&VAR_2->cc_lock);

  VAR_5 = VAR_1->cache_bkttype;
  VAR_3 = VAR_2->cc_filled;
  VAR_4 = VAR_2->cc_pfilled;
  VAR_7 = VAR_2->cc_objs;
  VAR_8 = VAR_2->cc_pobjs;
  VAR_2->cc_filled = ((void*)0);
  VAR_2->cc_pfilled = ((void*)0);
  VAR_2->cc_objs = -1;
  VAR_2->cc_pobjs = -1;
  VAR_2->cc_bktsize = 0;

  FUNC_1(&VAR_2->cc_lock);

  if (VAR_3 != ((void*)0))
   FUNC_2(VAR_1, VAR_5, VAR_3, VAR_7);
  if (VAR_4 != ((void*)0))
   FUNC_2(VAR_1, VAR_5, VAR_4, VAR_8);
 }

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
}
