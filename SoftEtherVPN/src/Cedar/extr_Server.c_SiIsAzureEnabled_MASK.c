
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int EnableVpnAzure; int * AzureClient; } ;
typedef TYPE_1__ SERVER ;



bool FUNC_0(SERVER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->AzureClient == ((void*)0))
 {
  return 0;
 }

 return VAR_0->EnableVpnAzure;
}
