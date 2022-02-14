
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int * storage; int push; int pop; scalar_t__ write; scalar_t__ read; } ;
typedef TYPE_1__ VCHIU_QUEUE_T ;
typedef int VCHIQ_HEADER_T ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int,int ) ;

int FUNC_5(VCHIU_QUEUE_T *VAR_1, int VAR_2)
{
   FUNC_2(FUNC_0(VAR_2));

   VAR_1->size = VAR_2;
   VAR_1->read = 0;
   VAR_1->write = 0;

   FUNC_3(&VAR_1->pop, "vchiu");
   FUNC_3(&VAR_1->push, "vchiu");

   VAR_1->storage = FUNC_4(VAR_2 * sizeof(VCHIQ_HEADER_T *), VAR_0);
   if (VAR_1->storage == ((void*)0))
   {
      FUNC_1(VAR_1);
      return 0;
   }
   return 1;
}
