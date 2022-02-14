
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* subtitle; } ;
struct TYPE_10__ {TYPE_2__* audio; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_13__ {int type; TYPE_5__ subtitle; TYPE_3__ audio; TYPE_1__ video; } ;
typedef TYPE_6__ sync_stream_t ;
struct TYPE_11__ {int id; } ;
struct TYPE_9__ {int id; } ;






__attribute__((used)) static int FUNC_0( sync_stream_t * VAR_0 )
{
    switch (VAR_0->type)
    {
        case 128:
            return VAR_0->video.id;
        case 130:
            return VAR_0->audio.audio->id;
        case 129:
            return VAR_0->subtitle.subtitle->id;
        default:
            return -1;
    }
}
