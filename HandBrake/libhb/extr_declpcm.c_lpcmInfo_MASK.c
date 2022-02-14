
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int offset; int nchannels; int samplerate; int sample_size; int duration; int nchunks; int nsamples; int size; scalar_t__ next_pts; int scr_sequence; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_9__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_7__ {scalar_t__ start; int scr_sequence; } ;
struct TYPE_10__ {int* data; int size; TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_1( hb_work_object_t *VAR_4, hb_buffer_t *VAR_5 )
{
    hb_work_private_t * VAR_6 = VAR_4->private_data;
    VAR_6->offset = ( ( VAR_5->data[1] << 8 ) | VAR_5->data[2] ) + 2;
    if ( VAR_6->offset >= VAR_1 )
    {
        FUNC_0( "declpcm: illegal frame offset %d", VAR_6->offset );
        VAR_6->offset = 2;
    }
    VAR_6->nchannels = ( VAR_5->data[4] & 7 ) + 1;
    VAR_6->samplerate = VAR_2[ ( VAR_5->data[4] >> 4 ) & 0x3 ];
    VAR_6->sample_size = VAR_3[VAR_5->data[4] >> 6];



    int VAR_7 = VAR_6->sample_size / 8;
    int VAR_8 = 1;

    switch( VAR_6->sample_size )
    {
        case 20:
            VAR_7 = 5;
            VAR_8 = 2;
            break;
        case 24:
            VAR_7 = 6;
            VAR_8 = 2;
            break;
    }
    int VAR_9 = ( VAR_5->size - VAR_6->offset ) / VAR_7;
    int VAR_10 = VAR_9 * VAR_8;


    int VAR_11 = ( 90000 * VAR_10 / ( VAR_6->samplerate * VAR_6->nchannels ) +
                   149 ) / 150;

    VAR_6->duration = VAR_11 * 150;
    VAR_6->nchunks = ( VAR_6->duration * VAR_6->nchannels * VAR_6->samplerate +
                    VAR_8 - 1 ) / ( 90000 * VAR_8 );
    VAR_6->nsamples = ( VAR_6->duration * VAR_6->samplerate ) / 90000;
    VAR_6->size = VAR_6->nchunks * VAR_7;

    if (VAR_5->s.start != VAR_0)
    {
        VAR_6->next_pts = VAR_5->s.start;
    }
    VAR_6->scr_sequence = VAR_5->s.scr_sequence;
}
