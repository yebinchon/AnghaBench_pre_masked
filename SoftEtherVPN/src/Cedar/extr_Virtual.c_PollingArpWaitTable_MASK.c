
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Now; int * ArpWaitTable; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int GiveupTime; scalar_t__ TimeoutTime; int IpAddress; scalar_t__ NextTimeoutTimeValue; } ;
typedef int LIST ;
typedef TYPE_2__ ARP_WAIT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;

void FUNC_7(VH *VAR_1)
{
 UINT VAR_2;
 LIST *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 VAR_3 = ((void*)0);


 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_1->ArpWaitTable);VAR_2++)
 {
  ARP_WAIT *VAR_4 = FUNC_2(VAR_1->ArpWaitTable, VAR_2);

  if (VAR_4->GiveupTime < VAR_1->Now || (VAR_4->GiveupTime - 100 * 1000) > VAR_1->Now)
  {

   if (VAR_3 == ((void*)0))
   {
    VAR_3 = FUNC_4(((void*)0));
   }
   FUNC_0(VAR_3, VAR_4);
  }
  else
  {
   if (VAR_4->TimeoutTime < VAR_1->Now)
   {

    FUNC_6(VAR_1, VAR_4->IpAddress);


    VAR_4->TimeoutTime = VAR_1->Now + (UINT64)VAR_4->NextTimeoutTimeValue;

    VAR_4->NextTimeoutTimeValue = VAR_4->NextTimeoutTimeValue + VAR_0;
   }
  }
 }


 if (VAR_3 != ((void*)0))
 {
  for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_3);VAR_2++)
  {
   ARP_WAIT *VAR_5 = FUNC_2(VAR_3, VAR_2);

   FUNC_1(VAR_1, VAR_5->IpAddress);
  }
  FUNC_5(VAR_3);
 }
}
