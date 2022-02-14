
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_13__ {int * resample; scalar_t__ next_pts; int * job; } ;
typedef TYPE_5__ hb_work_private_t ;
struct TYPE_14__ {TYPE_4__* audio; TYPE_5__* private_data; } ;
typedef TYPE_6__ hb_work_object_t ;
typedef int hb_job_t ;
struct TYPE_10__ {int normalize_mix_level; int mixdown; } ;
struct TYPE_9__ {int samplerate; } ;
struct TYPE_11__ {TYPE_2__ out; TYPE_1__ in; } ;
struct TYPE_12__ {TYPE_3__ config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int,int) ;
 int * FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3( hb_work_object_t * VAR_2, hb_job_t * VAR_3 )
{
    hb_work_private_t * VAR_4 = FUNC_0( 1, sizeof( hb_work_private_t ) );
    VAR_2->private_data = VAR_4;
    VAR_4->job = VAR_3;

    VAR_4->next_pts = (int64_t)VAR_0;



    VAR_4->resample =
        FUNC_1(VAR_1,
                               VAR_2->audio->config.in.samplerate,
                               VAR_2->audio->config.out.mixdown,
                               VAR_2->audio->config.out.normalize_mix_level);
    if (VAR_4->resample == ((void*)0))
    {
        FUNC_2("declpcmInit: hb_audio_resample_init() failed");
        return 1;
    }

    return 0;
}
