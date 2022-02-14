
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ref; } ;
typedef TYPE_1__ QUEUE ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(QUEUE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->ref == ((void*)0) || FUNC_1(VAR_0->ref) == 0)
 {
  FUNC_0(VAR_0);
 }
}
