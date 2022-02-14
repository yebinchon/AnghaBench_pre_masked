
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int keygen ;
typedef int key ;
typedef int UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_16__ {int* Key_Recv; int YourTick; int LatestRecvMyTick; int LatestRecvMyTick2; int CurrentRtt; int Magic_Disconnect; int LastRecvTick; scalar_t__ Status; } ;
struct TYPE_15__ {scalar_t__ Protocol; int Now; int ServerMode; int SvcNameHash; } ;
typedef TYPE_1__ RUDP_STACK ;
typedef TYPE_2__ RUDP_SESSION ;
typedef int CRYPT ;


 scalar_t__ FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int*,int*,int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int,int) ;
 int * FUNC_6 (int*,int) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,int,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (int*,int*,int) ;
 int FUNC_15 (int*,int*,int ,int) ;

bool FUNC_16(RUDP_STACK *VAR_7, RUDP_SESSION *VAR_8, void *VAR_9, UINT VAR_10)
{
 UCHAR VAR_11[VAR_6];
 UCHAR VAR_12[VAR_6];
 UCHAR *VAR_13;
 UCHAR *VAR_14;
 UINT VAR_15;
 UCHAR VAR_16[VAR_6 * 2];
 UCHAR VAR_17[VAR_6];
 CRYPT *VAR_18;
 UCHAR VAR_19;
 UINT VAR_20;
 UINT VAR_21;
 UINT64 VAR_22;
 UCHAR *VAR_23;
 UINT VAR_24;
 UINT64 VAR_25;
 UINT64 VAR_26, VAR_27;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == 0)
 {
  return 0;
 }

 VAR_13 = (UCHAR *)VAR_9;
 VAR_15 = VAR_10;
 if (VAR_15 < VAR_6)
 {
  return 0;
 }


 FUNC_1(VAR_11, VAR_13, VAR_6);
 FUNC_1(VAR_13, VAR_8->Key_Recv, VAR_6);
 FUNC_14(VAR_12, VAR_13, VAR_10);
 FUNC_1(VAR_13, VAR_11, VAR_6);

 if (VAR_7->Protocol == VAR_2 || VAR_7->Protocol == VAR_3)
 {
  FUNC_15(VAR_12, VAR_12, VAR_7->SvcNameHash, VAR_6);
 }

 if (FUNC_0(VAR_11, VAR_12, VAR_6) != 0)
 {

  return 0;
 }
 VAR_13 += VAR_6;
 VAR_15 -= VAR_6;


 if (VAR_15 < VAR_6)
 {
  return 0;
 }
 VAR_14 = VAR_13;
 VAR_13 += VAR_6;
 VAR_15 -= VAR_6;


 if (VAR_15 < 1)
 {
  return 0;
 }
 FUNC_1(VAR_16 + 0, VAR_14, VAR_6);
 FUNC_1(VAR_16 + VAR_6, VAR_8->Key_Recv, VAR_6);
 FUNC_14(VAR_17, VAR_16, sizeof(VAR_16));

 VAR_18 = FUNC_6(VAR_17, sizeof(VAR_17));
 FUNC_3(VAR_18, VAR_13, VAR_13, VAR_15);
 FUNC_4(VAR_18);


 VAR_19 = VAR_13[VAR_15 - 1];
 if (VAR_19 == 0)
 {
  return 0;
 }
 if (VAR_15 < VAR_19)
 {
  return 0;
 }
 VAR_15 -= VAR_19;


 if (VAR_15 < sizeof(UINT64))
 {
  return 0;
 }
 VAR_26 = FUNC_8(VAR_13);
 VAR_13 += sizeof(UINT64);
 VAR_15 -= sizeof(UINT64);


 if (VAR_15 < sizeof(UINT64))
 {
  return 0;
 }
 VAR_27 = FUNC_8(VAR_13);
 VAR_13 += sizeof(UINT64);
 VAR_15 -= sizeof(UINT64);

 if (VAR_27 > VAR_7->Now)
 {
  return 0;
 }


 if (VAR_15 < sizeof(UINT64))
 {
  return 0;
 }
 VAR_25 = FUNC_8(VAR_13);
 VAR_13 += sizeof(UINT64);
 VAR_15 -= sizeof(UINT64);


 if (VAR_15 < sizeof(UINT))
 {
  return 0;
 }

 VAR_20 = FUNC_7(VAR_13);
 if (VAR_20 > VAR_0)
 {
  return 0;
 }
 VAR_13 += sizeof(UINT);
 VAR_15 -= sizeof(UINT);


 if (VAR_15 < (sizeof(UINT64) * VAR_20 + sizeof(UINT64)))
 {
  return 0;
 }

 if (VAR_25 >= 1)
 {
  FUNC_12(VAR_7, VAR_8, VAR_25);
 }

 for (VAR_21 = 0;VAR_21 < VAR_20;VAR_21++)
 {
  UINT64 VAR_28 = FUNC_8(VAR_13);

  FUNC_11(VAR_7, VAR_8, VAR_28);

  VAR_13 += sizeof(UINT64);
  VAR_15 -= sizeof(UINT64);
 }


 if (VAR_26 >= 2)
 {
  VAR_26--;
 }
 VAR_8->YourTick = FUNC_5(VAR_8->YourTick, VAR_26);

 VAR_8->LatestRecvMyTick = FUNC_5(VAR_8->LatestRecvMyTick, VAR_27);

 if (VAR_8->LatestRecvMyTick2 != VAR_8->LatestRecvMyTick)
 {
  VAR_8->LatestRecvMyTick2 = VAR_8->LatestRecvMyTick;
  VAR_8->CurrentRtt = (UINT)(VAR_7->Now - VAR_8->LatestRecvMyTick);




 }


 VAR_22 = FUNC_8(VAR_13);
 VAR_13 += sizeof(UINT64);
 VAR_15 -= sizeof(UINT64);

 if (VAR_22 == 0)
 {

  return 1;
 }

 if (VAR_22 == VAR_8->Magic_Disconnect)
 {

  FUNC_9(VAR_7, VAR_8, 1);
  return 1;
 }


 VAR_8->LastRecvTick = VAR_7->Now;

 VAR_23 = VAR_13;
 VAR_24 = VAR_15;





 if (VAR_24 >= 1 && VAR_24 <= VAR_1)
 {






  FUNC_13(VAR_7, VAR_8, VAR_22, VAR_23, VAR_24);
 }

 if (VAR_7->ServerMode == 0)
 {
  if (VAR_8->Status == VAR_4)
  {

   VAR_8->Status = VAR_5;

   FUNC_10(VAR_7, VAR_8);
  }
 }

 return 1;
}
