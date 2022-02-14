
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_rf_tx_power {int maxlevel; int minlevel; int curlevel; void* action; TYPE_1__ hdr; } ;
typedef int s16 ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_rf_tx_power*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cmd_ds_802_11_rf_tx_power*,int ,int) ;

int FUNC_6(struct lbs_private *VAR_3, s16 *VAR_4, s16 *VAR_5,
       s16 *VAR_6)
{
 struct cmd_ds_802_11_rf_tx_power VAR_7;
 int VAR_8;

 FUNC_2(VAR_2);

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.hdr.size = FUNC_0(sizeof(VAR_7));
 VAR_7.action = FUNC_0(VAR_1);

 VAR_8 = FUNC_1(VAR_3, VAR_0, &VAR_7);
 if (VAR_8 == 0) {
  *VAR_4 = FUNC_4(VAR_7.curlevel);
  if (VAR_5)
   *VAR_5 = VAR_7.minlevel;
  if (VAR_6)
   *VAR_6 = VAR_7.maxlevel;
 }

 FUNC_3(VAR_2);
 return VAR_8;
}
