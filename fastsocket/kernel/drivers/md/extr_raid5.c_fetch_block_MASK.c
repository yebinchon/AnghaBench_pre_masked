
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head_state {size_t* failed_num; int syncing; int failed; int uptodate; int req_compute; int locked; int ops_request; scalar_t__ to_write; scalar_t__ replacing; scalar_t__ expanding; } ;
struct TYPE_4__ {int target; int target2; } ;
struct stripe_head {TYPE_2__ ops; struct r5dev* dev; int state; scalar_t__ sector; TYPE_1__* raid_conf; } ;
struct r5dev {int flags; scalar_t__ towrite; scalar_t__ toread; } ;
struct TYPE_3__ {int level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct stripe_head*,int) ;

__attribute__((used)) static int FUNC_5(struct stripe_head *VAR_8, struct stripe_head_state *VAR_9,
         int VAR_10, int VAR_11)
{
 struct r5dev *VAR_12 = &VAR_8->dev[VAR_10];
 struct r5dev *VAR_13[2] = { &VAR_8->dev[VAR_9->failed_num[0]],
      &VAR_8->dev[VAR_9->failed_num[1]] };


 if (!FUNC_3(VAR_1, &VAR_12->flags) &&
     !FUNC_3(VAR_3, &VAR_12->flags) &&
     (VAR_12->toread ||
      (VAR_12->towrite && !FUNC_3(VAR_2, &VAR_12->flags)) ||
      VAR_9->syncing || VAR_9->expanding ||
      (VAR_9->replacing && FUNC_4(VAR_8, VAR_10)) ||
      (VAR_9->failed >= 1 && VAR_13[0]->toread) ||
      (VAR_9->failed >= 2 && VAR_13[1]->toread) ||
      (VAR_8->raid_conf->level <= 5 && VAR_9->failed && VAR_13[0]->towrite &&
       !FUNC_3(VAR_2, &VAR_13[0]->flags)) ||
      (VAR_8->raid_conf->level == 6 && VAR_9->failed && VAR_9->to_write))) {



  FUNC_0(FUNC_3(VAR_4, &VAR_12->flags));
  FUNC_0(FUNC_3(VAR_5, &VAR_12->flags));
  if ((VAR_9->uptodate == VAR_11 - 1) &&
      (VAR_9->failed && (VAR_10 == VAR_9->failed_num[0] ||
       VAR_10 == VAR_9->failed_num[1]))) {



   FUNC_1("Computing stripe %llu block %d\n",
          (unsigned long long)VAR_8->sector, VAR_10);
   FUNC_2(VAR_6, &VAR_8->state);
   FUNC_2(VAR_7, &VAR_9->ops_request);
   FUNC_2(VAR_4, &VAR_12->flags);
   VAR_8->ops.target = VAR_10;
   VAR_8->ops.target2 = -1;
   VAR_9->req_compute = 1;






   VAR_9->uptodate++;
   return 1;
  } else if (VAR_9->uptodate == VAR_11-2 && VAR_9->failed >= 2) {



   int VAR_14;
   for (VAR_14 = VAR_11; VAR_14--; ) {
    if (VAR_14 == VAR_10)
     continue;
    if (!FUNC_3(VAR_3,
          &VAR_8->dev[VAR_14].flags))
     break;
   }
   FUNC_0(VAR_14 < 0);
   FUNC_1("Computing stripe %llu blocks %d,%d\n",
          (unsigned long long)VAR_8->sector,
          VAR_10, VAR_14);
   FUNC_2(VAR_6, &VAR_8->state);
   FUNC_2(VAR_7, &VAR_9->ops_request);
   FUNC_2(VAR_4, &VAR_8->dev[VAR_10].flags);
   FUNC_2(VAR_4, &VAR_8->dev[VAR_14].flags);
   VAR_8->ops.target = VAR_10;
   VAR_8->ops.target2 = VAR_14;
   VAR_9->uptodate += 2;
   VAR_9->req_compute = 1;
   return 1;
  } else if (FUNC_3(VAR_0, &VAR_12->flags)) {
   FUNC_2(VAR_1, &VAR_12->flags);
   FUNC_2(VAR_5, &VAR_12->flags);
   VAR_9->locked++;
   FUNC_1("Reading block %d (sync=%d)\n",
    VAR_10, VAR_9->syncing);
  }
 }

 return 0;
}
