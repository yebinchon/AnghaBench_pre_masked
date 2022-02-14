
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int K ;
typedef int BUF ;
typedef int BIO ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int ,int ) ;

BUF *FUNC_4(K *VAR_0, bool VAR_1, char *VAR_2)
{
 BUF *VAR_3;
 BIO *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_4);
 FUNC_1(VAR_4);

 FUNC_3(VAR_3, 0, 0);

 return VAR_3;
}
