
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int ssaTrack; int renderer; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_15__ {int start; } ;
struct TYPE_17__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_18__ {struct TYPE_18__* next; } ;
typedef TYPE_4__ ASS_Image ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (TYPE_3__**) ;

__attribute__((used)) static void FUNC_4( hb_filter_private_t * VAR_0, hb_buffer_t * VAR_1 )
{
    ASS_Image *VAR_2;
    hb_buffer_t *VAR_3;

    VAR_2 = FUNC_2( VAR_0->renderer, VAR_0->ssaTrack,
                                  VAR_1->s.start / 90, ((void*)0) );
    if ( !VAR_2 )
        return;

    ASS_Image *VAR_4;
    for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
        VAR_3 = FUNC_1( VAR_0, VAR_4 );
        if( VAR_3 )
        {
            FUNC_0( VAR_0, VAR_1, VAR_3 );
            FUNC_3( &VAR_3 );
        }
    }
}
