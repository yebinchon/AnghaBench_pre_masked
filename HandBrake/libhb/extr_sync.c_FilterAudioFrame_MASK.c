
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {double gain_factor; int * resample; TYPE_7__* audio; } ;
struct TYPE_17__ {scalar_t__ next_pts; TYPE_3__ audio; } ;
typedef TYPE_5__ sync_stream_t ;
struct TYPE_16__ {scalar_t__ duration; scalar_t__ stop; scalar_t__ start; int frametype; int type; } ;
struct TYPE_18__ {int size; TYPE_4__ s; scalar_t__ data; } ;
typedef TYPE_6__ hb_buffer_t ;
struct TYPE_13__ {int codec; double gain; int mixdown; } ;
struct TYPE_14__ {TYPE_1__ out; } ;
struct TYPE_19__ {TYPE_2__ config; } ;
typedef TYPE_7__ hb_audio_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double,double) ;
 TYPE_6__* FUNC_2 (int *,int const**,int) ;
 int FUNC_3 (TYPE_6__**) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static hb_buffer_t * FUNC_5( sync_stream_t * VAR_3,
                                       hb_buffer_t *VAR_4 )
{
    hb_audio_t * VAR_5 = VAR_3->audio.audio;




    if (VAR_4->s.duration <= 0)
    {
        VAR_4->s.duration = VAR_4->s.stop - VAR_4->s.start;
    }

    if (!(VAR_5->config.out.codec & VAR_1))
    {




        if (VAR_3->audio.resample != ((void*)0))
        {

            hb_buffer_t * VAR_6;
            int VAR_7, VAR_8;

            VAR_8 = FUNC_4(
                            VAR_5->config.out.mixdown ) * sizeof( float );

            VAR_7 = VAR_4->size / VAR_8;
            VAR_6 = FUNC_2(VAR_3->audio.resample,
                                    (const uint8_t **)&VAR_4->data,
                                    VAR_7);
            FUNC_3(&VAR_4);
            if (VAR_6 == ((void*)0))
            {
                return ((void*)0);
            }
            VAR_6->s.start = VAR_3->next_pts;
            VAR_6->s.stop = VAR_3->next_pts + VAR_6->s.duration;
            VAR_4 = VAR_6;
        }
        if (VAR_5->config.out.gain > 0.0)
        {
            int VAR_9, VAR_10;

            VAR_9 = VAR_4->size / sizeof(float);
            for ( VAR_10 = 0; VAR_10 < VAR_9; VAR_10++ )
            {
                double VAR_11;

                VAR_11 = (double)*(((float*)VAR_4->data)+VAR_10);
                VAR_11 *= VAR_3->audio.gain_factor;
                if (VAR_11 > 0)
                    VAR_11 = FUNC_1(VAR_11, 1.0);
                else
                    VAR_11 = FUNC_0(VAR_11, -1.0);
                *(((float*)VAR_4->data)+VAR_10) = VAR_11;
            }
        }
        else if( VAR_5->config.out.gain < 0.0 )
        {
            int VAR_12, VAR_13;

            VAR_12 = VAR_4->size / sizeof(float);
            for ( VAR_13 = 0; VAR_13 < VAR_12; VAR_13++ )
            {
                double VAR_14;

                VAR_14 = (double)*(((float*)VAR_4->data)+VAR_13);
                VAR_14 *= VAR_3->audio.gain_factor;
                *(((float*)VAR_4->data)+VAR_13) = VAR_14;
            }
        }
    }

    VAR_4->s.type = VAR_0;
    VAR_4->s.frametype = VAR_2;

    return VAR_4;
}
