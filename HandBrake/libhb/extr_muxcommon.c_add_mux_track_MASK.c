
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flen; void* fifo; } ;
struct TYPE_8__ {TYPE_1__ mf; int * mux_data; } ;
typedef TYPE_2__ hb_track_t ;
struct TYPE_9__ {int ntracks; int max_tracks; int allRdy; int allEof; TYPE_2__** track; } ;
typedef TYPE_3__ hb_mux_t ;
typedef int hb_mux_data_t ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int) ;
 TYPE_2__** FUNC_3 (TYPE_2__**,int) ;

__attribute__((used)) static void FUNC_4( hb_mux_t *VAR_0, hb_mux_data_t *VAR_1,
                           int VAR_2 )
{
    if ( VAR_0->ntracks + 1 > VAR_0->max_tracks )
    {
        int VAR_3 = VAR_0->max_tracks ? VAR_0->max_tracks * 2 : 32;
        hb_track_t **VAR_4;
        VAR_4 = FUNC_3(VAR_0->track, VAR_3 * sizeof(hb_track_t*));
        if (VAR_4 == ((void*)0))
        {
            FUNC_2("add_mux_track: realloc failed, too many tracks (>%d)",
                     VAR_3);
            return;
        }
        VAR_0->track = VAR_4;
        VAR_0->max_tracks = VAR_3;
    }

    hb_track_t *VAR_5 = FUNC_0( sizeof( hb_track_t ), 1 );
    VAR_5->mux_data = VAR_1;
    VAR_5->mf.flen = 8;
    VAR_5->mf.fifo = FUNC_0( sizeof(VAR_5->mf.fifo[0]), VAR_5->mf.flen );

    int VAR_6 = VAR_0->ntracks++;
    VAR_0->track[VAR_6] = VAR_5;
    FUNC_1(VAR_0->allEof, VAR_6);
    if (VAR_2)
        FUNC_1(VAR_0->allRdy, VAR_6);
}
