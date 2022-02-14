
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;
struct TYPE_2__ {int * phy; } ;
struct bnx2x {TYPE_1__ link_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int *,TYPE_1__*,int ,int ,int ,int*) ;
 int FUNC_5 (struct bnx2x*) ;
 struct bnx2x* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_14,
     struct ethtool_modinfo *VAR_15)
{
 struct bnx2x *VAR_16 = FUNC_6(VAR_14);
 int VAR_17, VAR_18;
 u8 VAR_19, VAR_20;

 if (!FUNC_3(VAR_16)) {
  FUNC_0(VAR_0 | VAR_1,
     "cannot access eeprom when the interface is down\n");
  return -VAR_2;
 }
 VAR_17 = FUNC_2(VAR_16);
 FUNC_1(VAR_16);
 VAR_18 = FUNC_4(&VAR_16->link_params.phy[VAR_17],
       &VAR_16->link_params,
       VAR_8,
       VAR_12,
       VAR_13,
       &VAR_19);
 FUNC_5(VAR_16);
 if (VAR_18) {
  FUNC_0(VAR_0, "Failed reading SFF-8472 comp field\n");
  return -VAR_3;
 }

 FUNC_1(VAR_16);
 VAR_18 = FUNC_4(&VAR_16->link_params.phy[VAR_17],
       &VAR_16->link_params,
       VAR_8,
       VAR_10,
       VAR_11,
       &VAR_20);
 FUNC_5(VAR_16);
 if (VAR_18) {
  FUNC_0(VAR_0, "Failed reading Diag Type field\n");
  return -VAR_3;
 }

 if (!VAR_19 ||
     (VAR_20 & VAR_9)) {
  VAR_15->type = VAR_4;
  VAR_15->eeprom_len = VAR_5;
 } else {
  VAR_15->type = VAR_6;
  VAR_15->eeprom_len = VAR_7;
 }
 return 0;
}
