
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; int rule_cnt; int fs; int flow_type; } ;
struct efx_nic {int n_rx_channels; } ;
typedef int s32 ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int FUNC_0 (struct efx_nic*,int *) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 void* FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int ,int *,int) ;
 unsigned int FUNC_4 (struct efx_nic*) ;
 struct efx_nic* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_9,
        struct ethtool_rxnfc *VAR_10, void *VAR_11)
{
 u32 *VAR_12 = (u32 *)VAR_11;
 struct efx_nic *VAR_13 = FUNC_5(VAR_9);

 switch (VAR_10->cmd) {
 case 136:
  VAR_10->data = VAR_13->n_rx_channels;
  return 0;

 case 137: {
  unsigned VAR_14 = 0;

  VAR_10->data = 0;
  switch (VAR_10->flow_type) {
  case 131:
   VAR_10->data |= VAR_6 | VAR_7;

  case 129:
  case 133:
  case 142:
  case 135:
   VAR_10->data |= VAR_5 | VAR_4;
   VAR_14 = VAR_1;
   break;
  case 130:
   VAR_10->data |= VAR_6 | VAR_7;

  case 128:
  case 132:
  case 141:
  case 134:
   VAR_10->data |= VAR_5 | VAR_4;
   VAR_14 = VAR_2;
   break;
  default:
   break;
  }
  if (FUNC_4(VAR_13) < VAR_14)
   VAR_10->data = 0;
  return 0;
 }

 case 139:
  VAR_10->data = FUNC_2(VAR_13);
  if (VAR_10->data == 0)
   return -VAR_3;
  VAR_10->data |= VAR_8;
  VAR_10->rule_cnt =
   FUNC_1(VAR_13, VAR_0);
  return 0;

 case 138:
  if (FUNC_2(VAR_13) == 0)
   return -VAR_3;
  return FUNC_0(VAR_13, &VAR_10->fs);

 case 140: {
  s32 VAR_15;
  VAR_10->data = FUNC_2(VAR_13);
  if (VAR_10->data == 0)
   return -VAR_3;
  VAR_15 = FUNC_3(VAR_13, VAR_0,
        VAR_12, VAR_10->rule_cnt);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_10->rule_cnt = VAR_15;
  return 0;
 }

 default:
  return -VAR_3;
 }
}
