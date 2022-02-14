
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* Session; } ;
typedef TYPE_1__ VH ;
struct TYPE_9__ {int ref; } ;
typedef TYPE_2__ SESSION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(VH *VAR_0)
{
 SESSION *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 FUNC_1(VAR_0);
 {
  VAR_1 = VAR_0->Session;
  if (VAR_1 != ((void*)0))
  {
   FUNC_0(VAR_1->ref);
  }
 }
 FUNC_4(VAR_0);

 if (VAR_1 == ((void*)0))
 {

  return;
 }


 FUNC_3(VAR_1);

 FUNC_2(VAR_1);
}
