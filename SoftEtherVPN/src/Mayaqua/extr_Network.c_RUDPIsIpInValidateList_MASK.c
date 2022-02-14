
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ ExpiresTick; int ClientIP; } ;
struct TYPE_7__ {int * NatT_SourceIpList; } ;
typedef TYPE_1__ RUDP_STACK ;
typedef TYPE_2__ RUDP_SOURCE_IP ;
typedef int LIST ;
typedef int IP ;


 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int *,int,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 () ;

bool FUNC_12(RUDP_STACK *VAR_0, IP *VAR_1)
{
 UINT VAR_2;
 UINT64 VAR_3 = FUNC_11();
 LIST *VAR_4 = ((void*)0);
 bool VAR_5 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_6(VAR_1))
 {
  return 1;
 }

 if (FUNC_5(VAR_1))
 {
  return 1;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_8(VAR_0->NatT_SourceIpList);VAR_2++)
 {
  RUDP_SOURCE_IP *VAR_6 = (RUDP_SOURCE_IP *)FUNC_7(VAR_0->NatT_SourceIpList, VAR_2);

  if (VAR_6->ExpiresTick <= VAR_3)
  {
   if (VAR_4 == ((void*)0))
   {
    VAR_4 = FUNC_9(((void*)0));
   }

   FUNC_0(VAR_4, VAR_6);
  }
 }

 if (VAR_4 != ((void*)0))
 {
  for (VAR_2 = 0;VAR_2 < FUNC_8(VAR_4);VAR_2++)
  {
   RUDP_SOURCE_IP *VAR_7 = (RUDP_SOURCE_IP *)FUNC_7(VAR_4, VAR_2);

   FUNC_3(VAR_0->NatT_SourceIpList, VAR_7);

   FUNC_4(VAR_7);
  }

  FUNC_10(VAR_4);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_8(VAR_0->NatT_SourceIpList);VAR_2++)
 {
  RUDP_SOURCE_IP *VAR_8 = (RUDP_SOURCE_IP *)FUNC_7(VAR_0->NatT_SourceIpList, VAR_2);

  if (FUNC_1(&VAR_8->ClientIP, VAR_1) == 0)
  {
   VAR_5 = 1;
   break;
  }
 }

 FUNC_2("RUDP: NAT-T: Validate IP: %r, ret=%u (current list len = %u)\n", VAR_1, VAR_5, FUNC_8(VAR_0->NatT_SourceIpList));

 return VAR_5;
}
