
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct cmd_ds_802_11_authenticate {int authtype; int bssid; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_ds_802_11_authenticate*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct lbs_private *VAR_3, u8 VAR_4[6], u8 VAR_5)
{
 struct cmd_ds_802_11_authenticate VAR_6;
 int VAR_7 = -1;

 FUNC_3(VAR_2);

 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 FUNC_6(VAR_6.bssid, VAR_4, VAR_1);

 VAR_6.authtype = FUNC_1(VAR_5);

 FUNC_4("AUTH_CMD: BSSID %pM, auth 0x%x\n", VAR_4, VAR_6.authtype);

 VAR_7 = FUNC_2(VAR_3, VAR_0, &VAR_6);

 FUNC_5(VAR_2, "ret %d", VAR_7);
 return VAR_7;
}
