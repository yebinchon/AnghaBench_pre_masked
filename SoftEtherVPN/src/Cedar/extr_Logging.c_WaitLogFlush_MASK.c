
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ num_item; } ;
struct TYPE_5__ {int FlushEvent; TYPE_3__* RecordQueue; } ;
typedef TYPE_1__ LOG ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(LOG *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 while (1)
 {
  UINT VAR_1;
  FUNC_0(VAR_0->RecordQueue);
  {
   VAR_1 = VAR_0->RecordQueue->num_item;
  }
  FUNC_1(VAR_0->RecordQueue);

  if (VAR_1 == 0)
  {
   break;
  }

  FUNC_2(VAR_0->FlushEvent, 100);
 }
}
