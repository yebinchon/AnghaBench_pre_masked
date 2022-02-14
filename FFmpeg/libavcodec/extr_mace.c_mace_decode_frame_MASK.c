
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_13__ {scalar_t__ codec_id; int channels; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int nb_samples; scalar_t__ extended_data; } ;
struct TYPE_11__ {int* data; int size; } ;
struct TYPE_10__ {int * chd; } ;
typedef TYPE_1__ MACEContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,char*,int) ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3, void *VAR_4,
                             int *VAR_5, AVPacket *VAR_6)
{
    AVFrame *VAR_7 = VAR_4;
    const uint8_t *VAR_8 = VAR_6->data;
    int VAR_9 = VAR_6->size;
    int16_t **VAR_10;
    MACEContext *VAR_11 = VAR_3->priv_data;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17 = (VAR_3->codec_id == VAR_1);

    if (VAR_9 % (VAR_3->channels << VAR_17)) {
        FUNC_0(VAR_3, VAR_2, "buffer size %d is odd\n", VAR_9);
        VAR_9 -= VAR_9 % (VAR_3->channels << VAR_17);
        if (!VAR_9)
            return VAR_0;
    }


    VAR_7->nb_samples = 3 * (VAR_9 << (1 - VAR_17)) / VAR_3->channels;
    if ((VAR_16 = FUNC_3(VAR_3, VAR_7, 0)) < 0)
        return VAR_16;
    VAR_10 = (int16_t **)VAR_7->extended_data;

    for(VAR_12 = 0; VAR_12 < VAR_3->channels; VAR_12++) {
        int16_t *VAR_18 = VAR_10[VAR_12];

        for (VAR_13=0; VAR_13 < VAR_9 / (VAR_3->channels << VAR_17); VAR_13++)
            for (VAR_14=0; VAR_14 < (1 << VAR_17); VAR_14++) {
                uint8_t VAR_19 = VAR_8[(VAR_12 << VAR_17) +
                                  (VAR_13*VAR_3->channels << VAR_17) + VAR_14];

                uint8_t VAR_20[2][3] = {{VAR_19 >> 5, (VAR_19 >> 3) & 3, VAR_19 & 7 },
                                     {VAR_19 & 7 , (VAR_19 >> 3) & 3, VAR_19 >> 5}};

                for (VAR_15=0; VAR_15 < 3; VAR_15++) {
                    if (VAR_17)
                        FUNC_1(&VAR_11->chd[VAR_12], VAR_18, VAR_20[1][VAR_15], VAR_15);
                    else
                        FUNC_2(&VAR_11->chd[VAR_12], VAR_18, VAR_20[0][VAR_15], VAR_15);

                    VAR_18 += 1 << (1-VAR_17);
                }
            }
    }

    *VAR_5 = 1;

    return VAR_9;
}
