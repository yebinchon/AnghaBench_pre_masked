
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lbtf_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_rf_channel {void* channel; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbtf_private*,int ,struct cmd_ds_802_11_rf_channel*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(struct lbtf_private *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;
 struct cmd_ds_802_11_rf_channel VAR_6;

 FUNC_2(VAR_2);

 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 VAR_6.action = FUNC_0(VAR_1);
 VAR_6.channel = FUNC_0(VAR_4);

 VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_6);
 FUNC_3(VAR_2, "ret %d", VAR_5);
 return VAR_5;
}
