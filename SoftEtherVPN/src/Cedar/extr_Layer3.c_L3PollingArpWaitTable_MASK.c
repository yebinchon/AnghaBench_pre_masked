
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {scalar_t__ Expire; scalar_t__ LastSentTime; int IpAddress; } ;
struct TYPE_9__ {int * ArpWaitTable; } ;
typedef int LIST ;
typedef TYPE_1__ L3IF ;
typedef TYPE_2__ L3ARPWAIT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;

void FUNC_9(L3IF *VAR_1)
{
 UINT VAR_2;
 LIST *VAR_3 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_5(VAR_1->ArpWaitTable);VAR_2++)
 {
  L3ARPWAIT *VAR_4 = FUNC_4(VAR_1->ArpWaitTable, VAR_2);

  if (VAR_4->Expire <= FUNC_8())
  {

   if (VAR_3 == ((void*)0))
   {
    VAR_3 = FUNC_6(((void*)0));
   }

   FUNC_2(VAR_3, VAR_4);
  }
  else if ((VAR_4->LastSentTime + VAR_0) <= FUNC_8())
  {

   VAR_4->LastSentTime = FUNC_8();

   FUNC_3(VAR_1, VAR_4->IpAddress);
  }
 }

 if (VAR_3 != ((void*)0))
 {
  for (VAR_2 = 0;VAR_2 < FUNC_5(VAR_3);VAR_2++)
  {
   L3ARPWAIT *VAR_5 = FUNC_4(VAR_3, VAR_2);

   FUNC_0(VAR_1->ArpWaitTable, VAR_5);
   FUNC_1(VAR_5);
  }

  FUNC_7(VAR_3);
 }
}
