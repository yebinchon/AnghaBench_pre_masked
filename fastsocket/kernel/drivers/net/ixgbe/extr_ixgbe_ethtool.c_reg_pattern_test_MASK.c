
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct ixgbe_adapter {TYPE_1__ hw; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int,int const) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int const,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct ixgbe_adapter *VAR_1, u64 *VAR_2, int VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 static const u32 VAR_9[] = {
  0x5A5A5A5A, 0xA5A5A5A5, 0x00000000, 0xFFFFFFFF};

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_9); VAR_6++) {
  VAR_8 = FUNC_2(VAR_1->hw.hw_addr + VAR_3);
  FUNC_3((VAR_9[VAR_6] & VAR_5),
         (VAR_1->hw.hw_addr + VAR_3));
  VAR_7 = FUNC_2(VAR_1->hw.hw_addr + VAR_3);
  if (VAR_7 != (VAR_9[VAR_6] & VAR_5 & VAR_4)) {
   FUNC_1(VAR_0, "pattern test reg %04X failed: got "
         "0x%08X expected 0x%08X\n",
         VAR_3, VAR_7, (VAR_9[VAR_6] & VAR_5 & VAR_4));
   *VAR_2 = VAR_3;
   FUNC_3(VAR_8, VAR_1->hw.hw_addr + VAR_3);
   return 1;
  }
  FUNC_3(VAR_8, VAR_1->hw.hw_addr + VAR_3);
 }
 return 0;
}
