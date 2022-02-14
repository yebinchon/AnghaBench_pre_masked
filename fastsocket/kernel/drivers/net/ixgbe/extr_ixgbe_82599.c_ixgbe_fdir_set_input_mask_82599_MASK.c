
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vm_pool; int flow_type; int flex_bytes; int * dst_ip; int * src_ip; int vlan_id; int src_port; int dst_port; scalar_t__ bkt_hash; } ;
union ixgbe_atr_input {TYPE_1__ formatted; } ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;



 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int FUNC_3 (union ixgbe_atr_input*) ;
 int FUNC_4 (int ) ;

s32 FUNC_5(struct ixgbe_hw *VAR_12,
        union ixgbe_atr_input *VAR_13)
{

 u32 VAR_14 = VAR_3;
 u32 VAR_15;
 if (VAR_13->formatted.bkt_hash)
  FUNC_2(VAR_12, " bucket hash should always be 0 in mask\n");


 switch (VAR_13->formatted.vm_pool & 0x7F) {
 case 0x0:
  VAR_14 |= VAR_6;
 case 0x7F:
  break;
 default:
  FUNC_2(VAR_12, " Error on vm pool mask\n");
  return VAR_0;
 }

 switch (VAR_13->formatted.flow_type & 128) {
 case 0x0:
  VAR_14 |= VAR_5;
  if (VAR_13->formatted.dst_port ||
      VAR_13->formatted.src_port) {
   FUNC_2(VAR_12, " Error on src/dst port mask\n");
   return VAR_0;
  }
 case 128:
  break;
 default:
  FUNC_2(VAR_12, " Error on flow type mask\n");
  return VAR_0;
 }

 switch (FUNC_4(VAR_13->formatted.vlan_id) & 0xEFFF) {
 case 0x0000:

  VAR_14 |= VAR_7;
 case 0x0FFF:

  VAR_14 |= VAR_8;
  break;
 case 0xE000:

  VAR_14 |= VAR_7;
 case 0xEFFF:

  break;
 default:
  FUNC_2(VAR_12, " Error on VLAN mask\n");
  return VAR_0;
 }

 switch (VAR_13->formatted.flex_bytes & 0xFFFF) {
 case 0x0000:

  VAR_14 |= VAR_4;
 case 0xFFFF:
  break;
 default:
  FUNC_2(VAR_12, " Error on flexible byte mask\n");
  return VAR_0;
 }


 FUNC_0(VAR_12, VAR_2, VAR_14);


 VAR_15 = FUNC_3(VAR_13);


 FUNC_0(VAR_12, VAR_10, ~VAR_15);
 FUNC_0(VAR_12, VAR_11, ~VAR_15);


 FUNC_1(VAR_12, VAR_9,
        ~VAR_13->formatted.src_ip[0]);
 FUNC_1(VAR_12, VAR_1,
        ~VAR_13->formatted.dst_ip[0]);

 return 0;
}
