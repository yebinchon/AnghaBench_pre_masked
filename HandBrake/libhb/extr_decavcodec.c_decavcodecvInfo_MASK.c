
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_23__ {int duration; TYPE_5__* context; } ;
typedef TYPE_6__ hb_work_private_t ;
struct TYPE_24__ {TYPE_1__* title; TYPE_6__* private_data; } ;
typedef TYPE_7__ hb_work_object_t ;
struct TYPE_19__ {int den; int num; } ;
struct TYPE_16__ {int width; int height; TYPE_2__ par; } ;
struct TYPE_17__ {int num; int den; } ;
struct TYPE_25__ {int video_decode_support; int color_range; TYPE_10__ geometry; int color_matrix; int color_transfer; TYPE_11__ rate; int color_prim; int pix_fmt; int name; int level; int profile; int bitrate; } ;
typedef TYPE_8__ hb_work_info_t ;
struct TYPE_20__ {int den; int num; } ;
struct TYPE_22__ {int height; int width; int codec_id; int pix_fmt; int color_range; int colorspace; int color_trc; int color_primaries; TYPE_4__* codec; int level; int profile; TYPE_3__ sample_aspect_ratio; int bit_rate; } ;
struct TYPE_21__ {int name; } ;
struct TYPE_18__ {scalar_t__ rotation; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,TYPE_10__) ;
 int FUNC_3 (int ,TYPE_10__,TYPE_11__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*,int*,int*) ;
 int FUNC_7 (TYPE_8__*,int ,int) ;

__attribute__((used)) static int FUNC_8( hb_work_object_t *VAR_7, hb_work_info_t *VAR_8 )
{
    hb_work_private_t *VAR_9 = VAR_7->private_data;

    int VAR_10, VAR_11, VAR_12;
    FUNC_6(&VAR_10, &VAR_11, &VAR_12);

    FUNC_7( VAR_8, 0, sizeof(*VAR_8) );

    if (VAR_9->context == ((void*)0) || VAR_9->context->codec == ((void*)0))
        return 0;

    VAR_8->bitrate = VAR_9->context->bit_rate;
    if (VAR_7->title->rotation == VAR_6 ||
        VAR_7->title->rotation == VAR_5)
    {



        VAR_8->geometry.width = VAR_9->context->height & ~1;
        VAR_8->geometry.height = VAR_9->context->width & ~1;

        VAR_8->geometry.par.num = VAR_9->context->sample_aspect_ratio.den;
        VAR_8->geometry.par.den = VAR_9->context->sample_aspect_ratio.num;
    }
    else
    {



        VAR_8->geometry.width = VAR_9->context->width & ~1;
        VAR_8->geometry.height = VAR_9->context->height & ~1;

        VAR_8->geometry.par.num = VAR_9->context->sample_aspect_ratio.num;
        VAR_8->geometry.par.den = VAR_9->context->sample_aspect_ratio.den;
    }

    FUNC_1( VAR_9 );
    VAR_8->rate.num = VAR_12;
    VAR_8->rate.den = VAR_9->duration * (VAR_12 / 90000.);

    VAR_8->profile = VAR_9->context->profile;
    VAR_8->level = VAR_9->context->level;
    VAR_8->name = VAR_9->context->codec->name;

    VAR_8->pix_fmt = VAR_9->context->pix_fmt;
    VAR_8->color_prim = FUNC_3(VAR_9->context->color_primaries,
                                          VAR_8->geometry, VAR_8->rate);
    VAR_8->color_transfer = FUNC_4(VAR_9->context->color_trc);
    VAR_8->color_matrix = FUNC_2(VAR_9->context->colorspace,
                                            VAR_8->geometry);
    VAR_8->color_range = VAR_9->context->color_range;

    VAR_8->video_decode_support = VAR_4;
    return 1;
}
