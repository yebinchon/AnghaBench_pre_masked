
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int ClientList; } ;
typedef int IP ;
typedef TYPE_1__ IKE_SERVER ;
typedef int IKE_PACKET ;
typedef int IKE_CLIENT ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_1__*,int *,int ,int *,int ) ;
 int * FUNC_4 (TYPE_1__*,int *,int ,int *,int ,int *) ;
 int * FUNC_5 (TYPE_1__*,int *,int *,int ,int *,int ) ;

IKE_CLIENT *FUNC_6(IKE_SERVER *VAR_2, IP *VAR_3, UINT VAR_4, IP *VAR_5, UINT VAR_6, IKE_PACKET *VAR_7)
{
 IKE_CLIENT *VAR_8;

 if (VAR_2 == ((void*)0) || VAR_7 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_4 == 0 || VAR_6 == 0)
 {
  return ((void*)0);
 }

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 == ((void*)0))
 {
  if (FUNC_0(VAR_2, VAR_3) > VAR_1 ||
   FUNC_2(VAR_2->ClientList) > VAR_0)
  {
   return ((void*)0);
  }


  VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

  FUNC_1(VAR_2->ClientList, VAR_8);
 }

 return FUNC_5(VAR_2, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
}
