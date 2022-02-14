
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int MacAddress; } ;
typedef TYPE_1__ VH ;
struct TYPE_6__ {int MacAddressDest; int MacAddressSrc; scalar_t__ BroadcastPacket; } ;
typedef TYPE_2__ PKT ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

bool FUNC_1(VH *VAR_0, PKT *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 if (VAR_1->BroadcastPacket)
 {
  return 1;
 }


 if (FUNC_0(VAR_1->MacAddressSrc, VAR_0->MacAddress, 6) == 0)
 {
  return 0;
 }

 if (FUNC_0(VAR_1->MacAddressDest, VAR_0->MacAddress, 6) == 0)
 {
  return 1;
 }


 return 0;
}
