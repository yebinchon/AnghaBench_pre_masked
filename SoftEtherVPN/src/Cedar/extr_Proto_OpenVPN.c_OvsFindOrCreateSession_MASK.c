
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int SessionList; } ;
typedef int OPENVPN_SESSION ;
typedef TYPE_1__ OPENVPN_SERVER ;
typedef int IP ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (TYPE_1__*,int *,scalar_t__,int *,scalar_t__,scalar_t__) ;
 int * FUNC_2 (TYPE_1__*,int *,scalar_t__,int *,scalar_t__,scalar_t__) ;

OPENVPN_SESSION *FUNC_3(OPENVPN_SERVER *VAR_0, IP *VAR_1, UINT VAR_2, IP *VAR_3, UINT VAR_4, UINT VAR_5)
{
 OPENVPN_SESSION *VAR_6;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_3 == ((void*)0) || VAR_4 == 0)
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
 {
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

  if (VAR_6 != ((void*)0))
  {
   FUNC_0(VAR_0->SessionList, VAR_6);
  }
 }

 return VAR_6;
}
