
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int max_ptr; scalar_t__ writing; } ;
typedef TYPE_1__ memstream_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1(memstream_t *VAR_1)
{
   if (!VAR_1)
      return;

   VAR_0 = VAR_1->writing ? VAR_1->max_ptr : VAR_1->size;
   FUNC_0(VAR_1);
}
