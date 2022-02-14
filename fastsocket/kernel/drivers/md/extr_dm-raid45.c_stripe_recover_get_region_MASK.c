
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe {struct recover_addr* recover; int sc; } ;
struct recover_addr {scalar_t__ pos; scalar_t__ end; scalar_t__ reg; } ;
struct recover {scalar_t__ nr_regions; struct dm_rh_client* rh; struct dm_dirty_log* dl; } ;
struct raid_set {struct recover recover; } ;
struct dm_rh_client {int dummy; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_2__ {scalar_t__ (* get_sync_count ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct raid_set* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct raid_set*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct dm_rh_client*) ;
 int FUNC_5 (struct dm_rh_client*) ;
 scalar_t__ FUNC_6 (struct dm_rh_client*) ;
 scalar_t__ FUNC_7 (struct dm_rh_client*,int ) ;
 int FUNC_8 (struct raid_set*) ;
 int FUNC_9 (struct raid_set*) ;
 scalar_t__ FUNC_10 (struct dm_dirty_log*) ;

__attribute__((used)) static int FUNC_11(struct stripe *VAR_3)
{
 struct raid_set *VAR_4 = FUNC_1(VAR_3->sc);
 struct recover *VAR_5 = &VAR_4->recover;
 struct recover_addr *VAR_6 = VAR_3->recover;
 struct dm_dirty_log *VAR_7 = VAR_5->dl;
 struct dm_rh_client *VAR_8 = VAR_5->rh;

 FUNC_0(!VAR_7);
 FUNC_0(!VAR_8);


 if (VAR_6->reg)
  return 1;

 if (FUNC_2(VAR_4))
  return -VAR_2;

 if (VAR_7->type->get_sync_count(VAR_7) >= VAR_5->nr_regions)
  return -VAR_1;


 if (!FUNC_9(VAR_4))
  return -VAR_0;


 FUNC_5(VAR_8);
 VAR_6->reg = FUNC_6(VAR_8);
 if (!VAR_6->reg)
  return -VAR_0;

 VAR_6->pos = FUNC_7(VAR_8, FUNC_3(VAR_6->reg));
 VAR_6->end = VAR_6->pos + FUNC_4(VAR_8);






 FUNC_8(VAR_4);
 return 0;
}
