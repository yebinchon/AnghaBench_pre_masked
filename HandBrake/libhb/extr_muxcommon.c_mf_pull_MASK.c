
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int out; int in; int flen; TYPE_4__** fifo; } ;
struct TYPE_8__ {int buffered_size; TYPE_1__ mf; } ;
typedef TYPE_2__ hb_track_t ;
struct TYPE_9__ {int buffered_size; TYPE_2__** track; } ;
typedef TYPE_3__ hb_mux_t ;
struct TYPE_10__ {scalar_t__ size; } ;
typedef TYPE_4__ hb_buffer_t ;



__attribute__((used)) static hb_buffer_t *FUNC_0( hb_mux_t * VAR_0, int VAR_1 )
{
    hb_track_t *VAR_2 =VAR_0->track[VAR_1];
    hb_buffer_t *VAR_3 = ((void*)0);
    if ( VAR_2->mf.out != VAR_2->mf.in )
    {

        VAR_3 = VAR_2->mf.fifo[VAR_2->mf.out & (VAR_2->mf.flen - 1)];
        ++VAR_2->mf.out;

        VAR_2->buffered_size -= VAR_3->size;
        VAR_0->buffered_size -= VAR_3->size;
    }
    return VAR_3;
}
