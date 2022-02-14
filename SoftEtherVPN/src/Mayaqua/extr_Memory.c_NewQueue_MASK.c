
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fifo; scalar_t__ num_item; int ref; int lock; } ;
typedef TYPE_1__ QUEUE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int) ;

QUEUE *FUNC_5()
{
 QUEUE *VAR_1;

 VAR_1 = FUNC_4(sizeof(QUEUE));
 VAR_1->lock = FUNC_2();
 VAR_1->ref = FUNC_3();
 VAR_1->num_item = 0;
 VAR_1->fifo = FUNC_1();


 FUNC_0(VAR_0);

 return VAR_1;
}
