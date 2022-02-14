
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_hw {int revision_id; int device_id; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;
struct ethtool_regs {int version; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_11 ;
 int FUNC_19 (struct ixgbe_hw*,char*,int ,int ) ;
 int FUNC_20 (struct net_device*) ;
 int * VAR_12 ;
 int FUNC_21 (void*,int ,int ) ;
 struct ixgbevf_adapter* FUNC_22 (struct net_device*) ;

__attribute__((used)) static void FUNC_23(struct net_device *VAR_13,
        struct ethtool_regs *VAR_14,
        void *VAR_15)
{
 struct ixgbevf_adapter *VAR_16 = FUNC_22(VAR_13);
 struct ixgbe_hw *VAR_17 = &VAR_16->hw;
 u32 *VAR_18 = VAR_15;
 u32 VAR_19 = FUNC_20(VAR_13);
 u8 VAR_20;

 FUNC_21(VAR_15, 0, VAR_19);

 VAR_14->version = (1 << 24) | VAR_17->revision_id << 16 | VAR_17->device_id;


 VAR_18[0] = FUNC_1(VAR_17, VAR_0);
 VAR_18[1] = FUNC_1(VAR_17, VAR_5);
 VAR_18[2] = FUNC_1(VAR_17, VAR_2);
 VAR_18[3] = FUNC_1(VAR_17, VAR_4);
 VAR_18[4] = FUNC_1(VAR_17, VAR_1);




 VAR_18[5] = FUNC_1(VAR_17, VAR_8);
 VAR_18[6] = FUNC_1(VAR_17, VAR_8);
 VAR_18[7] = FUNC_1(VAR_17, VAR_10);
 VAR_18[8] = FUNC_1(VAR_17, VAR_9);
 VAR_18[9] = FUNC_1(VAR_17, VAR_6);
 VAR_18[10] = FUNC_1(VAR_17, VAR_7);
 VAR_18[11] = FUNC_1(VAR_17, FUNC_17(0));
 VAR_18[12] = FUNC_1(VAR_17, FUNC_18(0));
 VAR_18[13] = FUNC_1(VAR_17, VAR_11);


 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[14 + VAR_20] = FUNC_1(VAR_17, FUNC_3(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[16 + VAR_20] = FUNC_1(VAR_17, FUNC_2(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[18 + VAR_20] = FUNC_1(VAR_17, FUNC_5(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[20 + VAR_20] = FUNC_1(VAR_17, FUNC_4(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[22 + VAR_20] = FUNC_1(VAR_17, FUNC_6(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[24 + VAR_20] = FUNC_1(VAR_17, FUNC_7(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[26 + VAR_20] = FUNC_1(VAR_17, FUNC_8(VAR_20));


 VAR_18[28] = FUNC_1(VAR_17, VAR_3);


 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[29 + VAR_20] = FUNC_1(VAR_17, FUNC_10(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[31 + VAR_20] = FUNC_1(VAR_17, FUNC_9(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[33 + VAR_20] = FUNC_1(VAR_17, FUNC_12(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[35 + VAR_20] = FUNC_1(VAR_17, FUNC_11(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[37 + VAR_20] = FUNC_1(VAR_17, FUNC_13(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[39 + VAR_20] = FUNC_1(VAR_17, FUNC_16(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[41 + VAR_20] = FUNC_1(VAR_17, FUNC_15(VAR_20));
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++)
  VAR_18[43 + VAR_20] = FUNC_1(VAR_17, FUNC_14(VAR_20));

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_12); VAR_20++)
  FUNC_19(VAR_17, "%s\t%8.8x\n", VAR_12[VAR_20], VAR_18[VAR_20]);
}
