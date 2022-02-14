
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int list_coverart; } ;
typedef TYPE_1__ hb_metadata_t ;
struct TYPE_8__ {struct TYPE_8__* data; } ;
typedef TYPE_2__ hb_coverart_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;

void FUNC_3( hb_metadata_t *VAR_0, int VAR_1 )
{
    if ( VAR_0 )
    {
        hb_coverart_t *VAR_2 = FUNC_1( VAR_0->list_coverart, VAR_1 );
        if ( VAR_2 )
        {
            FUNC_2( VAR_0->list_coverart, VAR_2 );
            FUNC_0( VAR_2->data );
            FUNC_0( VAR_2 );
        }
    }
}
