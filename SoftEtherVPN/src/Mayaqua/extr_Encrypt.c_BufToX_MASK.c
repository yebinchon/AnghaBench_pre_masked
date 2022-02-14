
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X ;
typedef int BUF ;
typedef int BIO ;


 int * FUNC_0 (int *,int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

X *FUNC_4(BUF *VAR_0, bool VAR_1)
{
 X *VAR_2;
 BIO *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == ((void*)0))
 {
  FUNC_3(VAR_0);
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_3, VAR_1);

 FUNC_2(VAR_3);

 return VAR_2;
}
