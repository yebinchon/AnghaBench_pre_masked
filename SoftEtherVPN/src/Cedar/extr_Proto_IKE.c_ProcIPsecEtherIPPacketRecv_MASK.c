
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int IsEtherIPOnIPsecTunnelMode; int EtherIP; } ;
typedef int IKE_SERVER ;
typedef TYPE_1__ IKE_CLIENT ;
typedef int BLOCK ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int * FUNC_3 (int *,scalar_t__,int ) ;

void FUNC_4(IKE_SERVER *VAR_0, IKE_CLIENT *VAR_1, UCHAR *VAR_2, UINT VAR_3, bool VAR_4)
{
 BLOCK *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return;
 }

 VAR_1->IsEtherIPOnIPsecTunnelMode = VAR_4;

 FUNC_2(VAR_0, VAR_1);

 VAR_5 = FUNC_3(VAR_2, VAR_3, 0);

 FUNC_0(VAR_1->EtherIP, VAR_5);

 FUNC_1(VAR_5);
}
