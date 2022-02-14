
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {scalar_t__ Type; int ListenMode; int CancelAccept; int Disconnecting; int InProcAcceptEvent; int InProcAcceptQueue; } ;
typedef TYPE_1__ SOCK ;
typedef int IP ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,int *,int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

SOCK *FUNC_6(SOCK *VAR_1, IP *VAR_2, UINT VAR_3, IP *VAR_4, UINT VAR_5)
{
 SOCK *VAR_6, *VAR_7;
 bool VAR_8 = 0;

 if (VAR_1 == ((void*)0) || VAR_1->Type != VAR_0 || VAR_1->ListenMode == 0)
 {
  return ((void*)0);
 }

 FUNC_2(&VAR_7, &VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_1(VAR_1->InProcAcceptQueue);
 {
  if (VAR_1->CancelAccept == 0 && VAR_1->Disconnecting == 0)
  {
   FUNC_0(VAR_1->InProcAcceptQueue, VAR_6);

   VAR_8 = 1;
  }
 }
 FUNC_5(VAR_1->InProcAcceptQueue);

 if (VAR_8 == 0)
 {
  FUNC_3(VAR_6);
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 FUNC_4(VAR_1->InProcAcceptEvent);

 return VAR_7;
}
