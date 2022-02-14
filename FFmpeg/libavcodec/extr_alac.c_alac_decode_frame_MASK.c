
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AlacRawDataBlockType { ____Placeholder_AlacRawDataBlockType } AlacRawDataBlockType ;
struct TYPE_11__ {int channels; scalar_t__ nb_samples; int gb; } ;
struct TYPE_10__ {TYPE_3__* priv_data; } ;
struct TYPE_9__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ ALACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int,int) ;
 int** VAR_7 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_8, void *VAR_9,
                             int *VAR_10, AVPacket *VAR_11)
{
    ALACContext *VAR_12 = VAR_8->priv_data;
    AVFrame *VAR_13 = VAR_9;
    enum AlacRawDataBlockType VAR_14;
    int VAR_15;
    int VAR_16, VAR_17, VAR_18;

    if ((VAR_17 = FUNC_6(&VAR_12->gb, VAR_11->data, VAR_11->size)) < 0)
        return VAR_17;

    VAR_18 = 0;
    VAR_12->nb_samples = 0;
    VAR_16 = 0;
    while (FUNC_5(&VAR_12->gb) >= 3) {
        VAR_14 = FUNC_3(&VAR_12->gb, 3);
        if (VAR_14 == VAR_5) {
            VAR_18 = 1;
            break;
        }
        if (VAR_14 > VAR_4 && VAR_14 != VAR_6) {
            FUNC_1(VAR_8, "Syntax element %d", VAR_14);
            return VAR_1;
        }

        VAR_15 = (VAR_14 == VAR_4) ? 2 : 1;
        if (VAR_16 + VAR_15 > VAR_12->channels ||
            VAR_7[VAR_12->channels - 1][VAR_16] + VAR_15 > VAR_12->channels) {
            FUNC_0(VAR_8, VAR_2, "invalid element channel count\n");
            return VAR_0;
        }

        VAR_17 = FUNC_2(VAR_8, VAR_13,
                             VAR_7[VAR_12->channels - 1][VAR_16],
                             VAR_15);
        if (VAR_17 < 0 && FUNC_5(&VAR_12->gb))
            return VAR_17;

        VAR_16 += VAR_15;
    }
    if (!VAR_18) {
        FUNC_0(VAR_8, VAR_2, "no end tag found. incomplete packet.\n");
        return VAR_0;
    }

    if (VAR_11->size * 8 - FUNC_4(&VAR_12->gb) > 8) {
        FUNC_0(VAR_8, VAR_2, "Error : %d bits left\n",
               VAR_11->size * 8 - FUNC_4(&VAR_12->gb));
    }

    if (VAR_12->channels == VAR_16 && VAR_12->nb_samples)
        *VAR_10 = 1;
    else
        FUNC_0(VAR_8, VAR_3, "Failed to decode all channels\n");

    return VAR_11->size;
}
