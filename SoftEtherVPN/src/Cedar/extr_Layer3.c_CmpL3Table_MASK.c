
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ NetworkAddress; scalar_t__ SubnetMask; scalar_t__ GatewayAddress; scalar_t__ Metric; } ;
typedef TYPE_1__ L3TABLE ;



int FUNC_0(void *VAR_0, void *VAR_1)
{
 L3TABLE *VAR_2, *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(L3TABLE **)VAR_0;
 VAR_3 = *(L3TABLE **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->NetworkAddress > VAR_3->NetworkAddress)
 {
  return 1;
 }
 else if (VAR_2->NetworkAddress < VAR_3->NetworkAddress)
 {
  return -1;
 }
 else if (VAR_2->SubnetMask > VAR_3->SubnetMask)
 {
  return 1;
 }
 else if (VAR_2->SubnetMask < VAR_3->SubnetMask)
 {
  return -1;
 }
 else if (VAR_2->GatewayAddress > VAR_3->GatewayAddress)
 {
  return 1;
 }
 else if (VAR_2->GatewayAddress < VAR_3->GatewayAddress)
 {
  return -1;
 }
 else if (VAR_2->Metric > VAR_3->Metric)
 {
  return 1;
 }
 else if (VAR_2->Metric < VAR_3->Metric)
 {
  return -1;
 }
 else
 {
  return 0;
 }
}
