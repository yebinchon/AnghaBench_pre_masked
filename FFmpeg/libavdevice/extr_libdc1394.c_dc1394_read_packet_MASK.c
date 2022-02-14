
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct dc1394_data {int current_frame; int frame_rate; int stream_index; TYPE_5__* frame; int camera; } ;
struct TYPE_10__ {int image_bytes; scalar_t__ image; } ;
struct TYPE_9__ {struct dc1394_data* priv_data; } ;
struct TYPE_8__ {int size; int pts; int stream_index; int flags; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int FUNC_1 (int ,int ,TYPE_5__**) ;
 int FUNC_2 (int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    struct dc1394_data *VAR_7 = VAR_5->priv_data;
    int VAR_8;


    if (VAR_7->current_frame++) {
        if (FUNC_2(VAR_7->camera, VAR_7->frame) != VAR_4)
            FUNC_0(VAR_5, VAR_1, "failed to release %d frame\n", VAR_7->current_frame);
    }

    VAR_8 = FUNC_1(VAR_7->camera, VAR_3, &VAR_7->frame);
    if (VAR_8 == VAR_4) {
        VAR_6->data = (uint8_t *)VAR_7->frame->image;
        VAR_6->size = VAR_7->frame->image_bytes;
        VAR_6->pts = VAR_7->current_frame * 1000000 / VAR_7->frame_rate;
        VAR_6->flags |= VAR_2;
        VAR_6->stream_index = VAR_7->stream_index;
    } else {
        FUNC_0(VAR_5, VAR_1, "DMA capture failed\n");
        return VAR_0;
    }

    return VAR_6->size;
}
