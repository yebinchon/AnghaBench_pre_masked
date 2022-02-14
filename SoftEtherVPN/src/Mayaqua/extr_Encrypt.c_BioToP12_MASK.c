
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKCS12 ;
typedef int P12 ;
typedef int BIO ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int VAR_0 ;

P12 *FUNC_4(BIO *VAR_1)
{
 PKCS12 *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_0(VAR_0);
 {
  VAR_2 = FUNC_3(VAR_1, ((void*)0));
 }
 FUNC_2(VAR_0);
 if (VAR_2 == ((void*)0))
 {

  return ((void*)0);
 }

 return FUNC_1(VAR_2);
}
