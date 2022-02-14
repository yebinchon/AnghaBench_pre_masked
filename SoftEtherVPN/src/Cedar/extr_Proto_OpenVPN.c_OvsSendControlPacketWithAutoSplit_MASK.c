
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
typedef int OPENVPN_CHANNEL ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int *,scalar_t__) ;

void FUNC_6(OPENVPN_CHANNEL *VAR_1, UCHAR VAR_2, UCHAR *VAR_3, UINT VAR_4)
{
 BUF *VAR_5;

 if (VAR_1 == ((void*)0) || (VAR_4 != 0 && VAR_3 == ((void*)0)))
 {
  return;
 }

 VAR_5 = FUNC_1();
 FUNC_5(VAR_5, VAR_3, VAR_4);
 FUNC_4(VAR_5, 0, 0);

 while (1)
 {
  UCHAR VAR_6[VAR_0];
  UINT VAR_7 = FUNC_3(VAR_5, VAR_6, sizeof(VAR_6));

  if (VAR_7 == 0)
  {
   break;
  }

  FUNC_2(VAR_1, VAR_2, VAR_6, VAR_7);

 }

 FUNC_0(VAR_5);
}
