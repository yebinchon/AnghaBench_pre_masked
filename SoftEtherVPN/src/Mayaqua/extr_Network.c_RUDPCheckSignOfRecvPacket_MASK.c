
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int UseHMac; TYPE_1__* BulkRecvKey; int * Key_Recv; } ;
struct TYPE_7__ {scalar_t__ Protocol; int SvcNameHash; } ;
struct TYPE_6__ {int * Data; } ;
typedef TYPE_2__ RUDP_STACK ;
typedef TYPE_3__ RUDP_SESSION ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int ,int) ;

bool FUNC_5(RUDP_STACK *VAR_3, RUDP_SESSION *VAR_4, void *VAR_5, UINT VAR_6)
{
 UCHAR VAR_7[VAR_2];
 UCHAR VAR_8[VAR_2];
 UCHAR *VAR_9;
 UINT VAR_10;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == 0)
 {
  return 0;
 }

 VAR_9 = (UCHAR *)VAR_5;
 VAR_10 = VAR_6;
 if (VAR_10 < VAR_2)
 {
  return 0;
 }


 FUNC_1(VAR_7, VAR_9, VAR_2);
 FUNC_1(VAR_9, VAR_4->Key_Recv, VAR_2);
 FUNC_3(VAR_8, VAR_9, VAR_6);

 if (VAR_3->Protocol == VAR_0 || VAR_3->Protocol == VAR_1)
 {
  FUNC_4(VAR_8, VAR_8, VAR_3->SvcNameHash, VAR_2);
 }

 FUNC_1(VAR_9, VAR_7, VAR_2);
 if (FUNC_0(VAR_7, VAR_8, VAR_2) == 0)
 {
  return 1;
 }

 if (VAR_4->BulkRecvKey == ((void*)0))
 {
  return 0;
 }


 if (VAR_4->UseHMac == 0)
 {
  FUNC_1(VAR_7, VAR_9, VAR_2);
  FUNC_1(VAR_9, VAR_4->BulkRecvKey->Data, VAR_2);
  FUNC_3(VAR_8, VAR_9, VAR_6);
  FUNC_1(VAR_9, VAR_7, VAR_2);

  if (FUNC_0(VAR_7, VAR_8, VAR_2) == 0)
  {
   return 1;
  }
 }

 FUNC_2(VAR_8, VAR_4->BulkRecvKey->Data, VAR_2, VAR_9 + VAR_2, VAR_10 - VAR_2);
 if (FUNC_0(VAR_9, VAR_8, VAR_2) == 0)
 {
  VAR_4->UseHMac = 1;
  return 1;
 }

 return 0;
}
