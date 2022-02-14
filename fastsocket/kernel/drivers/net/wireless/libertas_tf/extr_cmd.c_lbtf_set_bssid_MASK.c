
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lbtf_private {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct cmd_ds_set_bssid {int activate; TYPE_1__ hdr; int bssid; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lbtf_private*,int ,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int const*,int ) ;

void FUNC_5(struct lbtf_private *VAR_3, bool VAR_4, const u8 *VAR_5)
{
 struct cmd_ds_set_bssid VAR_6;
 FUNC_2(VAR_2);

 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 VAR_6.activate = VAR_4 ? 1 : 0;
 if (VAR_4)
  FUNC_4(VAR_6.bssid, VAR_5, VAR_1);

 FUNC_1(VAR_3, VAR_0, &VAR_6.hdr, sizeof(VAR_6));
 FUNC_3(VAR_2);
}
