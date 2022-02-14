
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_4__ {int * IkeClient; } ;
typedef int IKE_SERVER ;
typedef TYPE_1__ IKE_SA ;
typedef int IKE_CLIENT ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;

IKE_SA *FUNC_1(IKE_SERVER *VAR_0, UINT64 VAR_1, IKE_CLIENT *VAR_2)
{
 IKE_SA *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_3->IkeClient != VAR_2)
 {
  return ((void*)0);
 }

 return VAR_3;
}
