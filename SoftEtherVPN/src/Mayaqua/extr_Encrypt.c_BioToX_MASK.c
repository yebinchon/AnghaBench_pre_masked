
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int X ;
typedef int BIO ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int VAR_0 ;

X *FUNC_5(BIO *VAR_1, bool VAR_2)
{
 X *VAR_3;
 X509 *VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_0(VAR_0);
 {

  if (VAR_2 == 0)
  {

   VAR_4 = FUNC_4(VAR_1, ((void*)0));
  }
  else
  {

   VAR_4 = FUNC_1(VAR_1, ((void*)0), ((void*)0), ((void*)0));
  }
 }
 FUNC_2(VAR_0);

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_3(VAR_4);

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 return VAR_3;
}
