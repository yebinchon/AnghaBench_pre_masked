
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_deauthenticate {void* reasoncode; int macaddr; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_deauthenticate*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct cmd_ds_802_11_deauthenticate*,int ,int) ;

int FUNC_7(struct lbs_private *VAR_3, u8 VAR_4[VAR_1],
     u16 VAR_5)
{
 struct cmd_ds_802_11_deauthenticate VAR_6;
 int VAR_7;

 FUNC_2(VAR_2);

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 FUNC_5(VAR_6.macaddr, &VAR_4[0], VAR_1);
 VAR_6.reasoncode = FUNC_0(VAR_5);

 VAR_7 = FUNC_1(VAR_3, VAR_0, &VAR_6);




 FUNC_4(VAR_3);

 FUNC_3(VAR_2);
 return VAR_7;
}
