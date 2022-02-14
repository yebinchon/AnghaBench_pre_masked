
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int width; int height; scalar_t__ codec_id; int bits_per_coded_sample; } ;
struct TYPE_14__ {TYPE_1__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {size_t stream_index; int size; scalar_t__ data; } ;
struct TYPE_12__ {int width; int height; int size; int bits; int offset; } ;
struct TYPE_11__ {scalar_t__ current_image; scalar_t__ nb_images; TYPE_3__* images; } ;
struct TYPE_10__ {TYPE_6__* codecpar; } ;
typedef TYPE_2__ IcoMuxContext ;
typedef TYPE_3__ IcoImage ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    IcoMuxContext *VAR_6 = VAR_4->priv_data;
    IcoImage *VAR_7;
    AVIOContext *VAR_8 = VAR_4->pb;
    AVCodecParameters *VAR_9 = VAR_4->streams[VAR_5->stream_index]->codecpar;
    int VAR_10;

    if (VAR_6->current_image >= VAR_6->nb_images) {
        FUNC_3(VAR_4, VAR_1, "ICO already contains %d images\n", VAR_6->current_image);
        return FUNC_0(VAR_3);
    }

    VAR_7 = &VAR_6->images[VAR_6->current_image++];

    VAR_7->offset = FUNC_4(VAR_8);
    VAR_7->width = (VAR_9->width == 256) ? 0 : VAR_9->width;
    VAR_7->height = (VAR_9->height == 256) ? 0 : VAR_9->height;

    if (VAR_9->codec_id == VAR_0) {
        VAR_7->bits = VAR_9->bits_per_coded_sample;
        VAR_7->size = VAR_5->size;

        FUNC_7(VAR_8, VAR_5->data, VAR_5->size);
    } else {
        if (FUNC_2(VAR_5->data + 14) != 40) {
            FUNC_3(VAR_4, VAR_1, "Invalid BMP\n");
            return FUNC_0(VAR_2);
        }

        VAR_7->bits = FUNC_1(VAR_5->data + 28);
        VAR_7->size = VAR_5->size - 14 + VAR_9->height * (VAR_9->width + 7) / 8;

        FUNC_7(VAR_8, VAR_5->data + 14, 8);
        FUNC_6(VAR_8, FUNC_2(VAR_5->data + 22) * 2);
        FUNC_7(VAR_8, VAR_5->data + 26, VAR_5->size - 26);

        for (VAR_10 = 0; VAR_10 < VAR_9->height * (VAR_9->width + 7) / 8; ++VAR_10)
            FUNC_5(VAR_8, 0x00);
    }

    return 0;
}
