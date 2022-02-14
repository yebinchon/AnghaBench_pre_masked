
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Name; int pData; } ;
typedef TYPE_1__ INSTANCE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(INSTANCE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->pData);

 if (VAR_0->Name != ((void*)0))
 {
  FUNC_0(VAR_0->Name);
 }
 FUNC_0(VAR_0);
}
