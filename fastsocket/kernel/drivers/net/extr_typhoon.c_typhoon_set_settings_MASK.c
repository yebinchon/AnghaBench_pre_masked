
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {int speed; int duplex; void* xcvr_select; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; int duplex; int speed; } ;
struct cmd_desc {void* parm1; } ;
typedef void* __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmd_desc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 struct typhoon* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct typhoon*,int,struct cmd_desc*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_12, struct ethtool_cmd *VAR_13)
{
 struct typhoon *VAR_14 = FUNC_1(VAR_12);
 struct cmd_desc VAR_15;
 __le16 VAR_16;
 int VAR_17;

 VAR_17 = -VAR_3;
 if(VAR_13->autoneg == VAR_0) {
  VAR_16 = VAR_11;
 } else {
  if(VAR_13->duplex == VAR_2) {
   if(VAR_13->speed == VAR_4)
    VAR_16 = VAR_10;
   else if(VAR_13->speed == VAR_5)
    VAR_16 = VAR_8;
   else
    goto out;
  } else if(VAR_13->duplex == VAR_1) {
   if(VAR_13->speed == VAR_4)
    VAR_16 = VAR_9;
   else if(VAR_13->speed == VAR_5)
    VAR_16 = VAR_7;
   else
    goto out;
  } else
   goto out;
 }

 FUNC_0(&VAR_15, VAR_6);
 VAR_15.parm1 = VAR_16;
 VAR_17 = FUNC_2(VAR_14, 1, &VAR_15, 0, ((void*)0));
 if(VAR_17 < 0)
  goto out;

 VAR_14->xcvr_select = VAR_16;
 if(VAR_13->autoneg == VAR_0) {
  VAR_14->speed = 0xff;
  VAR_14->duplex = 0xff;
 } else {
  VAR_14->speed = VAR_13->speed;
  VAR_14->duplex = VAR_13->duplex;
 }

out:
 return VAR_17;
}
