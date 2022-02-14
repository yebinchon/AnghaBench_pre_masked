
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* context; } ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_13__ {TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_work_object_t ;
struct TYPE_10__ {int den; int num; } ;
struct TYPE_14__ {int level; int profile; TYPE_1__ rate; int bitrate; } ;
typedef TYPE_5__ hb_work_info_t ;
struct TYPE_11__ {int den; int num; } ;
struct TYPE_15__ {int level; int profile; TYPE_2__ time_base; int bit_rate; } ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_1( hb_work_object_t *VAR_0, hb_work_info_t *VAR_1 )
{
    hb_work_private_t *VAR_2 = VAR_0->private_data;

    FUNC_0( VAR_1, 0, sizeof(*VAR_1) );

    if ( VAR_2 && VAR_2->context )
    {
        AVCodecContext *VAR_3 = VAR_2->context;
        VAR_1->bitrate = VAR_3->bit_rate;
        VAR_1->rate.num = VAR_3->time_base.num;
        VAR_1->rate.den = VAR_3->time_base.den;
        VAR_1->profile = VAR_3->profile;
        VAR_1->level = VAR_3->level;
        return 1;
    }
    return 0;
}
