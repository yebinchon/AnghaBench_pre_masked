
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int Counter; int * Session; } ;
typedef TYPE_1__ VH ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(VH *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->Session != ((void*)0))
 {
  FUNC_3(VAR_0->Session);
 }

 FUNC_0(VAR_0->Counter);
 FUNC_1(VAR_0->lock);

 FUNC_2(VAR_0);
}
