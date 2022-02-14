
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ti_ohci {int phy_reg_lock; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ti_ohci*,int ) ;
 int FUNC_3 (struct ti_ohci*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static u8 FUNC_6(struct ti_ohci *VAR_3, u8 VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 quadlet_t VAR_7;

 FUNC_4 (&VAR_3->phy_reg_lock, VAR_6);

 FUNC_3(VAR_3, VAR_1, (VAR_4 << 8) | 0x00008000);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (FUNC_2(VAR_3, VAR_1) & 0x80000000)
   break;

  FUNC_1(1);
 }

 VAR_7 = FUNC_2(VAR_3, VAR_1);

 if (VAR_5 >= VAR_2)
  FUNC_0 (VAR_0, "Get PHY Reg timeout [0x%08x/0x%08x/%d]",
         VAR_7, VAR_7 & 0x80000000, VAR_5);

 FUNC_5 (&VAR_3->phy_reg_lock, VAR_6);

 return (VAR_7 & 0x00ff0000) >> 16;
}
