
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {scalar_t__ pers; int thread; int recovery; } ;
struct TYPE_2__ {scalar_t__ unacked_exist; } ;
struct md_rdev {int raid_disk; int sysfs_state; int flags; struct mddev* mddev; int blocked_wait; TYPE_1__ badblocks; } ;
typedef int ssize_t ;


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
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct md_rdev*) ;
 int FUNC_3 (struct mddev*,struct md_rdev*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static ssize_t
FUNC_11(struct md_rdev *VAR_11, const char *VAR_12, size_t VAR_13)
{
 int VAR_14 = -VAR_3;
 if (FUNC_1(VAR_12, "faulty") && VAR_11->mddev->pers) {
  FUNC_3(VAR_11->mddev, VAR_11);
  if (FUNC_9(VAR_4, &VAR_11->flags))
   VAR_14 = 0;
  else
   VAR_14 = -VAR_2;
 } else if (FUNC_1(VAR_12, "remove")) {
  if (VAR_11->raid_disk >= 0)
   VAR_14 = -VAR_2;
  else {
   struct mddev *VAR_15 = VAR_11->mddev;
   FUNC_2(VAR_11);
   if (VAR_15->pers)
    FUNC_5(VAR_15, 1);
   FUNC_4(VAR_15);
   VAR_14 = 0;
  }
 } else if (FUNC_1(VAR_12, "writemostly")) {
  FUNC_7(VAR_10, &VAR_11->flags);
  VAR_14 = 0;
 } else if (FUNC_1(VAR_12, "-writemostly")) {
  FUNC_0(VAR_10, &VAR_11->flags);
  VAR_14 = 0;
 } else if (FUNC_1(VAR_12, "blocked")) {
  FUNC_7(VAR_0, &VAR_11->flags);
  VAR_14 = 0;
 } else if (FUNC_1(VAR_12, "-blocked")) {
  if (!FUNC_9(VAR_4, &VAR_11->flags) &&
      VAR_11->badblocks.unacked_exist) {



   FUNC_3(VAR_11->mddev, VAR_11);
  }
  FUNC_0(VAR_0, &VAR_11->flags);
  FUNC_0(VAR_1, &VAR_11->flags);
  FUNC_10(&VAR_11->blocked_wait);
  FUNC_7(VAR_6, &VAR_11->mddev->recovery);
  FUNC_6(VAR_11->mddev->thread);

  VAR_14 = 0;
 } else if (FUNC_1(VAR_12, "insync") && VAR_11->raid_disk == -1) {
  FUNC_7(VAR_5, &VAR_11->flags);
  VAR_14 = 0;
 } else if (FUNC_1(VAR_12, "write_error")) {
  FUNC_7(VAR_9, &VAR_11->flags);
  VAR_14 = 0;
 } else if (FUNC_1(VAR_12, "-write_error")) {
  FUNC_0(VAR_9, &VAR_11->flags);
  VAR_14 = 0;
 } else if (FUNC_1(VAR_12, "want_replacement")) {




  if (VAR_11->raid_disk >= 0 &&
      !FUNC_9(VAR_7, &VAR_11->flags))
   FUNC_7(VAR_8, &VAR_11->flags);
  FUNC_7(VAR_6, &VAR_11->mddev->recovery);
  FUNC_6(VAR_11->mddev->thread);
  VAR_14 = 0;
 } else if (FUNC_1(VAR_12, "-want_replacement")) {



  VAR_14 = 0;
  FUNC_0(VAR_8, &VAR_11->flags);
 } else if (FUNC_1(VAR_12, "replacement")) {




  if (VAR_11->mddev->pers)
   VAR_14 = -VAR_2;
  else {
   FUNC_7(VAR_7, &VAR_11->flags);
   VAR_14 = 0;
  }
 } else if (FUNC_1(VAR_12, "-replacement")) {

  if (VAR_11->mddev->pers)
   VAR_14 = -VAR_2;
  else {
   FUNC_0(VAR_7, &VAR_11->flags);
   VAR_14 = 0;
  }
 }
 if (!VAR_14)
  FUNC_8(VAR_11->sysfs_state);
 return VAR_14 ? VAR_14 : VAR_13;
}
