
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_rf_channel {int channel; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_rf_channel*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct cmd_ds_802_11_rf_channel*,int ,int) ;

int FUNC_7(struct lbs_private *VAR_3)
{
 struct cmd_ds_802_11_rf_channel VAR_4;
 int VAR_5 = 0;

 FUNC_3(VAR_2);

 FUNC_6(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.size = FUNC_0(sizeof(VAR_4));
 VAR_4.action = FUNC_0(VAR_1);

 VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_4);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_5(VAR_4.channel);
 FUNC_2("current radio channel is %d\n", VAR_5);

out:
 FUNC_4(VAR_2, "ret %d", VAR_5);
 return VAR_5;
}
