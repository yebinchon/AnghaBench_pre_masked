
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1_hw {scalar_t__ hw_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct atl1_hw *VAR_5, u32 VAR_6, u32 *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 if (VAR_6 & 3)

  return 0;

 FUNC_1(0, VAR_5->hw_addr + VAR_1);
 VAR_9 = (VAR_6 & VAR_2) << VAR_3;
 FUNC_1(VAR_9, VAR_5->hw_addr + VAR_0);
 FUNC_0(VAR_5->hw_addr + VAR_0);

 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  FUNC_2(2);
  VAR_9 = FUNC_0(VAR_5->hw_addr + VAR_0);
  if (VAR_9 & VAR_4)
   break;
 }
 if (VAR_9 & VAR_4) {
  *VAR_7 = FUNC_0(VAR_5->hw_addr + VAR_1);
  return 1;
 }

 return 0;
}
