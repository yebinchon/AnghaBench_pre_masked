
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int * samples; } ;
typedef TYPE_1__ rwav_t ;
struct TYPE_6__ {size_t size; int step; int const* data; TYPE_1__* out; } ;
typedef TYPE_2__ rwav_iterator_t ;


 int VAR_0 ;

void FUNC_0(rwav_iterator_t* VAR_1, rwav_t* VAR_2, const void* VAR_3, size_t VAR_4)
{
   VAR_1->out = VAR_2;
   VAR_1->data = (const uint8_t*)VAR_3;
   VAR_1->size = VAR_4;
   VAR_1->step = VAR_0;

   VAR_2->samples = ((void*)0);
}
