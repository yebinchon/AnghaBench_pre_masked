
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_4__* audio; } ;
struct TYPE_20__ {TYPE_5__ audio; } ;
typedef TYPE_7__ sync_stream_t ;
typedef double int64_t ;
struct TYPE_19__ {double start; double stop; double duration; } ;
struct TYPE_21__ {TYPE_6__ s; int size; int data; } ;
typedef TYPE_8__ hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_15__ {int codec; int mixdown; } ;
struct TYPE_14__ {int samples_per_frame; int samplerate; } ;
struct TYPE_16__ {TYPE_2__ out; TYPE_1__ in; } ;
struct TYPE_17__ {TYPE_3__ config; } ;


 int VAR_0 ;
 TYPE_8__* FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_8__*) ;
 TYPE_8__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static hb_buffer_t * FUNC_5( sync_stream_t * VAR_1,
                                       int64_t VAR_2, int64_t VAR_3 )
{
    double VAR_4, VAR_5, VAR_6;
    int VAR_7;
    hb_buffer_list_t VAR_8;
    hb_buffer_t * VAR_9;

    if (VAR_1->audio.audio->config.out.codec & VAR_0)
    {
        return ((void*)0);
    }
    VAR_6 = VAR_2;


    VAR_4 = (90000. * VAR_1->audio.audio->config.in.samples_per_frame) /
                          VAR_1->audio.audio->config.in.samplerate;




    VAR_7 = sizeof(float) * VAR_1->audio.audio->config.in.samples_per_frame *
                           FUNC_3(
                                    VAR_1->audio.audio->config.out.mixdown);

    FUNC_2(&VAR_8);
    VAR_5 = VAR_3;
    while (VAR_6 >= VAR_4)
    {
        VAR_9 = FUNC_0(VAR_7);
        FUNC_4(VAR_9->data, 0, VAR_9->size);
        VAR_9->s.start = VAR_5;
        VAR_5 += VAR_4;
        VAR_9->s.stop = VAR_5;
        VAR_9->s.duration = VAR_4;
        VAR_6 -= VAR_4;
        FUNC_1(&VAR_8, VAR_9);
    }
    if (VAR_6 > 0)
    {

        VAR_7 = (int)(VAR_6 * VAR_1->audio.audio->config.in.samplerate /
                     90000) * sizeof(float) *
               FUNC_3(
                                    VAR_1->audio.audio->config.out.mixdown);
        if (VAR_7 > 0)
        {
            VAR_9 = FUNC_0(VAR_7);
            FUNC_4(VAR_9->data, 0, VAR_9->size);
            VAR_9->s.start = VAR_5;
            VAR_5 += VAR_6;
            VAR_9->s.stop = VAR_5;
            VAR_9->s.duration = VAR_6;
            FUNC_1(&VAR_8, VAR_9);
        }
    }
    return FUNC_2(&VAR_8);
}
