
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int buffer_size; } ;
typedef TYPE_1__ hb_fifo_t ;
struct TYPE_7__ {int alloc; int * data; } ;
typedef TYPE_2__ hb_buffer_t ;
struct TYPE_8__ {int lock; int allocated; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 TYPE_5__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;
 TYPE_1__* FUNC_5 (int) ;

void FUNC_6( hb_buffer_t * VAR_1, int VAR_2 )
{
    if ( VAR_2 > VAR_1->alloc || VAR_1->data == ((void*)0) )
    {
        uint8_t * VAR_3;
        uint32_t VAR_4 = VAR_1->data != ((void*)0) ? VAR_1->alloc : 0;
        hb_fifo_t * VAR_5 = FUNC_5(VAR_2);

        if (VAR_5 != ((void*)0))
        {
            VAR_2 = VAR_5->buffer_size;
        }
        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 == ((void*)0))
        {
            return;
        }
        if (VAR_1->data != ((void*)0))
        {
            FUNC_4(VAR_3, VAR_1->data, VAR_1->alloc);
            FUNC_0(VAR_1->data);
        }
        VAR_1->data = VAR_3;
        VAR_1->alloc = VAR_2;

        FUNC_2(VAR_0.lock);
        VAR_0.allocated += VAR_2 - VAR_4;
        FUNC_3(VAR_0.lock);
    }
}
