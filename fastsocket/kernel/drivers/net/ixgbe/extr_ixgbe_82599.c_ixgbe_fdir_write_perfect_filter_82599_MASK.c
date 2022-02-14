
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bkt_hash; int flow_type; scalar_t__ vm_pool; int vlan_id; int flex_bytes; int src_port; int dst_port; int * dst_ip; int * src_ip; } ;
union ixgbe_atr_input {TYPE_1__ formatted; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_5 (int ) ;

s32 FUNC_6(struct ixgbe_hw *VAR_18,
       union ixgbe_atr_input *VAR_19,
       u16 VAR_20, u8 VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24, VAR_25;


 FUNC_4(VAR_18, FUNC_0(0),
        VAR_19->formatted.src_ip[0]);
 FUNC_4(VAR_18, FUNC_0(1),
        VAR_19->formatted.src_ip[1]);
 FUNC_4(VAR_18, FUNC_0(2),
        VAR_19->formatted.src_ip[2]);


 FUNC_4(VAR_18, VAR_12, VAR_19->formatted.src_ip[0]);


 FUNC_4(VAR_18, VAR_11, VAR_19->formatted.dst_ip[0]);


 VAR_22 = FUNC_5(VAR_19->formatted.dst_port);
 VAR_22 <<= VAR_14;
 VAR_22 |= FUNC_5(VAR_19->formatted.src_port);
 FUNC_3(VAR_18, VAR_13, VAR_22);


 VAR_23 = FUNC_1(VAR_19->formatted.flex_bytes);
 VAR_23 <<= VAR_16;
 VAR_23 |= FUNC_5(VAR_19->formatted.vlan_id);
 FUNC_3(VAR_18, VAR_15, VAR_23);


 VAR_24 = VAR_19->formatted.bkt_hash;
 VAR_24 |= VAR_20 << VAR_10;
 FUNC_3(VAR_18, VAR_9, VAR_24);





 FUNC_2(VAR_18);


 VAR_25 = VAR_1 | VAR_3 |
    VAR_5 | VAR_6;
 if (VAR_21 == VAR_17)
  VAR_25 |= VAR_2;
 VAR_25 |= VAR_19->formatted.flow_type << VAR_4;
 VAR_25 |= (u32)VAR_21 << VAR_7;
 VAR_25 |= (u32)VAR_19->formatted.vm_pool << VAR_8;

 FUNC_3(VAR_18, VAR_0, VAR_25);

 return 0;
}
