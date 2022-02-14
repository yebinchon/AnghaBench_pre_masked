
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int dummy; } ;
struct ethtool_eeprom {scalar_t__ offset; scalar_t__ len; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_eeprom_access {int value; void* len; void* offset; void* action; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_eeprom_access*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6,
                                  struct ethtool_eeprom *VAR_7, u8 * VAR_8)
{
 struct lbs_private *VAR_9 = VAR_6->ml_priv;
 struct cmd_ds_802_11_eeprom_access VAR_10;
 int VAR_11;

 FUNC_2(VAR_3);

 if (VAR_7->offset + VAR_7->len > VAR_4 ||
     VAR_7->len > VAR_5) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_10.hdr.size = FUNC_0(sizeof(struct cmd_ds_802_11_eeprom_access) -
  VAR_5 + VAR_7->len);
 VAR_10.action = FUNC_0(VAR_1);
 VAR_10.offset = FUNC_0(VAR_7->offset);
 VAR_10.len = FUNC_0(VAR_7->len);
 VAR_11 = FUNC_1(VAR_9, VAR_0, &VAR_10);
 if (!VAR_11)
  FUNC_4(VAR_8, VAR_10.value, VAR_7->len);

out:
 FUNC_3(VAR_3, "ret %d", VAR_11);
        return VAR_11;
}
