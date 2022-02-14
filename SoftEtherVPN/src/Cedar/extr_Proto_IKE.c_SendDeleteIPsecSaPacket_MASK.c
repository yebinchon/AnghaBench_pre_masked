
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IKE_SERVER ;
typedef int IKE_PACKET_PAYLOAD ;
typedef int IKE_CLIENT ;
typedef int BUF ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(IKE_SERVER *VAR_1, IKE_CLIENT *VAR_2, UINT VAR_3)
{
 IKE_PACKET_PAYLOAD *VAR_4;
 BUF *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return;
 }

 VAR_5 = FUNC_1();
 FUNC_4(VAR_5, VAR_3);

 VAR_4 = FUNC_0(VAR_0, FUNC_2(VAR_5));

 FUNC_3(VAR_1, VAR_2, VAR_4);
}
