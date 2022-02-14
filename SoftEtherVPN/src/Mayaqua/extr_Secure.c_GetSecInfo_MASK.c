
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int token_info ;
struct TYPE_5__ {size_t SessionSlotNumber; int * Info; int * SlotIdList; TYPE_1__* Api; } ;
struct TYPE_4__ {scalar_t__ (* C_GetTokenInfo ) (int ,int *) ;} ;
typedef TYPE_2__ SECURE ;
typedef int CK_TOKEN_INFO ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(SECURE *VAR_1)
{
 CK_TOKEN_INFO VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }
 if (VAR_1->Info != ((void*)0))
 {
  return;
 }


 FUNC_1(&VAR_2, sizeof(VAR_2));
 if (VAR_1->Api->C_GetTokenInfo(VAR_1->SlotIdList[VAR_1->SessionSlotNumber], &VAR_2) != VAR_0)
 {

  return;
 }

 VAR_1->Info = FUNC_0(&VAR_2);
}
