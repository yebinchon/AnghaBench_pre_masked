
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int IPsecSaList; } ;
struct TYPE_7__ {int ServerToClient; scalar_t__ Spi; } ;
typedef TYPE_1__ IPSECSA ;
typedef TYPE_2__ IKE_SERVER ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;

IPSECSA *FUNC_1(IKE_SERVER *VAR_0, UINT VAR_1)
{
 IPSECSA VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 VAR_2.ServerToClient = 0;
 VAR_2.Spi = VAR_1;

 return FUNC_0(VAR_0->IPsecSaList, &VAR_2);
}
