
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ath_common {scalar_t__ keymax; int crypt_caps; void* ah; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,int ,int ) ;
 int FUNC_12 (struct ath_common*,char*,scalar_t__) ;

bool FUNC_13(struct ath_common *VAR_3, u16 VAR_4)
{
 u32 VAR_5;
 void *VAR_6 = VAR_3->ah;

 if (VAR_4 >= VAR_3->keymax) {
  FUNC_12(VAR_3, "keyreset: keycache entry %u out of range\n",
   VAR_4);
  return 0;
 }

 VAR_5 = FUNC_10(VAR_6, FUNC_7(VAR_4));

 FUNC_8(VAR_6);

 FUNC_11(VAR_6, FUNC_0(VAR_4), 0);
 FUNC_11(VAR_6, FUNC_1(VAR_4), 0);
 FUNC_11(VAR_6, FUNC_2(VAR_4), 0);
 FUNC_11(VAR_6, FUNC_3(VAR_4), 0);
 FUNC_11(VAR_6, FUNC_4(VAR_4), 0);
 FUNC_11(VAR_6, FUNC_7(VAR_4), VAR_0);
 FUNC_11(VAR_6, FUNC_5(VAR_4), 0);
 FUNC_11(VAR_6, FUNC_6(VAR_4), 0);

 if (VAR_5 == VAR_1) {
  u16 VAR_7 = VAR_4 + 64;

  FUNC_11(VAR_6, FUNC_0(VAR_7), 0);
  FUNC_11(VAR_6, FUNC_1(VAR_7), 0);
  FUNC_11(VAR_6, FUNC_2(VAR_7), 0);
  FUNC_11(VAR_6, FUNC_3(VAR_7), 0);
  if (VAR_3->crypt_caps & VAR_2) {
   FUNC_11(VAR_6, FUNC_4(VAR_7), 0);
   FUNC_11(VAR_6, FUNC_7(VAR_7),
      VAR_0);
  }

 }

 FUNC_9(VAR_6);

 return 1;
}
