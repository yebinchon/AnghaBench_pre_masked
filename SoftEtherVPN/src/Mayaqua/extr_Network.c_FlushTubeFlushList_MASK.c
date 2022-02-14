
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int IsInFlushList; } ;
struct TYPE_7__ {int List; } ;
typedef TYPE_1__ TUBE_FLUSH_LIST ;
typedef TYPE_2__ TUBE ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(TUBE_FLUSH_LIST *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->List);VAR_1++)
 {
  TUBE *VAR_2 = FUNC_1(VAR_0->List, VAR_1);

  FUNC_4(VAR_2);
  VAR_2->IsInFlushList = 0;

  FUNC_3(VAR_2);
 }

 FUNC_0(VAR_0->List);
}
