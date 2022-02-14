
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int * CurrentIpSecSaSend; } ;
typedef int IKE_SERVER ;
typedef TYPE_1__ IKE_CLIENT ;


 int FUNC_0 (int *,int *,int *,scalar_t__,int ) ;

void FUNC_1(IKE_SERVER *VAR_0, IKE_CLIENT *VAR_1, UCHAR *VAR_2, UINT VAR_3, UCHAR VAR_4)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return;
 }

 if (VAR_1->CurrentIpSecSaSend == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, VAR_1->CurrentIpSecSaSend, VAR_2, VAR_3, VAR_4);
}
