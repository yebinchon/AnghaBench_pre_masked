
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int frames; int mux_data; int bytes; } ;
typedef TYPE_2__ hb_track_t ;
struct TYPE_16__ {scalar_t__ pts; TYPE_2__** track; } ;
typedef TYPE_3__ hb_mux_t ;
struct TYPE_17__ {int (* mux ) (TYPE_4__*,int ,TYPE_5__*) ;} ;
typedef TYPE_4__ hb_mux_object_t ;
struct TYPE_14__ {scalar_t__ start; } ;
struct TYPE_18__ {scalar_t__ size; TYPE_1__ s; } ;
typedef TYPE_5__ hb_buffer_t ;


 TYPE_5__* FUNC_0 (TYPE_2__*) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_5__*) ;

__attribute__((used)) static void FUNC_3( hb_mux_t *VAR_0, int VAR_1, hb_mux_object_t *VAR_2 )
{
    hb_track_t *VAR_3 = VAR_0->track[VAR_1];
    hb_buffer_t *VAR_4;

    while ( ( VAR_4 = FUNC_0( VAR_3 ) ) != ((void*)0) && VAR_4->s.start < VAR_0->pts )
    {
        VAR_4 = FUNC_1( VAR_0, VAR_1 );
        VAR_3->frames += 1;
        VAR_3->bytes += VAR_4->size;
        VAR_2->mux( VAR_2, VAR_3->mux_data, VAR_4 );
    }
}
