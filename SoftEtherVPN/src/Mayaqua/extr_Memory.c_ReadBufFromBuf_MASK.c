
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int *,int ) ;

BUF *FUNC_6(BUF *VAR_0, UINT VAR_1)
{
 BUF *VAR_2;
 UCHAR *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_1);
 if (FUNC_3(VAR_0, VAR_3, VAR_1) != VAR_1)
 {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_2 = FUNC_2();
 FUNC_5(VAR_2, VAR_3, VAR_1);
 FUNC_4(VAR_2, 0, 0);

 FUNC_0(VAR_3);

 return VAR_2;
}
