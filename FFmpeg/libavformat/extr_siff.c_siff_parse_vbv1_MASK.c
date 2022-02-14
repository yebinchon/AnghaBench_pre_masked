
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nb_frames; int duration; TYPE_1__* codecpar; } ;
struct TYPE_9__ {int frames; int bits; int rate; int block_align; int has_video; int has_audio; int curstrm; scalar_t__ cur_frame; } ;
struct TYPE_8__ {int width; int height; int format; int codec_tag; int codec_id; int codec_type; } ;
typedef TYPE_2__ SIFFContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char,char,char,char) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,int ,char*) ;
 TYPE_3__* FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_3__*,int,int,int) ;
 int FUNC_9 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_7, SIFFContext *VAR_8, AVIOContext *VAR_9)
{
    AVStream *VAR_10;
    int VAR_11, VAR_12;

    if (FUNC_6(VAR_9) != VAR_6) {
        FUNC_2(VAR_7, VAR_3, "Header chunk is missing\n");
        return VAR_0;
    }
    if (FUNC_4(VAR_9) != 32) {
        FUNC_2(VAR_7, VAR_3, "Header chunk size is incorrect\n");
        return VAR_0;
    }
    if (FUNC_5(VAR_9) != 1) {
        FUNC_2(VAR_7, VAR_3, "Incorrect header version\n");
        return VAR_0;
    }
    VAR_11 = FUNC_5(VAR_9);
    VAR_12 = FUNC_5(VAR_9);
    FUNC_7(VAR_9, 4);
    VAR_8->frames = FUNC_5(VAR_9);
    if (!VAR_8->frames) {
        FUNC_2(VAR_7, VAR_3, "File contains no frames ???\n");
        return VAR_0;
    }
    VAR_8->bits = FUNC_5(VAR_9);
    VAR_8->rate = FUNC_5(VAR_9);
    VAR_8->block_align = VAR_8->rate * (VAR_8->bits >> 3);

    FUNC_7(VAR_9, 16);

    VAR_10 = FUNC_3(VAR_7, ((void*)0));
    if (!VAR_10)
        return FUNC_0(VAR_5);
    VAR_10->codecpar->codec_type = VAR_1;
    VAR_10->codecpar->codec_id = VAR_2;
    VAR_10->codecpar->codec_tag = FUNC_1('V', 'B', 'V', '1');
    VAR_10->codecpar->width = VAR_11;
    VAR_10->codecpar->height = VAR_12;
    VAR_10->codecpar->format = VAR_4;
    VAR_10->nb_frames =
    VAR_10->duration = VAR_8->frames;
    FUNC_8(VAR_10, 16, 1, 12);

    VAR_8->cur_frame = 0;
    VAR_8->has_video = 1;
    VAR_8->has_audio = !!VAR_8->rate;
    VAR_8->curstrm = -1;
    if (VAR_8->has_audio)
        return FUNC_9(VAR_7, VAR_8);
    return 0;
}
