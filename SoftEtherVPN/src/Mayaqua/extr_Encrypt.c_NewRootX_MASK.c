
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X_SERIAL ;
typedef int X509 ;
typedef int X ;
typedef int UINT ;
typedef int NAME ;
typedef int K ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int *,int ,int *) ;
 int * FUNC_3 (int *) ;

X *FUNC_4(K *VAR_0, K *VAR_1, NAME *VAR_2, UINT VAR_3, X_SERIAL *VAR_4)
{
 X509 *VAR_5;
 X *VAR_6, *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_0(VAR_6);
 FUNC_1(VAR_6);

 return VAR_7;
}
