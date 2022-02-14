
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ ExpiresTick; int ClientIP; } ;
struct TYPE_8__ {int * NatT_SourceIpList; } ;
typedef TYPE_1__ RUDP_STACK ;
typedef TYPE_2__ RUDP_SOURCE_IP ;
typedef int LIST ;
typedef int IP ;


 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int *,scalar_t__) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;
 TYPE_2__* FUNC_11 (int) ;

void FUNC_12(RUDP_STACK *VAR_2, IP *VAR_3)
{
 UINT VAR_4;
 RUDP_SOURCE_IP *VAR_5;
 UINT64 VAR_6 = FUNC_10();
 LIST *VAR_7 = ((void*)0);

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (FUNC_7(VAR_2->NatT_SourceIpList) >= VAR_0)
 {
  return;
 }

 for (VAR_4 = 0;VAR_4 < FUNC_7(VAR_2->NatT_SourceIpList);VAR_4++)
 {
  RUDP_SOURCE_IP *VAR_8 = (RUDP_SOURCE_IP *)FUNC_6(VAR_2->NatT_SourceIpList, VAR_4);

  if (VAR_8->ExpiresTick <= VAR_6)
  {
   if (VAR_7 == ((void*)0))
   {
    VAR_7 = FUNC_8(((void*)0));
   }

   FUNC_0(VAR_7, VAR_8);
  }
 }

 if (VAR_7 != ((void*)0))
 {
  for (VAR_4 = 0;VAR_4 < FUNC_7(VAR_7);VAR_4++)
  {
   RUDP_SOURCE_IP *VAR_9 = (RUDP_SOURCE_IP *)FUNC_6(VAR_7, VAR_4);

   FUNC_4(VAR_2->NatT_SourceIpList, VAR_9);

   FUNC_5(VAR_9);
  }

  FUNC_9(VAR_7);
 }

 VAR_5 = ((void*)0);

 for (VAR_4 = 0;VAR_4 < FUNC_7(VAR_2->NatT_SourceIpList);VAR_4++)
 {
  RUDP_SOURCE_IP *VAR_10 = (RUDP_SOURCE_IP *)FUNC_6(VAR_2->NatT_SourceIpList, VAR_4);

  if (FUNC_1(&VAR_10->ClientIP, VAR_3) == 0)
  {
   VAR_5 = VAR_10;
   break;
  }
 }

 if (VAR_5 == ((void*)0))
 {
  VAR_5 = FUNC_11(sizeof(RUDP_SOURCE_IP));

  FUNC_2(&VAR_5->ClientIP, VAR_3, sizeof(IP));

  FUNC_0(VAR_2->NatT_SourceIpList, VAR_5);
 }

 VAR_5->ExpiresTick = VAR_6 + (UINT64)VAR_1;

 FUNC_3("RUDP: NAT-T: Src IP added: %r (current list len = %u)\n", VAR_3, FUNC_7(VAR_2->NatT_SourceIpList));
}
