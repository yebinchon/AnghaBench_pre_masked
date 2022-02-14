
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbtf_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_beacon_control {TYPE_1__ hdr; void* beacon_period; void* beacon_enable; void* action; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbtf_private*,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct lbtf_private *VAR_3, bool VAR_4,
       int VAR_5)
{
 struct cmd_ds_802_11_beacon_control VAR_6;
 FUNC_2(VAR_2);

 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 VAR_6.action = FUNC_0(VAR_1);
 VAR_6.beacon_enable = FUNC_0(VAR_4);
 VAR_6.beacon_period = FUNC_0(VAR_5);

 FUNC_1(VAR_3, VAR_0, &VAR_6.hdr, sizeof(VAR_6));

 FUNC_3(VAR_2);
 return 0;
}
