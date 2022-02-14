
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct iwl_priv {int init_ucode_run; int ucode_loaded; int trans; int notif_wait; TYPE_3__* fw; int mutex; } ;
struct iwl_notification_wait {int dummy; } ;
struct TYPE_6__ {TYPE_2__* img; } ;
struct TYPE_5__ {TYPE_1__* sec; } ;
struct TYPE_4__ {int len; } ;


 int FUNC_0 (int const*) ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (int *,struct iwl_notification_wait*,int const*,int ,int ,struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*,size_t) ;
 int FUNC_4 (int *,struct iwl_notification_wait*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct iwl_notification_wait*,int ) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iwl_priv *VAR_3)
{
 struct iwl_notification_wait VAR_4;
 static const u8 VAR_5[] = {
  128,
  129
 };
 int VAR_6;

 FUNC_7(&VAR_3->mutex);


 if (!VAR_3->fw->img[VAR_0].sec[0].len)
  return 0;

 if (VAR_3->init_ucode_run)
  return 0;

 FUNC_2(&VAR_3->notif_wait, &VAR_4,
       VAR_5, FUNC_0(VAR_5),
       VAR_2, VAR_3);


 VAR_6 = FUNC_3(VAR_3, VAR_0);
 if (VAR_6)
  goto error;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6)
  goto error;





 VAR_6 = FUNC_6(&VAR_3->notif_wait, &VAR_4,
     VAR_1);
 if (!VAR_6)
  VAR_3->init_ucode_run = 1;

 goto out;

 error:
 FUNC_4(&VAR_3->notif_wait, &VAR_4);
 out:

 FUNC_5(VAR_3->trans);
 VAR_3->ucode_loaded = 0;

 return VAR_6;
}
