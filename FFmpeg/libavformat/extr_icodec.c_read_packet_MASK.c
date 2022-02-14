
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {TYPE_4__** streams; int * pb; TYPE_3__* priv_data; } ;
struct TYPE_16__ {int flags; int stream_index; int size; int * data; } ;
struct TYPE_15__ {TYPE_1__* codecpar; } ;
struct TYPE_14__ {size_t current_image; size_t nb_images; TYPE_2__* images; } ;
struct TYPE_13__ {int size; int nb_pal; int offset; } ;
struct TYPE_12__ {scalar_t__ codec_id; int bits_per_coded_sample; } ;
typedef TYPE_2__ IcoImage ;
typedef TYPE_3__ IcoDemuxContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int FUNC_3 (int *,TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int **,char) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int **,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    IcoDemuxContext *VAR_7 = VAR_5->priv_data;
    IcoImage *VAR_8;
    AVIOContext *VAR_9 = VAR_5->pb;
    AVStream *VAR_10 = VAR_5->streams[0];
    int VAR_11;

    if (VAR_7->current_image >= VAR_7->nb_images)
        return VAR_0;

    VAR_8 = &VAR_7->images[VAR_7->current_image];

    if ((VAR_11 = FUNC_7(VAR_9, VAR_8->offset, VAR_4)) < 0)
        return VAR_11;

    if (VAR_5->streams[VAR_7->current_image]->codecpar->codec_id == VAR_2) {
        if ((VAR_11 = FUNC_3(VAR_9, VAR_6, VAR_8->size)) < 0)
            return VAR_11;
    } else {
        uint8_t *VAR_12;
        if ((VAR_11 = FUNC_4(VAR_6, 14 + VAR_8->size)) < 0)
            return VAR_11;
        VAR_12 = VAR_6->data;


        FUNC_8(&VAR_12, 'B');
        FUNC_8(&VAR_12, 'M');
        FUNC_10(&VAR_12, VAR_6->size);
        FUNC_9(&VAR_12, 0);
        FUNC_9(&VAR_12, 0);
        FUNC_10(&VAR_12, 0);

        if ((VAR_11 = FUNC_6(VAR_9, VAR_12, VAR_8->size)) != VAR_8->size) {
            FUNC_5(VAR_6);
            return VAR_11 < 0 ? VAR_11 : VAR_1;
        }

        VAR_10->codecpar->bits_per_coded_sample = FUNC_0(VAR_12 + 14);

        if (FUNC_1(VAR_12 + 32))
            VAR_8->nb_pal = FUNC_1(VAR_12 + 32);

        if (VAR_10->codecpar->bits_per_coded_sample <= 8 && !VAR_8->nb_pal) {
            VAR_8->nb_pal = 1 << VAR_10->codecpar->bits_per_coded_sample;
            FUNC_2(VAR_12 + 32, VAR_8->nb_pal);
        }

        FUNC_2(VAR_12 - 4, 14 + 40 + VAR_8->nb_pal * 4);
        FUNC_2(VAR_12 + 8, FUNC_1(VAR_12 + 8) / 2);
    }

    VAR_6->stream_index = VAR_7->current_image++;
    VAR_6->flags |= VAR_3;

    return 0;
}
