
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;
typedef int BUF ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int ) ;

BUF *FUNC_7(const BIGNUM *VAR_0)
{
 UINT VAR_1;
 UCHAR *VAR_2;
 BUF *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_1(VAR_0);
 VAR_2 = FUNC_6(VAR_1);
 FUNC_0(VAR_0, VAR_2);

 VAR_3 = FUNC_3();
 FUNC_5(VAR_3, VAR_2, VAR_1);
 FUNC_2(VAR_2);

 FUNC_4(VAR_3, 0, 0);

 return VAR_3;
}
