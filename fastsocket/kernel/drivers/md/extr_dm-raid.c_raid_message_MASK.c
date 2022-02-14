
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int ro; scalar_t__ thread; int suspended; int recovery; scalar_t__ sync_thread; TYPE_1__* pers; } ;
struct raid_set {struct mddev md; } ;
struct dm_target {struct raid_set* private; } ;
struct TYPE_2__ {int sync_request; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct dm_target *VAR_10, unsigned VAR_11, char **VAR_12)
{
 struct raid_set *VAR_13 = VAR_10->private;
 struct mddev *VAR_14 = &VAR_13->md;

 if (!FUNC_5(VAR_12[0], "reshape")) {
  FUNC_0("Reshape not supported.");
  return -VAR_1;
 }

 if (!VAR_14->pers || !VAR_14->pers->sync_request)
  return -VAR_1;

 if (!FUNC_5(VAR_12[0], "frozen"))
  FUNC_4(VAR_3, &VAR_14->recovery);
 else
  FUNC_1(VAR_3, &VAR_14->recovery);

 if (!FUNC_5(VAR_12[0], "idle") || !FUNC_5(VAR_12[0], "frozen")) {
  if (VAR_14->sync_thread) {
   FUNC_4(VAR_4, &VAR_14->recovery);
   FUNC_2(VAR_14);
  }
 } else if (FUNC_6(VAR_8, &VAR_14->recovery) ||
     FUNC_6(VAR_5, &VAR_14->recovery))
  return -VAR_0;
 else if (!FUNC_5(VAR_12[0], "resync"))
  FUNC_4(VAR_5, &VAR_14->recovery);
 else if (!FUNC_5(VAR_12[0], "recover")) {
  FUNC_4(VAR_6, &VAR_14->recovery);
  FUNC_4(VAR_5, &VAR_14->recovery);
 } else {
  if (!FUNC_5(VAR_12[0], "check"))
   FUNC_4(VAR_2, &VAR_14->recovery);
  else if (!!FUNC_5(VAR_12[0], "repair"))
   return -VAR_1;
  FUNC_4(VAR_7, &VAR_14->recovery);
  FUNC_4(VAR_9, &VAR_14->recovery);
 }
 if (VAR_14->ro == 2) {



  VAR_14->ro = 0;
  if (!VAR_14->suspended)
   FUNC_3(VAR_14->sync_thread);
 }
 FUNC_4(VAR_5, &VAR_14->recovery);
 if (!VAR_14->suspended)
  FUNC_3(VAR_14->thread);

 return 0;
}
