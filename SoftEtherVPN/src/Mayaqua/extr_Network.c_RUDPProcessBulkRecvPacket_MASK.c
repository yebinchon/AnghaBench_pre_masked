
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int keygen ;
typedef int key ;
typedef int UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_12__ {int UseHMac; int FlushBulkSendTube; TYPE_2__* TcpSock; scalar_t__ BulkRecvSeqNoMax; int LastRecvTick; TYPE_1__* BulkRecvKey; } ;
struct TYPE_11__ {int Now; } ;
struct TYPE_10__ {int * BulkSendTube; } ;
struct TYPE_9__ {int* Data; } ;
typedef int TUBE ;
typedef TYPE_2__ SOCK ;
typedef TYPE_3__ RUDP_STACK ;
typedef TYPE_4__ RUDP_SESSION ;
typedef int CRYPT ;


 scalar_t__ FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int *,int*,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int*,int,int*,int) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;
 int * FUNC_6 (int*,int) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int*,int*,int) ;
 int FUNC_10 (int *,int*,int,int *,int,int ) ;

bool FUNC_11(RUDP_STACK *VAR_3, RUDP_SESSION *VAR_4, void *VAR_5, UINT VAR_6)
{
 UCHAR VAR_7[VAR_2];
 UCHAR VAR_8[VAR_2];
 UCHAR *VAR_9;
 UCHAR *VAR_10;
 UINT VAR_11;
 UCHAR VAR_12[VAR_2 * 2];
 UCHAR VAR_13[VAR_2];
 CRYPT *VAR_14;
 UCHAR VAR_15;
 UINT64 VAR_16;
 UCHAR *VAR_17;
 UINT VAR_18;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0 || VAR_4->BulkRecvKey == ((void*)0))
 {
  return 0;
 }

 VAR_9 = (UCHAR *)VAR_5;
 VAR_11 = VAR_6;
 if (VAR_11 < VAR_2)
 {
  return 0;
 }


 if (VAR_4->UseHMac == 0)
 {
  FUNC_1(VAR_7, VAR_9, VAR_2);
  FUNC_1(VAR_9, VAR_4->BulkRecvKey->Data, VAR_2);
  FUNC_9(VAR_8, VAR_9, VAR_6);
  FUNC_1(VAR_9, VAR_7, VAR_2);

  if (FUNC_0(VAR_7, VAR_8, VAR_2) != 0)
  {
   FUNC_4(VAR_8, VAR_4->BulkRecvKey->Data, VAR_2, VAR_9 + VAR_2, VAR_6 - VAR_2);

   if (FUNC_0(VAR_9, VAR_8, VAR_2) != 0)
   {
    return 0;
   }
   else
   {
    VAR_4->UseHMac = 1;
   }
  }
  else
  {
  }
 }
 else
 {
  FUNC_4(VAR_8, VAR_4->BulkRecvKey->Data, VAR_2, VAR_9 + VAR_2, VAR_6 - VAR_2);

  if (FUNC_0(VAR_9, VAR_8, VAR_2) != 0)
  {
   return 0;
  }
 }

 VAR_9 += VAR_2;
 VAR_11 -= VAR_2;


 if (VAR_11 < VAR_2)
 {
  return 0;
 }
 VAR_10 = VAR_9;
 VAR_9 += VAR_2;
 VAR_11 -= VAR_2;


 if (VAR_11 < 1)
 {
  return 0;
 }
 FUNC_1(VAR_12 + 0, VAR_4->BulkRecvKey->Data, VAR_2);
 FUNC_1(VAR_12 + VAR_2, VAR_10, VAR_2);
 FUNC_9(VAR_13, VAR_12, sizeof(VAR_12));

 VAR_14 = FUNC_6(VAR_13, sizeof(VAR_13));
 FUNC_2(VAR_14, VAR_9, VAR_9, VAR_11);
 FUNC_3(VAR_14);


 VAR_15 = VAR_9[VAR_11 - 1];
 if (VAR_15 == 0)
 {
  return 0;
 }
 if (VAR_11 < VAR_15)
 {
  return 0;
 }
 VAR_11 -= VAR_15;


 VAR_16 = FUNC_7(VAR_9);
 VAR_9 += sizeof(UINT64);
 VAR_11 -= sizeof(UINT64);

 if (VAR_16 == 0 || VAR_16 >= (0xF000000000000000ULL))
 {

  return 0;
 }

 if ((VAR_16 + VAR_1) < VAR_4->BulkRecvSeqNoMax)
 {

  return 0;
 }

 VAR_4->LastRecvTick = VAR_3->Now;

 VAR_17 = VAR_9;
 VAR_18 = VAR_11;

 VAR_4->BulkRecvSeqNoMax = FUNC_5(VAR_16, VAR_4->BulkRecvSeqNoMax);


 FUNC_8(VAR_3, VAR_4);

 if (VAR_4->TcpSock != ((void*)0))
 {
  SOCK *VAR_19 = VAR_4->TcpSock;
  TUBE *VAR_20 = VAR_19->BulkSendTube;

  if (VAR_20 != ((void*)0))
  {
   FUNC_10(VAR_20, VAR_17, VAR_18, ((void*)0), 1, VAR_0);

   VAR_4->FlushBulkSendTube = 1;
  }
 }

 return 1;
}
