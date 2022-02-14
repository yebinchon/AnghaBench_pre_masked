
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int ro; int in_sync; int safemode; scalar_t__ hold_active; int sysfs_state; int gendisk; int sb_wait; int flags; int pers; int write_lock; int writes_pending; } ;
typedef int ssize_t ;
typedef enum array_state { ____Placeholder_array_state } array_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int *) ;



 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*,int,int *) ;

 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (struct mddev*,int *) ;


 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;


__attribute__((used)) static ssize_t
FUNC_13(struct mddev *VAR_6, const char *VAR_7, size_t VAR_8)
{
 int VAR_9 = -VAR_1;
 enum array_state VAR_10 = FUNC_4(VAR_7, VAR_5);
 switch(VAR_10) {
 case 135:
  break;
 case 133:

  VAR_9 = FUNC_3(VAR_6, 0, ((void*)0));
  break;
 case 132:

  if (VAR_6->pers)
   VAR_9 = FUNC_3(VAR_6, 2, ((void*)0));
  else
   VAR_9 = 0;
  break;
 case 129:
  break;
 case 130:
  if (VAR_6->pers)
   VAR_9 = FUNC_5(VAR_6, ((void*)0));
  else {
   VAR_6->ro = 1;
   FUNC_8(VAR_6->gendisk, 1);
   VAR_9 = FUNC_2(VAR_6);
  }
  break;
 case 131:
  if (VAR_6->pers) {
   if (VAR_6->ro == 0)
    VAR_9 = FUNC_5(VAR_6, ((void*)0));
   else if (VAR_6->ro == 1)
    VAR_9 = FUNC_6(VAR_6);
   if (VAR_9 == 0) {
    VAR_6->ro = 2;
    FUNC_8(VAR_6->gendisk, 0);
   }
  } else {
   VAR_6->ro = 2;
   VAR_9 = FUNC_2(VAR_6);
  }
  break;
 case 134:
  if (VAR_6->pers) {
   FUNC_6(VAR_6);
   FUNC_9(&VAR_6->write_lock);
   if (FUNC_0(&VAR_6->writes_pending) == 0) {
    if (VAR_6->in_sync == 0) {
     VAR_6->in_sync = 1;
     if (VAR_6->safemode == 1)
      VAR_6->safemode = 0;
     FUNC_7(VAR_2, &VAR_6->flags);
    }
    VAR_9 = 0;
   } else
    VAR_9 = -VAR_0;
   FUNC_10(&VAR_6->write_lock);
  } else
   VAR_9 = -VAR_1;
  break;
 case 137:
  if (VAR_6->pers) {
   FUNC_6(VAR_6);
   FUNC_1(VAR_3, &VAR_6->flags);
   FUNC_12(&VAR_6->sb_wait);
   VAR_9 = 0;
  } else {
   VAR_6->ro = 0;
   FUNC_8(VAR_6->gendisk, 0);
   VAR_9 = FUNC_2(VAR_6);
  }
  break;
 case 128:
 case 136:

  break;
 }
 if (VAR_9)
  return VAR_9;
 else {
  if (VAR_6->hold_active == VAR_4)
   VAR_6->hold_active = 0;
  FUNC_11(VAR_6->sysfs_state);
  return VAR_8;
 }
}
