
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {int SessionCreated; size_t NumSlot; int IsReadOnly; size_t SessionId; size_t SessionSlotNumber; int Error; int * SlotIdList; TYPE_1__* Api; } ;
struct TYPE_5__ {size_t (* C_OpenSession ) (int ,int,int *,int *,size_t*) ;} ;
typedef TYPE_2__ SECURE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (int ,int,int *,int *,size_t*) ;
 size_t FUNC_2 (int ,int,int *,int *,size_t*) ;

bool FUNC_3(SECURE *VAR_6, UINT VAR_7)
{
 UINT VAR_8 = 0;
 UINT VAR_9;

 if (VAR_6 == ((void*)0))
 {
  return 0;
 }
 if (VAR_6->SessionCreated)
 {

  VAR_6->Error = VAR_5;
  return 0;
 }
 if (VAR_7 >= VAR_6->NumSlot)
 {

  VAR_6->Error = VAR_3;
  return 0;
 }


 if ((VAR_8 = VAR_6->Api->C_OpenSession(VAR_6->SlotIdList[VAR_7],
  VAR_0 | VAR_1, ((void*)0), ((void*)0), &VAR_9)) != VAR_2)
 {


  if ((VAR_8 = VAR_6->Api->C_OpenSession(VAR_6->SlotIdList[VAR_7],
   VAR_1, ((void*)0), ((void*)0), &VAR_9)) != VAR_2)
  {

   VAR_6->Error = VAR_4;
   return 0;
  }
  else
  {
   VAR_6->IsReadOnly = 1;
  }
 }

 VAR_6->SessionCreated = 1;
 VAR_6->SessionId = VAR_9;
 VAR_6->SessionSlotNumber = VAR_7;


 FUNC_0(VAR_6);

 return 1;
}
