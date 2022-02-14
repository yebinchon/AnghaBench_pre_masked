
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct cmd_ds_802_11_ad_hoc_stop {TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_ad_hoc_stop*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct cmd_ds_802_11_ad_hoc_stop*,int ,int) ;

int FUNC_6(struct lbs_private *VAR_3)
{
 struct cmd_ds_802_11_ad_hoc_stop VAR_4;
 int VAR_5;

 FUNC_2(VAR_2);

 FUNC_5(&VAR_4, 0, sizeof (VAR_4));
 VAR_4.hdr.size = FUNC_0 (sizeof (VAR_4));

 VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_4);


 FUNC_4(VAR_3);

 FUNC_3(VAR_1, "ret %d", VAR_5);
 return VAR_5;
}
