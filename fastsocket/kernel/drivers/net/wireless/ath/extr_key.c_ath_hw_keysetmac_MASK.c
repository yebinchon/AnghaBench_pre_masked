
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ath_common {scalar_t__ keymax; void* ah; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (struct ath_common*,char*,scalar_t__) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;

__attribute__((used)) static bool FUNC_8(struct ath_common *VAR_1,
        u16 VAR_2, const u8 *VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6 = VAR_0;
 void *VAR_7 = VAR_1->ah;

 if (VAR_2 >= VAR_1->keymax) {
  FUNC_5(VAR_1, "keysetmac: keycache entry %u out of range\n",
   VAR_2);
  return 0;
 }

 if (VAR_3 != ((void*)0)) {







  if (VAR_3[0] & 0x01)
   VAR_6 = 0;

  VAR_5 = FUNC_7(VAR_3);
  VAR_4 = FUNC_6(VAR_3 + 4);
  VAR_5 >>= 1;
  VAR_5 |= (VAR_4 & 1) << 31;
  VAR_4 >>= 1;
 } else {
  VAR_5 = VAR_4 = 0;
 }
 FUNC_2(VAR_7);

 FUNC_4(VAR_7, FUNC_0(VAR_2), VAR_5);
 FUNC_4(VAR_7, FUNC_1(VAR_2), VAR_4 | VAR_6);

 FUNC_3(VAR_7);

 return 1;
}
