
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_13__ {int standard; int per_frame; int tuner_fd; int video_fd; int height; int width; void* framerate; } ;
typedef TYPE_2__ VideoData ;
struct TYPE_16__ {int url; TYPE_2__* priv_data; } ;
struct TYPE_15__ {int den; int num; } ;
struct TYPE_14__ {TYPE_4__ avg_frame_rate; TYPE_1__* codecpar; } ;
struct TYPE_12__ {int height; int width; int codec_id; int format; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,void*) ;
 void* FUNC_3 (char*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (TYPE_3__*,int,int,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int,int *,int *,int,double) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_9)
{
    VideoData *VAR_10 = VAR_9->priv_data;
    AVStream *VAR_11;
    AVRational VAR_12;
    int VAR_13 = 0;

    if (!VAR_10->framerate)
        switch (VAR_10->standard) {
        case 129: VAR_10->framerate = FUNC_3("pal"); break;
        case 130: VAR_10->framerate = FUNC_3("ntsc"); break;
        case 128: VAR_10->framerate = FUNC_3("25"); break;
        default:
            FUNC_1(VAR_9, VAR_2, "Unknown standard.\n");
            VAR_13 = FUNC_0(VAR_4);
            goto out;
        }
    if ((VAR_13 = FUNC_2(&VAR_12, VAR_10->framerate)) < 0) {
        FUNC_1(VAR_9, VAR_2, "Could not parse framerate '%s'.\n", VAR_10->framerate);
        goto out;
    }

    VAR_11 = FUNC_4(VAR_9, ((void*)0));
    if (!VAR_11) {
        VAR_13 = FUNC_0(VAR_6);
        goto out;
    }
    FUNC_5(VAR_11, 64, 1, 1000000);

    VAR_10->per_frame = ((uint64_t)1000000 * VAR_12.den) / VAR_12.num;

    VAR_11->codecpar->codec_type = VAR_0;
    VAR_11->codecpar->format = VAR_3;
    VAR_11->codecpar->codec_id = VAR_1;
    VAR_11->codecpar->width = VAR_10->width;
    VAR_11->codecpar->height = VAR_10->height;
    VAR_11->avg_frame_rate = VAR_12;

    if (FUNC_6(VAR_9->url, VAR_10->width, VAR_10->height, VAR_10->standard,
                  &VAR_10->video_fd, &VAR_10->tuner_fd, -1, 0.0) < 0) {
        VAR_13 = FUNC_0(VAR_5);
        goto out;
    }

    VAR_8 = 0;
    VAR_7 = 0;

out:
    return VAR_13;
}
