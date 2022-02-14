
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int args ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_16__ {int width; int height; int pix_fmt; TYPE_2__ sample_aspect_ratio; } ;
struct TYPE_15__ {TYPE_1__** streams; } ;
struct TYPE_14__ {int * next; scalar_t__ pad_idx; void* filter_ctx; void* name; } ;
struct TYPE_13__ {int num; int den; } ;
struct TYPE_11__ {TYPE_3__ time_base; } ;
typedef TYPE_3__ AVRational ;
typedef TYPE_4__ AVFilterInOut ;
typedef int AVFilter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (void*,char*,int*,int,int ) ;
 void* FUNC_3 (char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (void**,int const*,char*,char*,int *,int ) ;
 int FUNC_8 (int ,char const*,TYPE_4__**,TYPE_4__**,int *) ;
 TYPE_4__* FUNC_9 () ;
 int FUNC_10 (TYPE_4__**) ;
 void* VAR_5 ;
 void* VAR_6 ;
 TYPE_6__* VAR_7 ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_11 (char*,int,char*,int,int,int,int,int,int,int) ;
 size_t VAR_10 ;

__attribute__((used)) static int FUNC_12(const char *VAR_11)
{
    char VAR_12[512];
    int VAR_13 = 0;
    const AVFilter *VAR_14 = FUNC_4("buffer");
    const AVFilter *VAR_15 = FUNC_4("buffersink");
    AVFilterInOut *VAR_16 = FUNC_9();
    AVFilterInOut *VAR_17 = FUNC_9();
    AVRational VAR_18 = VAR_9->streams[VAR_10]->time_base;
    enum AVPixelFormat VAR_19[] = { VAR_2, VAR_3 };

    VAR_8 = FUNC_5();
    if (!VAR_16 || !VAR_17 || !VAR_8) {
        VAR_13 = FUNC_0(VAR_4);
        goto end;
    }


    FUNC_11(VAR_12, sizeof(VAR_12),
            "video_size=%dx%d:pix_fmt=%d:time_base=%d/%d:pixel_aspect=%d/%d",
            VAR_7->width, VAR_7->height, VAR_7->pix_fmt,
            VAR_18.num, VAR_18.den,
            VAR_7->sample_aspect_ratio.num, VAR_7->sample_aspect_ratio.den);

    VAR_13 = FUNC_7(&VAR_6, VAR_14, "in",
                                       VAR_12, ((void*)0), VAR_8);
    if (VAR_13 < 0) {
        FUNC_1(((void*)0), VAR_0, "Cannot create buffer source\n");
        goto end;
    }


    VAR_13 = FUNC_7(&VAR_5, VAR_15, "out",
                                       ((void*)0), ((void*)0), VAR_8);
    if (VAR_13 < 0) {
        FUNC_1(((void*)0), VAR_0, "Cannot create buffer sink\n");
        goto end;
    }

    VAR_13 = FUNC_2(VAR_5, "pix_fmts", VAR_19,
                              VAR_3, VAR_1);
    if (VAR_13 < 0) {
        FUNC_1(((void*)0), VAR_0, "Cannot set output pixel format\n");
        goto end;
    }
    VAR_16->name = FUNC_3("in");
    VAR_16->filter_ctx = VAR_6;
    VAR_16->pad_idx = 0;
    VAR_16->next = ((void*)0);







    VAR_17->name = FUNC_3("out");
    VAR_17->filter_ctx = VAR_5;
    VAR_17->pad_idx = 0;
    VAR_17->next = ((void*)0);

    if ((VAR_13 = FUNC_8(VAR_8, VAR_11,
                                    &VAR_17, &VAR_16, ((void*)0))) < 0)
        goto end;

    if ((VAR_13 = FUNC_6(VAR_8, ((void*)0))) < 0)
        goto end;

end:
    FUNC_10(&VAR_17);
    FUNC_10(&VAR_16);

    return VAR_13;
}
