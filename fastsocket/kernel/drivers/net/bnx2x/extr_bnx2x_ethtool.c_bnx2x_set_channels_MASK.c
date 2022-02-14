
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bnx2x*,scalar_t__) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,int ,int) ;
 struct bnx2x* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4,
         struct ethtool_channels *VAR_5)
{
 struct bnx2x *VAR_6 = FUNC_6(VAR_4);

 FUNC_2(VAR_0,
    "set-channels command parameters: rx = %d, tx = %d, other = %d, combined = %d\n",
    VAR_5->rx_count, VAR_5->tx_count, VAR_5->other_count,
    VAR_5->combined_count);




 if (VAR_5->rx_count || VAR_5->tx_count || VAR_5->other_count
     || (VAR_5->combined_count == 0) ||
     (VAR_5->combined_count > FUNC_0(VAR_6))) {
  FUNC_2(VAR_0, "command parameters not supported\n");
  return -VAR_1;
 }


 if (VAR_5->combined_count == FUNC_1(VAR_6)) {
  FUNC_2(VAR_0, "No change in active parameters\n");
  return 0;
 }





 if (FUNC_8(!FUNC_7(VAR_4))) {
  FUNC_3(VAR_6, VAR_5->combined_count);
  return 0;
 }
 FUNC_5(VAR_6, VAR_3, 1);
 FUNC_3(VAR_6, VAR_5->combined_count);
 return FUNC_4(VAR_6, VAR_2);
}
