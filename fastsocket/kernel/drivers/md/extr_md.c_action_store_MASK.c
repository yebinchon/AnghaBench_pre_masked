
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int ro; int sysfs_action; scalar_t__ thread; int recovery; scalar_t__ sync_thread; int kobj; TYPE_1__* pers; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* start_reshape ) (struct mddev*) ;int sync_request; } ;


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
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (int *,int *,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_9(struct mddev *VAR_10, const char *VAR_11, size_t VAR_12)
{
 if (!VAR_10->pers || !VAR_10->pers->sync_request)
  return -VAR_1;

 if (FUNC_1(VAR_11, "frozen"))
  FUNC_4(VAR_3, &VAR_10->recovery);
 else
  FUNC_0(VAR_3, &VAR_10->recovery);

 if (FUNC_1(VAR_11, "idle") || FUNC_1(VAR_11, "frozen")) {
  if (VAR_10->sync_thread) {
   FUNC_4(VAR_4, &VAR_10->recovery);
   FUNC_2(VAR_10);
  }
 } else if (FUNC_8(VAR_8, &VAR_10->recovery) ||
     FUNC_8(VAR_5, &VAR_10->recovery))
  return -VAR_0;
 else if (FUNC_1(VAR_11, "resync"))
  FUNC_4(VAR_5, &VAR_10->recovery);
 else if (FUNC_1(VAR_11, "recover")) {
  FUNC_4(VAR_6, &VAR_10->recovery);
  FUNC_4(VAR_5, &VAR_10->recovery);
 } else if (FUNC_1(VAR_11, "reshape")) {
  int VAR_13;
  if (VAR_10->pers->start_reshape == ((void*)0))
   return -VAR_1;
  VAR_13 = VAR_10->pers->start_reshape(VAR_10);
  if (VAR_13)
   return VAR_13;
  FUNC_6(&VAR_10->kobj, ((void*)0), "degraded");
 } else {
  if (FUNC_1(VAR_11, "check"))
   FUNC_4(VAR_2, &VAR_10->recovery);
  else if (!FUNC_1(VAR_11, "repair"))
   return -VAR_1;
  FUNC_4(VAR_7, &VAR_10->recovery);
  FUNC_4(VAR_9, &VAR_10->recovery);
 }
 if (VAR_10->ro == 2) {



  VAR_10->ro = 0;
  FUNC_3(VAR_10->sync_thread);
 }
 FUNC_4(VAR_5, &VAR_10->recovery);
 FUNC_3(VAR_10->thread);
 FUNC_7(VAR_10->sysfs_action);
 return VAR_12;
}
