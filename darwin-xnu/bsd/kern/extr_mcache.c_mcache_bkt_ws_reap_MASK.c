
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int bl_min; int bl_reaplimit; } ;
struct TYPE_9__ {TYPE_7__ mc_empty; TYPE_7__ mc_full; } ;
typedef TYPE_1__ mcache_t ;
struct TYPE_10__ {int bt_bktsize; } ;
typedef TYPE_2__ mcache_bkttype_t ;
typedef int mcache_bkt_t ;


 long FUNC_0 (int ,int ) ;
 int * FUNC_1 (TYPE_1__*,TYPE_7__*,TYPE_2__**) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(mcache_t *VAR_0)
{
 long VAR_1;
 mcache_bkt_t *VAR_2;
 mcache_bkttype_t *VAR_3;

 VAR_1 = FUNC_0(VAR_0->mc_full.bl_reaplimit, VAR_0->mc_full.bl_min);
 while (VAR_1-- &&
     (VAR_2 = FUNC_1(VAR_0, &VAR_0->mc_full, &VAR_3)) != ((void*)0))
  FUNC_2(VAR_0, VAR_3, VAR_2, VAR_3->bt_bktsize);

 VAR_1 = FUNC_0(VAR_0->mc_empty.bl_reaplimit, VAR_0->mc_empty.bl_min);
 while (VAR_1-- &&
     (VAR_2 = FUNC_1(VAR_0, &VAR_0->mc_empty, &VAR_3)) != ((void*)0))
  FUNC_2(VAR_0, VAR_3, VAR_2, 0);
}
