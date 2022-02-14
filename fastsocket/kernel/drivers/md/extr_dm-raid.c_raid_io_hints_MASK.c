
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chunk_sectors; struct r5conf* private; } ;
struct raid_set {TYPE_1__ md; } ;
struct r5conf {unsigned int raid_disks; unsigned int max_degraded; } ;
struct queue_limits {int dummy; } ;
struct dm_target {struct raid_set* private; } ;


 int FUNC_0 (struct queue_limits*,unsigned int) ;
 int FUNC_1 (struct queue_limits*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0, struct queue_limits *VAR_1)
{
 struct raid_set *VAR_2 = VAR_0->private;
 unsigned VAR_3 = VAR_2->md.chunk_sectors << 9;
 struct r5conf *VAR_4 = VAR_2->md.private;

 FUNC_0(VAR_1, VAR_3);
 FUNC_1(VAR_1, VAR_3 * (VAR_4->raid_disks - VAR_4->max_degraded));
}
