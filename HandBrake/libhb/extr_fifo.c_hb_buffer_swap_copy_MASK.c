
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int size; int alloc; int * data; } ;
typedef TYPE_1__ hb_buffer_t ;



void FUNC_0( hb_buffer_t *VAR_0, hb_buffer_t *VAR_1 )
{
    uint8_t *VAR_2 = VAR_1->data;
    int VAR_3 = VAR_1->size;
    int VAR_4 = VAR_1->alloc;

    *VAR_1 = *VAR_0;

    VAR_0->data = VAR_2;
    VAR_0->size = VAR_3;
    VAR_0->alloc = VAR_4;
}
