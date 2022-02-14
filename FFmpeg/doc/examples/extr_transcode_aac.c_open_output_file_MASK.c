
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_26__ {int * sample_fmts; } ;
struct TYPE_25__ {int flags; int sample_rate; int strict_std_compliance; int bit_rate; int sample_fmt; int channel_layout; int channels; } ;
struct TYPE_24__ {int * pb; TYPE_20__* oformat; int url; } ;
struct TYPE_21__ {int num; int den; } ;
struct TYPE_23__ {int codecpar; TYPE_1__ time_base; } ;
struct TYPE_22__ {int flags; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AVCodec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_20__* FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (char const*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*) ;
 TYPE_5__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__**) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*,int *) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 TYPE_3__* FUNC_10 () ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_2__* FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (int **) ;
 int FUNC_14 (int **,char const*,int ) ;
 int FUNC_15 (int ,char*,...) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_16(const char *VAR_10,
                            AVCodecContext *VAR_11,
                            AVFormatContext **VAR_12,
                            AVCodecContext **VAR_13)
{
    AVCodecContext *VAR_14 = ((void*)0);
    AVIOContext *VAR_15 = ((void*)0);
    AVStream *VAR_16 = ((void*)0);
    AVCodec *VAR_17 = ((void*)0);
    int VAR_18;


    if ((VAR_18 = FUNC_14(&VAR_15, VAR_10,
                           VAR_2)) < 0) {
        FUNC_15(VAR_9, "Could not open output file '%s' (error '%s')\n",
                VAR_10, FUNC_1(VAR_18));
        return VAR_18;
    }


    if (!(*VAR_12 = FUNC_10())) {
        FUNC_15(VAR_9, "Could not allocate output format context\n");
        return FUNC_0(VAR_5);
    }


    (*VAR_12)->pb = VAR_15;


    if (!((*VAR_12)->oformat = FUNC_3(((void*)0), VAR_10,
                                                              ((void*)0)))) {
        FUNC_15(VAR_9, "Could not find output file format\n");
        goto cleanup;
    }

    if (!((*VAR_12)->url = FUNC_4(VAR_10))) {
        FUNC_15(VAR_9, "Could not allocate url.\n");
        VAR_18 = FUNC_0(VAR_5);
        goto cleanup;
    }


    if (!(VAR_17 = FUNC_6(VAR_4))) {
        FUNC_15(VAR_9, "Could not find an AAC encoder.\n");
        goto cleanup;
    }


    if (!(VAR_16 = FUNC_12(*VAR_12, ((void*)0)))) {
        FUNC_15(VAR_9, "Could not create new stream\n");
        VAR_18 = FUNC_0(VAR_5);
        goto cleanup;
    }

    VAR_14 = FUNC_5(VAR_17);
    if (!VAR_14) {
        FUNC_15(VAR_9, "Could not allocate an encoding context\n");
        VAR_18 = FUNC_0(VAR_5);
        goto cleanup;
    }



    VAR_14->channels = VAR_8;
    VAR_14->channel_layout = FUNC_2(VAR_8);
    VAR_14->sample_rate = VAR_11->sample_rate;
    VAR_14->sample_fmt = VAR_17->sample_fmts[0];
    VAR_14->bit_rate = VAR_7;


    VAR_14->strict_std_compliance = VAR_6;


    VAR_16->time_base.den = VAR_11->sample_rate;
    VAR_16->time_base.num = 1;



    if ((*VAR_12)->oformat->flags & VAR_1)
        VAR_14->flags |= VAR_3;


    if ((VAR_18 = FUNC_8(VAR_14, VAR_17, ((void*)0))) < 0) {
        FUNC_15(VAR_9, "Could not open output codec (error '%s')\n",
                FUNC_1(VAR_18));
        goto cleanup;
    }

    VAR_18 = FUNC_9(VAR_16->codecpar, VAR_14);
    if (VAR_18 < 0) {
        FUNC_15(VAR_9, "Could not initialize stream parameters\n");
        goto cleanup;
    }


    *VAR_13 = VAR_14;

    return 0;

cleanup:
    FUNC_7(&VAR_14);
    FUNC_13(&(*VAR_12)->pb);
    FUNC_11(*VAR_12);
    *VAR_12 = ((void*)0);
    return VAR_18 < 0 ? VAR_18 : VAR_0;
}
