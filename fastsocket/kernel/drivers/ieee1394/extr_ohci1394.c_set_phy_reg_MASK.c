
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ti_ohci {int phy_reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ti_ohci*,int ) ;
 int FUNC_3 (struct ti_ohci*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ti_ohci *VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 u32 VAR_8 = 0;

 FUNC_4 (&VAR_3->phy_reg_lock, VAR_7);

 FUNC_3(VAR_3, VAR_1, (VAR_4 << 8) | VAR_5 | 0x00004000);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_8 = FUNC_2(VAR_3, VAR_1);
  if (!(VAR_8 & 0x00004000))
   break;

  FUNC_1(1);
 }

 if (VAR_6 == VAR_2)
  FUNC_0 (VAR_0, "Set PHY Reg timeout [0x%08x/0x%08x/%d]",
         VAR_8, VAR_8 & 0x00004000, VAR_6);

 FUNC_5 (&VAR_3->phy_reg_lock, VAR_7);

 return;
}
