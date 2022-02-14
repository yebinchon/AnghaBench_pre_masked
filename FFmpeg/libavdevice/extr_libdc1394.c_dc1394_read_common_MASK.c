
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct dc1394_frame_rate {scalar_t__ frame_rate; } ;
struct dc1394_frame_format {int width; int pix_fmt; int height; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_13__ {scalar_t__ frame_rate; int size; int stream_index; scalar_t__ current_frame; int framerate; int video_size; int pixel_format; } ;
typedef TYPE_2__ dc1394_data ;
struct TYPE_16__ {TYPE_2__* priv_data; } ;
struct TYPE_15__ {scalar_t__ num; int den; } ;
struct TYPE_14__ {TYPE_1__* codecpar; int index; TYPE_4__ avg_frame_rate; } ;
struct TYPE_12__ {int width; int height; int format; void* bit_rate; int codec_id; int codec_type; } ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (TYPE_5__*,int ,char*,int ,...) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int*,int*,int ) ;
 void* FUNC_7 (int,scalar_t__,int) ;
 TYPE_3__* FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_3__*,int,int,int) ;
 struct dc1394_frame_format* VAR_6 ;
 struct dc1394_frame_rate* VAR_7 ;

__attribute__((used)) static inline int FUNC_10(AVFormatContext *VAR_8,
                                     const struct dc1394_frame_format **VAR_9, const struct dc1394_frame_rate **VAR_10)
{
    dc1394_data* VAR_11 = VAR_8->priv_data;
    AVStream* VAR_12;
    const struct dc1394_frame_format *VAR_13;
    const struct dc1394_frame_rate *VAR_14;
    enum AVPixelFormat VAR_15;
    int VAR_16, VAR_17;
    AVRational VAR_18;
    int VAR_19 = 0;

    if ((VAR_15 = FUNC_1(VAR_11->pixel_format)) == VAR_3) {
        FUNC_4(VAR_8, VAR_2, "No such pixel format: %s.\n", VAR_11->pixel_format);
        VAR_19 = FUNC_0(VAR_4);
        goto out;
    }

    if ((VAR_19 = FUNC_6(&VAR_16, &VAR_17, VAR_11->video_size)) < 0) {
        FUNC_4(VAR_8, VAR_2, "Could not parse video size '%s'.\n", VAR_11->video_size);
        goto out;
    }
    if ((VAR_19 = FUNC_5(&VAR_18, VAR_11->framerate)) < 0) {
        FUNC_4(VAR_8, VAR_2, "Could not parse framerate '%s'.\n", VAR_11->framerate);
        goto out;
    }
    VAR_11->frame_rate = FUNC_7(1000, VAR_18.num, VAR_18.den);

    for (VAR_13 = VAR_6; VAR_13->width; VAR_13++)
         if (VAR_13->pix_fmt == VAR_15 && VAR_13->width == VAR_16 && VAR_13->height == VAR_17)
             break;

    for (VAR_14 = VAR_7; VAR_14->frame_rate; VAR_14++)
         if (VAR_14->frame_rate == VAR_11->frame_rate)
             break;

    if (!VAR_14->frame_rate || !VAR_13->width) {
        FUNC_4(VAR_8, VAR_2, "Can't find matching camera format for %s, %dx%d@%d:1000fps\n", FUNC_2(VAR_15),
                                                                                                VAR_16, VAR_17, VAR_11->frame_rate);
        VAR_19 = FUNC_0(VAR_4);
        goto out;
    }


    VAR_12 = FUNC_8(VAR_8, ((void*)0));
    if (!VAR_12) {
        VAR_19 = FUNC_0(VAR_5);
        goto out;
    }
    FUNC_9(VAR_12, 64, 1, 1000);
    VAR_12->codecpar->codec_type = VAR_0;
    VAR_12->codecpar->codec_id = VAR_1;
    VAR_12->codecpar->width = VAR_13->width;
    VAR_12->codecpar->height = VAR_13->height;
    VAR_12->codecpar->format = VAR_13->pix_fmt;
    VAR_12->avg_frame_rate = VAR_18;

    VAR_11->current_frame = 0;
    VAR_11->stream_index = VAR_12->index;
    VAR_11->size = FUNC_3(VAR_13->pix_fmt,
                                            VAR_13->width, VAR_13->height, 1);

    VAR_12->codecpar->bit_rate = FUNC_7(VAR_11->size * 8,
                                         VAR_14->frame_rate, 1000);
    *VAR_10 = VAR_14;
    *VAR_9 = VAR_13;
out:
    return VAR_19;
}
