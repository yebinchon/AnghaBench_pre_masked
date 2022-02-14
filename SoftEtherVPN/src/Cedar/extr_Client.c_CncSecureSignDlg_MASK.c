
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCK ;
typedef int SECURE_SIGN ;
typedef int PACK ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *,char*) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int) ;

bool FUNC_13(SECURE_SIGN *VAR_0)
{
 SOCK *VAR_1;
 PACK *VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_0();
 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_5();
 FUNC_7(VAR_2, "function", "secure_sign");
 FUNC_6(VAR_2, VAR_0);

 FUNC_11(VAR_1, VAR_2);
 FUNC_2(VAR_2);

 VAR_2 = FUNC_9(VAR_1);
 if (VAR_2 != ((void*)0))
 {
  VAR_3 = FUNC_8(VAR_2, "ret");

  if (VAR_3)
  {
   FUNC_3(VAR_0);

   FUNC_12(VAR_0, sizeof(SECURE_SIGN));
   FUNC_4(VAR_0, VAR_2);
  }

  FUNC_2(VAR_2);
 }

 FUNC_1(VAR_1);
 FUNC_10(VAR_1);

 return VAR_3;
}
