
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int UCHAR ;
typedef int BUF ;


 int FUNC_0 (int *,void*,scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__) ;

void FUNC_3(BUF *VAR_0, UCHAR VAR_1, UINT VAR_2, UCHAR VAR_3, void *VAR_4, UINT VAR_5)
{
 UINT VAR_6;

 if (VAR_0 == ((void*)0) || (VAR_4 == ((void*)0) && VAR_5 != 0))
 {
  return;
 }


 FUNC_1(VAR_0, VAR_1);


 VAR_6 = 2 + VAR_5;
 if (VAR_1 == 26)
 {
  VAR_6 += 6;
 }
 FUNC_1(VAR_0, (UCHAR)VAR_6);

 if (VAR_1 != 26)
 {

  FUNC_0(VAR_0, VAR_4, VAR_5);
 }
 else
 {

  FUNC_2(VAR_0, VAR_2);


  FUNC_1(VAR_0, VAR_3);


  VAR_6 = VAR_5 + 2;
  FUNC_1(VAR_0, (UCHAR)VAR_6);


  FUNC_0(VAR_0, VAR_4, VAR_5);
 }
}
