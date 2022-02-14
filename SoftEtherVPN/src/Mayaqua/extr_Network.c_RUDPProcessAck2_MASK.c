
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ SeqNo; } ;
struct TYPE_8__ {int * SendSegmentList; } ;
typedef int RUDP_STACK ;
typedef TYPE_1__ RUDP_SESSION ;
typedef TYPE_2__ RUDP_SEGMENT ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(RUDP_STACK *VAR_0, RUDP_SESSION *VAR_1, UINT64 VAR_2)
{
 LIST *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return;
 }

 VAR_3 = ((void*)0);

 for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_1->SendSegmentList);VAR_4++)
 {
  RUDP_SEGMENT *VAR_5 = FUNC_3(VAR_1->SendSegmentList, VAR_4);

  if (VAR_5->SeqNo <= VAR_2)
  {
   if (VAR_3 == ((void*)0))
   {
    VAR_3 = FUNC_5(((void*)0));
   }

   FUNC_0(VAR_3, VAR_5);
  }
 }

 if (VAR_3 != ((void*)0))
 {
  for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_3);VAR_4++)
  {
   RUDP_SEGMENT *VAR_6 = FUNC_3(VAR_3, VAR_4);

   FUNC_1(VAR_1->SendSegmentList, VAR_6);

   FUNC_2(VAR_6);
  }

  FUNC_6(VAR_3);
 }
}
