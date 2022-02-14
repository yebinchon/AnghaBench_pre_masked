
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write; int read; int size; int push; int ** storage; int pop; } ;
typedef TYPE_1__ VCHIU_QUEUE_T ;
typedef int VCHIQ_HEADER_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(VCHIU_QUEUE_T *VAR_0, VCHIQ_HEADER_T *VAR_1)
{
   while (VAR_0->write == VAR_0->read + VAR_0->size)
      FUNC_1(&VAR_0->pop);

   VAR_0->storage[VAR_0->write & (VAR_0->size - 1)] = VAR_1;

   VAR_0->write++;

   FUNC_0(&VAR_0->push);
}
