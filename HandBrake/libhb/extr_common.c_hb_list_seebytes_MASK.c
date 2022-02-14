
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int hb_list_t ;
struct TYPE_3__ {size_t offset; int * data; scalar_t__ size; } ;
typedef TYPE_1__ hb_buffer_t ;


 int FUNC_0 (scalar_t__,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3( hb_list_t * VAR_0, uint8_t * VAR_1, int VAR_2 )
{
    hb_buffer_t * VAR_3;
    int VAR_4;
    int VAR_5;
    int VAR_6;

    for( VAR_6 = 0, VAR_4 = 0; VAR_4 < VAR_2; VAR_6++ )
    {
        VAR_3 = FUNC_1( VAR_0, VAR_6 );
        VAR_5 = FUNC_0( VAR_3->size - VAR_3->offset, VAR_2 - VAR_4 );
        FUNC_2( &VAR_1[VAR_4], &VAR_3->data[VAR_3->offset], VAR_5 );
        VAR_4 += VAR_5;
    }
}
