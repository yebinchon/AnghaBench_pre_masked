
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int id; scalar_t__ addr; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef int s32 ;
typedef enum e1000_phy_type { ____Placeholder_e1000_phy_type } e1000_phy_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

s32 FUNC_3(struct e1000_hw *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5;
 enum e1000_phy_type VAR_6 = VAR_2;

 VAR_3->phy.id = VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->phy.addr = VAR_4;
  VAR_5 = 0;

  do {
   FUNC_0(VAR_3);
   VAR_6 = FUNC_1(VAR_3->phy.id);




   if (VAR_6 != VAR_2)
    return 0;

   FUNC_2(1000, 2000);
   VAR_5++;
  } while (VAR_5 < 10);
 }

 return -VAR_0;
}
