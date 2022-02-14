
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int flen; int in; int out; TYPE_4__** fifo; } ;
struct TYPE_11__ {scalar_t__ buffered_size; TYPE_1__ mf; } ;
typedef TYPE_2__ hb_track_t ;
struct TYPE_12__ {int buffered_size; int allRdy; int rdy; TYPE_2__** track; } ;
typedef TYPE_3__ hb_mux_t ;
struct TYPE_13__ {scalar_t__ size; } ;
typedef TYPE_4__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__**) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 TYPE_4__** FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( hb_mux_t * VAR_1, int VAR_2, hb_buffer_t *VAR_3 )
{
    hb_track_t * VAR_4 = VAR_1->track[VAR_2];
    uint32_t VAR_5 = VAR_4->mf.flen - 1;
    uint32_t VAR_6 = VAR_4->mf.in;

    FUNC_2( VAR_3, VAR_3->size );
    if ( VAR_4->buffered_size > VAR_0 )
    {
        FUNC_1(VAR_1->rdy, VAR_1->allRdy);
    }
    if ( ( ( VAR_6 + 1 ) & VAR_5 ) == ( VAR_4->mf.out & VAR_5 ) )
    {
        VAR_4->mf.flen *= 2;
        uint32_t VAR_7 = VAR_4->mf.flen - 1;
        hb_buffer_t **VAR_8 = FUNC_3( VAR_4->mf.flen * sizeof(*VAR_8) );
        int VAR_9 = VAR_4->mf.out;
        while ( VAR_9 != VAR_4->mf.in )
        {
            VAR_8[VAR_9 & VAR_7] = VAR_4->mf.fifo[VAR_9 & VAR_5];
            ++VAR_9;
        }
        FUNC_0( VAR_4->mf.fifo );
        VAR_4->mf.fifo = VAR_8;
        VAR_5 = VAR_7;
    }
    VAR_4->mf.fifo[VAR_6 & VAR_5] = VAR_3;
    VAR_4->mf.in = VAR_6 + 1;
    VAR_4->buffered_size += VAR_3->size;
    VAR_1->buffered_size += VAR_3->size;
}
