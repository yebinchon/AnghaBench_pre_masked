
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_list_t ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_1__ hb_buffer_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

int FUNC_2( hb_list_t * VAR_0 )
{
    hb_buffer_t * VAR_1;
    int VAR_2;
    int VAR_3;

    VAR_2 = 0;
    for( VAR_3 = 0; VAR_3 < FUNC_0( VAR_0 ); VAR_3++ )
    {
        VAR_1 = FUNC_1( VAR_0, VAR_3 );
        VAR_2 += VAR_1->size - VAR_1->offset;
    }

    return VAR_2;
}
