
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int IpParts; struct TYPE_9__* HeadIpHeaderData; struct TYPE_9__* Data; scalar_t__ DataReserved; } ;
struct TYPE_8__ {int CurrentIpQuota; } ;
typedef TYPE_1__ NATIVE_NAT ;
typedef TYPE_2__ IP_PART ;
typedef TYPE_2__ IP_COMBINE ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(NATIVE_NAT *VAR_0, IP_COMBINE *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 VAR_0->CurrentIpQuota -= VAR_1->DataReserved;
 FUNC_0(VAR_1->Data);


 for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_1->IpParts);VAR_2++)
 {
  IP_PART *VAR_3 = FUNC_1(VAR_1->IpParts, VAR_2);

  FUNC_0(VAR_3);
 }

 FUNC_0(VAR_1->HeadIpHeaderData);

 FUNC_3(VAR_1->IpParts);
 FUNC_0(VAR_1);
}
