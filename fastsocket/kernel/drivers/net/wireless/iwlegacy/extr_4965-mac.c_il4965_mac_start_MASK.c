
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int is_open; int status; int wait_command_queue; int mutex; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 scalar_t__ FUNC_5 (struct il_priv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;

int
FUNC_11(struct ieee80211_hw *VAR_3)
{
 struct il_priv *VAR_4 = VAR_3->priv;
 int VAR_5;

 FUNC_1("enter\n");


 FUNC_7(&VAR_4->mutex);
 VAR_5 = FUNC_3(VAR_4);
 FUNC_8(&VAR_4->mutex);

 if (VAR_5)
  return VAR_5;

 if (FUNC_5(VAR_4))
  goto out;

 FUNC_0("Start UP work done.\n");



 VAR_5 = FUNC_10(VAR_4->wait_command_queue,
     FUNC_9(VAR_1, &VAR_4->status),
     VAR_2);
 if (!VAR_5) {
  if (!FUNC_9(VAR_1, &VAR_4->status)) {
   FUNC_2("START_ALIVE timeout after %dms.\n",
    FUNC_6(VAR_2));
   return -VAR_0;
  }
 }

 FUNC_4(VAR_4);

out:
 VAR_4->is_open = 1;
 FUNC_1("leave\n");
 return 0;
}
