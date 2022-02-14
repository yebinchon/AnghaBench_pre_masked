
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union map_info {int dummy; } map_info ;
struct TYPE_2__ {int in_lock; int in; } ;
struct raid_set {scalar_t__ stats; TYPE_1__ io; } ;
struct dm_target {scalar_t__ begin; struct raid_set* private; } ;
struct bio {int bi_sector; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct raid_set*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct raid_set*) ;

__attribute__((used)) static int FUNC_8(struct dm_target *VAR_6, struct bio *VAR_7,
      union map_info *VAR_8)
{

 if (FUNC_3(VAR_7) == VAR_3)
  return -VAR_1;
 else {
  struct raid_set *VAR_9 = VAR_6->private;





  FUNC_4(VAR_9);
  VAR_7->bi_sector -= VAR_6->begin;


  FUNC_5(&VAR_9->io.in_lock);
  FUNC_2(&VAR_9->io.in, VAR_7);
  FUNC_6(&VAR_9->io.in_lock);


  FUNC_7(VAR_9);


  FUNC_0(VAR_9->stats + (FUNC_1(VAR_7) == VAR_2 ?
            VAR_4 : VAR_5));
  return VAR_0;
 }
}
