
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int FUNC_7 () ;
 int VAR_0 ;

void FUNC_8(CLIENT *VAR_1)
{
 UCHAR VAR_2[VAR_0];
 UCHAR VAR_3[VAR_0];
 UCHAR VAR_4[VAR_0];
 UCHAR VAR_5[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }
 FUNC_2(VAR_2);
 FUNC_1(VAR_3);
 FUNC_3(VAR_4);

 if (FUNC_4(VAR_5) == 0)
 {
  FUNC_5(VAR_2);
  return;
 }

 if (FUNC_6(VAR_5, VAR_4, VAR_0) == 0)
 {
  FUNC_5(VAR_2);
  return;
 }

 if (FUNC_6(VAR_5, VAR_3, VAR_0) == 0)
 {
  FUNC_5(VAR_2);
  return;
 }

 if (FUNC_6(VAR_5, VAR_2, VAR_0) == 0)
 {
  return;
 }

 if (FUNC_5(VAR_2) == 0)
 {
  return;
 }

 FUNC_0(VAR_1);
}
