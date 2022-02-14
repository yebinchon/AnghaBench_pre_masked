
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_22__ {int width; int height; scalar_t__ pix_fmt; int * graph; } ;
struct TYPE_33__ {scalar_t__ io_pattern; } ;
struct TYPE_34__ {TYPE_5__ config; scalar_t__ decode; } ;
struct TYPE_26__ {int duration; TYPE_11__ video_filters; TYPE_14__* frame; TYPE_12__* title; TYPE_10__* job; TYPE_7__* context; TYPE_6__ qsv; } ;
typedef TYPE_15__ hb_work_private_t ;
typedef int hb_value_array_t ;
struct TYPE_27__ {int num; int den; } ;
typedef TYPE_16__ hb_rational_t ;
struct TYPE_32__ {int num; int den; } ;
struct TYPE_31__ {int num; int den; } ;
struct TYPE_29__ {int den; int num; } ;
struct TYPE_24__ {int width; int height; TYPE_1__ par; } ;
struct TYPE_28__ {int pix_fmt; TYPE_4__ vrate; TYPE_3__ time_base; TYPE_13__ geometry; } ;
typedef TYPE_17__ hb_filter_init_t ;
typedef int hb_dict_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_36__ {int height; int width; } ;
struct TYPE_37__ {TYPE_8__ geometry; } ;
struct TYPE_35__ {int width; int height; } ;
struct TYPE_30__ {int den; int num; } ;
struct TYPE_25__ {int format; int width; int height; TYPE_2__ sample_aspect_ratio; } ;
struct TYPE_23__ {int rotation; } ;
struct TYPE_21__ {int pix_fmt; TYPE_9__* title; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_15__*) ;
 int FUNC_1 (int *,char*,int *) ;
 int * FUNC_2 (int *,TYPE_17__*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int) ;
 int * FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int*,int*,int*) ;

int FUNC_13(hb_work_private_t * VAR_3)
{
    int VAR_4;
    int VAR_5;
    hb_value_array_t * VAR_6;
    hb_dict_t * VAR_7;
    hb_filter_init_t VAR_8;
    enum AVPixelFormat VAR_9;
    if (!VAR_3->job)
    {



        VAR_4 = VAR_3->context->width & ~1;
        VAR_5 = VAR_3->context->height & ~1;
        VAR_9 = VAR_0;
    }
    else
    {
        if (VAR_3->title->rotation == 128 ||
            VAR_3->title->rotation == 129)
        {
            VAR_4 = VAR_3->job->title->geometry.height;
            VAR_5 = VAR_3->job->title->geometry.width;
        }
        else
        {
            VAR_4 = VAR_3->job->title->geometry.width;
            VAR_5 = VAR_3->job->title->geometry.height;
        }
        VAR_9 = VAR_3->job->pix_fmt;
    }

    if (VAR_9 == VAR_3->frame->format &&
        VAR_4 == VAR_3->frame->width &&
        VAR_5 == VAR_3->frame->height &&
        VAR_1 == VAR_3->title->rotation)
    {

        FUNC_0(VAR_3);
        return 0;
    }

    if (VAR_3->video_filters.graph != ((void*)0) &&
        VAR_3->video_filters.width == VAR_3->frame->width &&
        VAR_3->video_filters.height == VAR_3->frame->height &&
        VAR_3->video_filters.pix_fmt == VAR_3->frame->format)
    {

        return 0;
    }

    VAR_3->video_filters.width = VAR_3->frame->width;
    VAR_3->video_filters.height = VAR_3->frame->height;
    VAR_3->video_filters.pix_fmt = VAR_3->frame->format;


    FUNC_0(VAR_3);

    int VAR_10, VAR_11, VAR_12;
    hb_rational_t VAR_13;

    FUNC_12(&VAR_10, &VAR_11, &VAR_12);
    VAR_13.num = VAR_12;
    VAR_13.den = VAR_3->duration * (VAR_12 / 90000.);

    VAR_6 = FUNC_7();
    if (VAR_9 != VAR_3->frame->format ||
        VAR_4 != VAR_3->frame->width ||
        VAR_5 != VAR_3->frame->height)
    {

        VAR_7 = FUNC_3();
        FUNC_4(VAR_7, "w", FUNC_9(VAR_4));
        FUNC_4(VAR_7, "h", FUNC_9(VAR_5));
        FUNC_4(VAR_7, "flags", FUNC_11("lanczos+accurate_rnd"));
        FUNC_1(VAR_6, "scale", VAR_7);

        VAR_7 = FUNC_3();
        FUNC_4(VAR_7, "pix_fmts", FUNC_11("yuv420p"));
        FUNC_1(VAR_6, "format", VAR_7);
    }
    if (VAR_3->title->rotation != VAR_1)
    {
        switch (VAR_3->title->rotation)
        {
            case 128:
                VAR_7 = FUNC_3();
                FUNC_4(VAR_7, "dir", FUNC_11("cclock"));
                FUNC_1(VAR_6, "transpose", VAR_7);
                break;
            case 130:
                FUNC_1(VAR_6, "hflip", FUNC_10());
                FUNC_1(VAR_6, "vflip", FUNC_10());
                break;
            case 129:
                VAR_7 = FUNC_3();
                FUNC_4(VAR_7, "dir", FUNC_11("clock"));
                FUNC_1(VAR_6, "transpose", VAR_7);
                break;
            default:
                FUNC_6("reinit_video_filters: Unknown rotation, failed");
        }
    }

    VAR_8.pix_fmt = VAR_3->frame->format;
    VAR_8.geometry.width = VAR_3->frame->width;
    VAR_8.geometry.height = VAR_3->frame->height;
    VAR_8.geometry.par.num = VAR_3->frame->sample_aspect_ratio.num;
    VAR_8.geometry.par.den = VAR_3->frame->sample_aspect_ratio.den;
    VAR_8.time_base.num = 1;
    VAR_8.time_base.den = 1;
    VAR_8.vrate.num = VAR_13.num;
    VAR_8.vrate.den = VAR_13.den;

    VAR_3->video_filters.graph = FUNC_2(VAR_6, &VAR_8);
    FUNC_8(&VAR_6);
    if (VAR_3->video_filters.graph == ((void*)0))
    {
        FUNC_5("reinit_video_filters: failed to create filter graph");
        goto fail;
    }

    return 0;

fail:
    FUNC_0(VAR_3);

    return 1;
}
