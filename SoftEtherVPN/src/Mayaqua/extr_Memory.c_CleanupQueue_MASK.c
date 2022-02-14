
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; int fifo; } ;
typedef TYPE_1__ QUEUE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(QUEUE *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_3(VAR_1->fifo);
 FUNC_0(VAR_1->lock);
 FUNC_1(VAR_1);


 FUNC_2(VAR_0);
}
