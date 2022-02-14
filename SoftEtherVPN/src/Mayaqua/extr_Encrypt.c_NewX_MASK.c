
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


 int * FUNC_0 (int *,int *,int *,int *,int ,int *) ;
 int * FUNC_1 (int *) ;

X *FUNC_2(K *VAR_0, K *VAR_1, X *VAR_2, NAME *VAR_3, UINT VAR_4, X_SERIAL *VAR_5)
{
 X509 *VAR_6;
 X *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_1(VAR_6);

 if (VAR_7 == ((void*)0))
 {
  return ((void*)0);
 }

 return VAR_7;
}
