
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


struct TYPE_18__ {int list_audio; } ;
typedef TYPE_5__ hb_title_t ;
struct TYPE_19__ {int list_audio; TYPE_5__* title; } ;
typedef TYPE_6__ hb_job_t ;
struct TYPE_17__ {scalar_t__* name; scalar_t__ track; } ;
struct TYPE_14__ {int track; } ;
struct TYPE_16__ {TYPE_4__ out; TYPE_1__ in; } ;
struct TYPE_20__ {TYPE_3__ config; } ;
typedef TYPE_7__ hb_audio_t ;
struct TYPE_15__ {int bitrate; int codec; int track; } ;
struct TYPE_21__ {TYPE_4__ out; TYPE_2__ in; } ;
typedef TYPE_8__ hb_audio_config_t ;


 int FUNC_0 (TYPE_7__**) ;
 TYPE_7__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__* FUNC_5 (scalar_t__*) ;

int FUNC_6(const hb_job_t * VAR_0, const hb_audio_config_t * VAR_1)
{
    hb_title_t *VAR_2 = VAR_0->title;
    hb_audio_t *VAR_3;

    VAR_3 = FUNC_1( FUNC_4( VAR_2->list_audio, VAR_1->in.track ) );
    if( VAR_3 == ((void*)0) )
    {

        return 0;
    }

    if( (VAR_1->in.bitrate != -1) && (VAR_1->in.codec != 0xDEADBEEF) )
    {


        FUNC_0(&VAR_3);
        return 0;
    }







    VAR_3->config.in.track = VAR_1->in.track;



    VAR_3->config.out = VAR_1->out;
    VAR_3->config.out.track = FUNC_3(VAR_0->list_audio) + 1;
    if (VAR_1->out.name && *VAR_1->out.name)
    {
        VAR_3->config.out.name = FUNC_5(VAR_1->out.name);
    }

    FUNC_2(VAR_0->list_audio, VAR_3);
    return 1;
}
