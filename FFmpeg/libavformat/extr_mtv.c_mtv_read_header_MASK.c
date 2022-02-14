
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int need_parsing; TYPE_1__* codecpar; } ;
struct TYPE_12__ {int audio_br; int img_bpp; int img_width; int img_height; int img_segment_size; unsigned int full_segment_size; int video_fps; void* img_colorfmt; void* audio_identifier; void* segments; void* file_size; } ;
struct TYPE_11__ {int width; int height; int extradata_size; int bit_rate; int codec_id; int codec_type; int extradata; int format; } ;
typedef TYPE_2__ MTVDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_18)
{
    MTVDemuxContext *VAR_19 = VAR_18->priv_data;
    AVIOContext *VAR_20 = VAR_18->pb;
    AVStream *VAR_21;
    unsigned int VAR_22;

    FUNC_9(VAR_20, 3);
    VAR_19->file_size = FUNC_7(VAR_20);
    VAR_19->segments = FUNC_7(VAR_20);
    FUNC_9(VAR_20, 32);
    VAR_19->audio_identifier = FUNC_6(VAR_20);
    VAR_19->audio_br = FUNC_5(VAR_20);
    VAR_19->img_colorfmt = FUNC_6(VAR_20);
    VAR_19->img_bpp = FUNC_4(VAR_20);
    VAR_19->img_width = FUNC_5(VAR_20);
    VAR_19->img_height = FUNC_5(VAR_20);
    VAR_19->img_segment_size = FUNC_5(VAR_20);




    if (VAR_19->img_bpp != VAR_16) {
        FUNC_1 (VAR_18, VAR_8, "Header claims %dbpp (!= 16). Ignoring\n",
                VAR_19->img_bpp);
        VAR_19->img_bpp = VAR_16;
    }



    if (!VAR_19->img_width && VAR_19->img_height > 0 && VAR_19->img_bpp >= 8)
        VAR_19->img_width=VAR_19->img_segment_size / (VAR_19->img_bpp>>3)
                        / VAR_19->img_height;

    if (!VAR_19->img_height && VAR_19->img_width > 0 && VAR_19->img_bpp >= 8)
        VAR_19->img_height=VAR_19->img_segment_size / (VAR_19->img_bpp>>3)
                        / VAR_19->img_width;

    if(!VAR_19->img_height || !VAR_19->img_width || !VAR_19->img_segment_size){
        FUNC_1(VAR_18, VAR_7, "width or height or segment_size is invalid and I cannot calculate them from other information\n");
        return VAR_0;
    }

    FUNC_9(VAR_20, 4);
    VAR_22 = FUNC_5(VAR_20);

    if (VAR_22 == 0) {
        FUNC_10(VAR_18, "MTV files without audio");
        return VAR_1;
    }

    VAR_19->full_segment_size =
        VAR_22 * (VAR_13 + VAR_12) +
        VAR_19->img_segment_size;
    VAR_19->video_fps = (VAR_19->audio_br / 4) / VAR_22;







    VAR_21 = FUNC_3(VAR_18, ((void*)0));
    if(!VAR_21)
        return FUNC_0(VAR_11);

    FUNC_11(VAR_21, 64, 1, VAR_19->video_fps);
    VAR_21->codecpar->codec_type = VAR_3;
    VAR_21->codecpar->codec_id = VAR_6;
    VAR_21->codecpar->format = VAR_9;
    VAR_21->codecpar->width = VAR_19->img_width;
    VAR_21->codecpar->height = VAR_19->img_height;
    VAR_21->codecpar->extradata = FUNC_2("BottomUp");
    if (!VAR_21->codecpar->extradata)
        return FUNC_0(VAR_11);
    VAR_21->codecpar->extradata_size = 9;



    VAR_21 = FUNC_3(VAR_18, ((void*)0));
    if(!VAR_21)
        return FUNC_0(VAR_11);

    FUNC_11(VAR_21, 64, 1, VAR_14);
    VAR_21->codecpar->codec_type = VAR_2;
    VAR_21->codecpar->codec_id = VAR_5;
    VAR_21->codecpar->bit_rate = VAR_19->audio_br;
    VAR_21->need_parsing = VAR_4;



    if(FUNC_8(VAR_20, VAR_15, VAR_17) != VAR_15)
        return FUNC_0(VAR_10);

    return 0;

}
