
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int c; } ;
typedef TYPE_1__ COUNTER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(COUNTER *VAR_2)
{

 if (VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_2(VAR_1);
 FUNC_3(VAR_0, VAR_2->c);

 FUNC_0(VAR_2->lock);
 FUNC_1(VAR_2);
}
