
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,int,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,char*,int,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct ath_hw *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4[2] = { VAR_1 };
 u32 VAR_5[2];
 static const u32 VAR_6[4] = {
  0x55555555, 0xaaaaaaaa, 0x66666666, 0x99999999
 };
 int VAR_7, VAR_8, VAR_9;

 if (!FUNC_0(VAR_2)) {
  VAR_9 = 2;
  VAR_4[1] = VAR_0 + (8 << 2);
 } else
  VAR_9 = 1;

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  u32 VAR_10 = VAR_4[VAR_7];
  u32 VAR_11, VAR_12;

  VAR_5[VAR_7] = FUNC_1(VAR_2, VAR_10);
  for (VAR_8 = 0; VAR_8 < 0x100; VAR_8++) {
   VAR_11 = (VAR_8 << 16) | VAR_8;
   FUNC_2(VAR_2, VAR_10, VAR_11);
   VAR_12 = FUNC_1(VAR_2, VAR_10);
   if (VAR_12 != VAR_11) {
    FUNC_4(VAR_3,
     "address test failed addr: 0x%08x - wr:0x%08x != rd:0x%08x\n",
     VAR_10, VAR_11, VAR_12);
    return 0;
   }
  }
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   VAR_11 = VAR_6[VAR_8];
   FUNC_2(VAR_2, VAR_10, VAR_11);
   VAR_12 = FUNC_1(VAR_2, VAR_10);
   if (VAR_11 != VAR_12) {
    FUNC_4(VAR_3,
     "address test failed addr: 0x%08x - wr:0x%08x != rd:0x%08x\n",
     VAR_10, VAR_11, VAR_12);
    return 0;
   }
  }
  FUNC_2(VAR_2, VAR_4[VAR_7], VAR_5[VAR_7]);
 }
 FUNC_5(100);

 return 1;
}
