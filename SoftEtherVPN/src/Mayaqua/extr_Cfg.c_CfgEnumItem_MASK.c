
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Items; } ;
typedef int ITEM ;
typedef TYPE_1__ FOLDER ;
typedef int (* ENUM_ITEM ) (int *,void*) ;


 int * FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(FOLDER *VAR_0, ENUM_ITEM VAR_1, void *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_1(VAR_0->Items);VAR_3++)
 {
  ITEM *VAR_4 = FUNC_0(VAR_0->Items, VAR_3);
  if (VAR_1(VAR_4, VAR_2) == 0)
  {
   break;
  }
 }
}
