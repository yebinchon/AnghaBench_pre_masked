
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int ro; scalar_t__ raid_disks; scalar_t__ dev_sectors; int disks; int safemode; int flags; int in_sync; scalar_t__ pers; } ;
typedef int ssize_t ;
typedef enum array_state { ____Placeholder_array_state } array_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_9 ;

__attribute__((used)) static ssize_t
FUNC_3(struct mddev *VAR_10, char *VAR_11)
{
 enum array_state VAR_12 = VAR_6;

 if (VAR_10->pers)
  switch(VAR_10->ro) {
  case 1:
   VAR_12 = VAR_8;
   break;
  case 2:
   VAR_12 = VAR_7;
   break;
  case 0:
   if (VAR_10->in_sync)
    VAR_12 = VAR_4;
   else if (FUNC_2(VAR_0, &VAR_10->flags))
    VAR_12 = VAR_9;
   else if (VAR_10->safemode)
    VAR_12 = VAR_2;
   else
    VAR_12 = VAR_1;
  }
 else {
  if (FUNC_0(&VAR_10->disks) &&
      VAR_10->raid_disks == 0 &&
      VAR_10->dev_sectors == 0)
   VAR_12 = VAR_5;
  else
   VAR_12 = VAR_6;
 }
 return FUNC_1(VAR_11, "%s\n", VAR_3[VAR_12]);
}
