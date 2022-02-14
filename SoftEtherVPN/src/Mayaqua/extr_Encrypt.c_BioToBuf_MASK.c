
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BUF ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,void*,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (scalar_t__) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,void*,scalar_t__) ;

BUF *FUNC_7(BIO *VAR_0)
{
 BUF *VAR_1;
 UINT VAR_2;
 void *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_2(VAR_0, 0);
 VAR_2 = (UINT)FUNC_0(VAR_0);
 VAR_3 = FUNC_4(VAR_2);
 FUNC_1(VAR_0, VAR_3, VAR_2);

 VAR_1 = FUNC_5();
 FUNC_6(VAR_1, VAR_3, VAR_2);
 FUNC_3(VAR_3);

 return VAR_1;
}
