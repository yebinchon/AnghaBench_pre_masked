
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * list_coverart; } ;
typedef TYPE_1__ hb_metadata_t ;
struct TYPE_7__ {int size; int type; int data; } ;
typedef TYPE_2__ hb_coverart_t ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int const*,int) ;

void FUNC_5( hb_metadata_t *VAR_0, const uint8_t *VAR_1, int VAR_2, int VAR_3 )
{
    if ( VAR_0 )
    {
        if ( VAR_0->list_coverart == ((void*)0) )
        {
            VAR_0->list_coverart = FUNC_2();
        }
        hb_coverart_t *VAR_4 = FUNC_0( 1, sizeof(hb_coverart_t) );
        VAR_4->data = FUNC_3( VAR_2 );
        FUNC_4( VAR_4->data, VAR_1, VAR_2 );
        VAR_4->size = VAR_2;
        VAR_4->type = VAR_3;
        FUNC_1( VAR_0->list_coverart, VAR_4 );
    }
}
