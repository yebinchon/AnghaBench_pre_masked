
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fifo; scalar_t__ num_item; int * ref; int * lock; } ;
typedef TYPE_1__ QUEUE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;

QUEUE *FUNC_3()
{
 QUEUE *VAR_1;

 VAR_1 = FUNC_2(sizeof(QUEUE));
 VAR_1->lock = ((void*)0);
 VAR_1->ref = ((void*)0);
 VAR_1->num_item = 0;
 VAR_1->fifo = FUNC_1();


 FUNC_0(VAR_0);

 return VAR_1;
}
