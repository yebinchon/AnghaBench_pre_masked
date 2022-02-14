
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int EnableVpnAzure; int * AzureClient; } ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 (int *,int) ;

void FUNC_1(SERVER *VAR_0, bool VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->AzureClient != ((void*)0))
 {
  FUNC_0(VAR_0->AzureClient, VAR_1);
 }

 VAR_0->EnableVpnAzure = VAR_1;
}
