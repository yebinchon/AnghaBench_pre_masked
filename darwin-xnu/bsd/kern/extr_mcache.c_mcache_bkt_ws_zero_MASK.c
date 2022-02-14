
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bl_total; int bl_min; int bl_reaplimit; } ;
struct TYPE_6__ {int bl_total; int bl_min; int bl_reaplimit; } ;
struct TYPE_7__ {int mc_bkt_lock; TYPE_1__ mc_empty; TYPE_2__ mc_full; } ;
typedef TYPE_3__ mcache_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(mcache_t *VAR_0)
{
 FUNC_0(&VAR_0->mc_bkt_lock);

 VAR_0->mc_full.bl_reaplimit = VAR_0->mc_full.bl_total;
 VAR_0->mc_full.bl_min = VAR_0->mc_full.bl_total;
 VAR_0->mc_empty.bl_reaplimit = VAR_0->mc_empty.bl_total;
 VAR_0->mc_empty.bl_min = VAR_0->mc_empty.bl_total;

 FUNC_1(&VAR_0->mc_bkt_lock);
}
