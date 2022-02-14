
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {int IsSrcUsernameIncludeOrExclude; int IsDestUsernameIncludeOrExclude; scalar_t__ SrcPortStart; scalar_t__ DestPortStart; scalar_t__ Id; void* Loss; void* Jitter; void* Delay; void* DestPortEnd; void* SrcPortEnd; int DestUsername; void* DestUsernameHash; int SrcUsername; void* SrcUsernameHash; } ;
struct TYPE_11__ {int AccessList; } ;
typedef TYPE_1__ HUB ;
typedef TYPE_2__ ACCESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (void*,int ,int ) ;
 void* FUNC_8 (void*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int ,int,int ) ;
 TYPE_2__* FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;

void FUNC_14(HUB *VAR_6, ACCESS *VAR_7, bool VAR_8, bool VAR_9)
{

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_6->AccessList);
 {
  ACCESS *VAR_10;
  UINT VAR_11;


  if (FUNC_5(VAR_6->AccessList) >= VAR_5)
  {
   FUNC_12(VAR_6->AccessList);
   return;
  }

  VAR_10 = FUNC_10(sizeof(ACCESS));
  FUNC_1(VAR_10, VAR_7, sizeof(ACCESS));

  VAR_10->IsSrcUsernameIncludeOrExclude = 0;
  VAR_10->IsDestUsernameIncludeOrExclude = 0;


  if (FUNC_3(VAR_10->SrcUsername) == 0)
  {
   if (FUNC_11(VAR_10->SrcUsername, VAR_1) == 0 && FUNC_11(VAR_10->SrcUsername, VAR_0) == 0)
   {
    FUNC_9(VAR_10->SrcUsername, sizeof(VAR_10->SrcUsername), VAR_10->SrcUsername);
   }
   else
   {
    VAR_10->IsSrcUsernameIncludeOrExclude = 1;
   }
  }
  if (FUNC_3(VAR_10->DestUsername) == 0)
  {
   if (FUNC_11(VAR_10->DestUsername, VAR_1) == 0 && FUNC_11(VAR_10->DestUsername, VAR_0) == 0)
   {
    FUNC_9(VAR_10->DestUsername, sizeof(VAR_10->DestUsername), VAR_10->DestUsername);
   }
   else
   {
    VAR_10->IsDestUsernameIncludeOrExclude = 1;
   }
  }

  VAR_10->SrcUsernameHash = FUNC_13(VAR_10->SrcUsername);
  VAR_10->DestUsernameHash = FUNC_13(VAR_10->DestUsername);


  if (VAR_10->SrcPortStart != 0)
  {
   VAR_10->SrcPortEnd = FUNC_8(VAR_10->SrcPortEnd, VAR_10->SrcPortStart);
  }
  if (VAR_10->DestPortStart != 0)
  {
   VAR_10->DestPortEnd = FUNC_8(VAR_10->DestPortEnd, VAR_10->DestPortStart);
  }


  VAR_10->Delay = FUNC_7(VAR_10->Delay, 0, VAR_2);
  VAR_10->Jitter = FUNC_7(VAR_10->Jitter, 0, VAR_3);
  VAR_10->Loss = FUNC_7(VAR_10->Loss, 0, VAR_4);

  if (VAR_8 == 0)
  {
   FUNC_2(VAR_6->AccessList, VAR_10);
  }
  else
  {
   FUNC_0(VAR_6->AccessList, VAR_10);
  }


  if (VAR_9 == 0)
  {
   for (VAR_11 = 0;VAR_11 < FUNC_5(VAR_6->AccessList);VAR_11++)
   {
    ACCESS *VAR_12 = FUNC_4(VAR_6->AccessList, VAR_11);
    VAR_12->Id = (VAR_11 + 1);
   }
  }
 }
 FUNC_12(VAR_6->AccessList);
}
