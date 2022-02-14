
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;
typedef int FIFO ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;

BUF *FUNC_6(FIFO *VAR_0)
{
 BUF *VAR_1;
 UCHAR *VAR_2;
 UINT VAR_3;
 if (VAR_0 == ((void*)0))
 {
  return FUNC_4();
 }

 VAR_3 = FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_3);
 FUNC_5(VAR_0, VAR_2, VAR_3);

 VAR_1 = FUNC_3(VAR_2, VAR_3);

 FUNC_1(VAR_2);

 return VAR_1;
}
