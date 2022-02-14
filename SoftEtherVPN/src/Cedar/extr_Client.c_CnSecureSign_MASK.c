
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sign ;
typedef int SOCK ;
typedef int SECURE_SIGN ;
typedef int PACK ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

void FUNC_9(SOCK *VAR_0, PACK *VAR_1)
{
 SECURE_SIGN VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_8(&VAR_2, sizeof(VAR_2));
 FUNC_2(&VAR_2, VAR_1);






 VAR_3 = 0;


 VAR_1 = FUNC_3();

 FUNC_4(VAR_1, &VAR_2);
 FUNC_1(&VAR_2);

 FUNC_5(VAR_1, "ret", VAR_3);

 FUNC_6(VAR_0, VAR_1);
 FUNC_0(VAR_1);
}
