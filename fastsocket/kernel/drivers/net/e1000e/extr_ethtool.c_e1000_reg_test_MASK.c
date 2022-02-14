
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct e1000_mac_info {int type; int rar_entry_count; int mta_reg_count; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
struct e1000_adapter {int flags; struct e1000_hw hw; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int,int) ;
 int FUNC_10 (int ,int,int) ;
 int VAR_18 ;







 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static int FUNC_14(struct e1000_adapter *VAR_19, u64 *VAR_20)
{
 struct e1000_hw *VAR_21 = &VAR_19->hw;
 struct e1000_mac_info *VAR_22 = &VAR_19->hw.mac;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29 = 0;





 switch (VAR_22->type) {
 case 133:
 case 132:
 case 134:
  VAR_27 = 0x7FFFF3FF;
  break;
 default:
  VAR_27 = 0x7FFFF033;
  break;
 }

 VAR_24 = FUNC_12(VAR_18);
 VAR_23 = (FUNC_12(VAR_18) & VAR_27);
 FUNC_13(VAR_18, VAR_27);
 VAR_25 = FUNC_12(VAR_18) & VAR_27;
 if (VAR_23 != VAR_25) {
  FUNC_11("failed STATUS register test got: 0x%08X expected: 0x%08X\n",
        VAR_25, VAR_23);
  *VAR_20 = 1;
  return 1;
 }

 FUNC_13(VAR_18, VAR_24);

 if (!(VAR_19->flags & VAR_16)) {
  FUNC_8(VAR_1, 0xFFFFFFFF, 0xFFFFFFFF);
  FUNC_8(VAR_0, 0x0000FFFF, 0xFFFFFFFF);
  FUNC_8(VAR_3, 0x0000FFFF, 0xFFFFFFFF);
  FUNC_8(VAR_15, 0x0000FFFF, 0xFFFFFFFF);
 }

 FUNC_8(VAR_10, 0x0000FFFF, 0xFFFFFFFF);
 FUNC_8(FUNC_0(0), 0xFFFFFFFF, 0xFFFFFFFF);
 FUNC_8(FUNC_3(0), 0x000FFF80, 0x000FFFFF);
 FUNC_8(FUNC_2(0), 0x0000FFFF, 0x0000FFFF);
 FUNC_8(FUNC_4(0), 0x0000FFFF, 0x0000FFFF);
 FUNC_8(VAR_2, 0x0000FFF8, 0x0000FFF8);
 FUNC_8(VAR_4, 0x0000FFFF, 0x0000FFFF);
 FUNC_8(VAR_13, 0x3FFFFFFF, 0x3FFFFFFF);
 FUNC_8(FUNC_5(0), 0xFFFFFFFF, 0xFFFFFFFF);
 FUNC_8(FUNC_7(0), 0x000FFF80, 0x000FFFFF);

 FUNC_10(VAR_9, 0xFFFFFFFF, 0x00000000);

 VAR_24 = ((VAR_19->flags & VAR_16) ? 0x06C3B33E : 0x06DFB3FE);
 FUNC_10(VAR_9, VAR_24, 0x003FFFFB);
 FUNC_10(VAR_11, 0xFFFFFFFF, 0x00000000);

 FUNC_10(VAR_9, VAR_24, 0xFFFFFFFF);
 FUNC_8(FUNC_1(0), 0xFFFFFFF0, 0xFFFFFFFF);
 if (!(VAR_19->flags & VAR_16))
  FUNC_8(VAR_14, 0xC000FFFF, 0x0000FFFF);
 FUNC_8(FUNC_6(0), 0xFFFFFFF0, 0xFFFFFFFF);
 FUNC_8(VAR_12, 0x0000FFFF, 0x0000FFFF);
 VAR_28 = 0x8003FFFF;
 switch (VAR_22->type) {
 case 131:
 case 128:
 case 130:
 case 129:
  VAR_28 |= (1 << 18);
  break;
 default:
  break;
 }

 if (VAR_22->type == 129)
  VAR_29 = (FUNC_12(VAR_17) & VAR_5) >>
      VAR_6;

 for (VAR_26 = 0; VAR_26 < VAR_22->rar_entry_count; VAR_26++) {
  if (VAR_22->type == 129) {

   if ((VAR_29 == 1) || (VAR_29 && (VAR_26 > VAR_29)))
    continue;


   if (VAR_26 == 10)
    VAR_28 |= (1 << 30);
   else
    VAR_28 &= ~(1 << 30);
  }

  FUNC_9(VAR_8, ((VAR_26 << 1) + 1), VAR_28,
           0xFFFFFFFF);
 }

 for (VAR_26 = 0; VAR_26 < VAR_22->mta_reg_count; VAR_26++)
  FUNC_9(VAR_7, VAR_26, 0xFFFFFFFF, 0xFFFFFFFF);

 *VAR_20 = 0;

 return 0;
}
