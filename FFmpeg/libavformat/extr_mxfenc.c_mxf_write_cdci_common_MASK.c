
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


typedef int int64_t ;
typedef scalar_t__* UID ;
struct TYPE_16__ {int * oformat; int * pb; } ;
struct TYPE_15__ {TYPE_3__* codecpar; TYPE_4__* priv_data; } ;
struct TYPE_11__ {int num; int den; } ;
struct TYPE_14__ {int interlaced; int component_depth; int h_chroma_sub_sample; int v_chroma_sub_sample; int color_siting; int signal_standard; int field_dominance; int avc_intra; scalar_t__** codec_ul; TYPE_1__ aspect_ratio; } ;
struct TYPE_13__ {int height; scalar_t__ codec_id; int width; scalar_t__ color_range; int color_trc; } ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_4__ MXFStreamContext ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__*,int) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__*,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,scalar_t__* const) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int64_t FUNC_9(AVFormatContext *VAR_6, AVStream *VAR_7, const UID VAR_8)
{
    MXFStreamContext *VAR_9 = VAR_7->priv_data;
    AVIOContext *VAR_10 = VAR_6->pb;
    int VAR_11 = 0;
    int VAR_12 = (VAR_7->codecpar->height+15)/16*16;
    int VAR_13;
    int VAR_14, VAR_15;
    UID VAR_16 = {0};
    int64_t VAR_17 = FUNC_5(VAR_6, VAR_7, VAR_8);

    FUNC_4(VAR_16, VAR_7->codecpar->color_trc);

    if (VAR_7->codecpar->codec_id == VAR_3) {
        if (VAR_7->codecpar->height == 1080)
            VAR_11 = 1920;
        else if (VAR_7->codecpar->height == 720)
            VAR_11 = 1280;
    }
    if (!VAR_11)
        VAR_11 = (VAR_7->codecpar->width+15)/16*16;

    FUNC_6(VAR_10, 4, 0x3203);
    FUNC_2(VAR_10, VAR_11);

    FUNC_6(VAR_10, 4, 0x3202);
    FUNC_2(VAR_10, VAR_12>>VAR_9->interlaced);

    if (VAR_6->oformat == &VAR_5) {

        FUNC_6(VAR_10, 4, 0x3216);
        FUNC_2(VAR_10, 0);


        FUNC_6(VAR_10, 4, 0x3213);
        FUNC_2(VAR_10, 0);


        FUNC_6(VAR_10, 4, 0x3214);
        FUNC_2(VAR_10, 0);
    }


    FUNC_6(VAR_10, 4, 0x3205);
    FUNC_2(VAR_10, VAR_11);


    FUNC_6(VAR_10, 4, 0x3204);
    FUNC_2(VAR_10, VAR_7->codecpar->height>>VAR_9->interlaced);


    FUNC_6(VAR_10, 4, 0x3206);
    FUNC_2(VAR_10, 0);


    FUNC_6(VAR_10, 4, 0x3207);
    FUNC_2(VAR_10, 0);

    FUNC_6(VAR_10, 4, 0x3209);
    FUNC_2(VAR_10, VAR_11);

    if (VAR_7->codecpar->height == 608)
        VAR_13 = 576;
    else if (VAR_7->codecpar->height == 512)
        VAR_13 = 486;
    else
        VAR_13 = VAR_7->codecpar->height;

    FUNC_6(VAR_10, 4, 0x3208);
    FUNC_2(VAR_10, VAR_13>>VAR_9->interlaced);


    FUNC_6(VAR_10, 4, 0x320A);
    FUNC_2(VAR_10, 0);


    FUNC_6(VAR_10, 4, 0x320B);
    FUNC_2(VAR_10, (VAR_7->codecpar->height - VAR_13)>>VAR_9->interlaced);

    if (VAR_9->interlaced) {

        FUNC_6(VAR_10, 4, 0x3217);
        FUNC_2(VAR_10, -((VAR_7->codecpar->height - VAR_13)&1));
    }


    FUNC_6(VAR_10, 4, 0x3301);
    FUNC_2(VAR_10, VAR_9->component_depth);


    FUNC_6(VAR_10, 4, 0x3302);
    FUNC_2(VAR_10, VAR_9->h_chroma_sub_sample);


    FUNC_6(VAR_10, 4, 0x3308);
    FUNC_2(VAR_10, VAR_9->v_chroma_sub_sample);


    FUNC_6(VAR_10, 1, 0x3303);
    FUNC_0(VAR_10, VAR_9->color_siting);


    FUNC_6(VAR_10, 2, 0x3307);
    FUNC_1(VAR_10, 0);

    if (VAR_7->codecpar->color_range != VAR_1) {
        int VAR_18 = 0,
            VAR_19 = (1<<VAR_9->component_depth) - 1,
            VAR_20 = (1<<VAR_9->component_depth) - 1;
        if (VAR_7->codecpar->color_range == VAR_0) {
            VAR_18 = 1 << (VAR_9->component_depth - 4);
            VAR_19 = 235 << (VAR_9->component_depth - 8);
            VAR_20 = (14 << (VAR_9->component_depth - 4)) + 1;
        }
        FUNC_6(VAR_10, 4, 0x3304);
        FUNC_2(VAR_10, VAR_18);
        FUNC_6(VAR_10, 4, 0x3305);
        FUNC_2(VAR_10, VAR_19);
        FUNC_6(VAR_10, 4, 0x3306);
        FUNC_2(VAR_10, VAR_20);
    }

    if (VAR_9->signal_standard) {
        FUNC_6(VAR_10, 1, 0x3215);
        FUNC_0(VAR_10, VAR_9->signal_standard);
    }


    FUNC_6(VAR_10, 1, 0x320C);
    FUNC_0(VAR_10, VAR_9->interlaced);


    switch (VAR_7->codecpar->height) {
    case 576: VAR_14 = 23; VAR_15 = VAR_7->codecpar->codec_id == VAR_3 ? 335 : 336; break;
    case 608: VAR_14 = 7; VAR_15 = 320; break;
    case 480: VAR_14 = 20; VAR_15 = VAR_7->codecpar->codec_id == VAR_3 ? 285 : 283; break;
    case 512: VAR_14 = 7; VAR_15 = 270; break;
    case 720: VAR_14 = 26; VAR_15 = 0; break;
    case 1080: VAR_14 = 21; VAR_15 = 584; break;
    default: VAR_14 = 0; VAR_15 = 0; break;
    }

    if (!VAR_9->interlaced && VAR_15) {
        VAR_15 = 0;
        VAR_14 *= 2;
    }


    FUNC_6(VAR_10, 16, 0x320D);
    FUNC_2(VAR_10, 2);
    FUNC_2(VAR_10, 4);
    FUNC_2(VAR_10, VAR_14);
    FUNC_2(VAR_10, VAR_15);

    FUNC_6(VAR_10, 8, 0x320E);
    FUNC_2(VAR_10, VAR_9->aspect_ratio.num);
    FUNC_2(VAR_10, VAR_9->aspect_ratio.den);


    if (VAR_16[0]) {
        FUNC_6(VAR_10, 16, 0x3210);
        FUNC_3(VAR_10, VAR_16, 16);
    };

    FUNC_6(VAR_10, 16, 0x3201);
    FUNC_3(VAR_10, *VAR_9->codec_ul, 16);

    if (VAR_9->interlaced && VAR_9->field_dominance) {
        FUNC_6(VAR_10, 1, 0x3212);
        FUNC_0(VAR_10, VAR_9->field_dominance);
    }

    if (VAR_7->codecpar->codec_id == VAR_4 && !VAR_9->avc_intra) {

        FUNC_6(VAR_10, 8 + 16, 0x8100);
        FUNC_7(VAR_10, 1);
        FUNC_8(VAR_10, VAR_2, 0);
    }

    return VAR_17;
}
