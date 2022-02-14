
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int ASN1_BIT_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int * FUNC_3 (int ,int ,int *) ;

X509_EXTENSION *FUNC_4()
{
 X509_EXTENSION *VAR_1 = ((void*)0);
 ASN1_BIT_STRING *VAR_2;

 VAR_2 = FUNC_1();
 if (VAR_2 != ((void*)0))
 {
  FUNC_2(VAR_2, 0);
  FUNC_2(VAR_2, 1);
  FUNC_2(VAR_2, 2);
  FUNC_2(VAR_2, 3);

  FUNC_2(VAR_2, 5);
  FUNC_2(VAR_2, 6);

  VAR_1 = FUNC_3(VAR_0, 0, VAR_2);

  FUNC_0(VAR_2);
 }

 return VAR_1;
}
