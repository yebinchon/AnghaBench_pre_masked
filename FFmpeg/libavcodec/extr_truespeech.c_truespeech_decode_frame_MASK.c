
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_11__ {int * priv_data; } ;
struct TYPE_10__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_9__ {int size; int * data; } ;
typedef int TSContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_1, void *VAR_2,
                                   int *VAR_3, AVPacket *VAR_4)
{
    AVFrame *VAR_5 = VAR_2;
    const uint8_t *VAR_6 = VAR_4->data;
    int VAR_7 = VAR_4->size;
    TSContext *VAR_8 = VAR_1->priv_data;

    int VAR_9, VAR_10;
    int16_t *VAR_11;
    int VAR_12, VAR_13;

    VAR_12 = VAR_7 / 32;

    if (!VAR_12) {
        FUNC_0(VAR_1, VAR_0,
               "Too small input buffer (%d bytes), need at least 32 bytes\n", VAR_7);
        return -1;
    }


    VAR_5->nb_samples = VAR_12 * 240;
    if ((VAR_13 = FUNC_1(VAR_1, VAR_5, 0)) < 0)
        return VAR_13;
    VAR_11 = (int16_t *)VAR_5->data[0];

    FUNC_2(VAR_11, 0, VAR_12 * 240 * sizeof(*VAR_11));

    for(VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
        FUNC_7(VAR_8, VAR_6);
        VAR_6 += 32;

        FUNC_4(VAR_8);
        FUNC_5(VAR_8);

        for(VAR_9 = 0; VAR_9 < 4; VAR_9++) {
            FUNC_3(VAR_8, VAR_9);
            FUNC_6 (VAR_8, VAR_11, VAR_9);
            FUNC_10(VAR_8, VAR_11, VAR_9);
            FUNC_9 (VAR_8, VAR_11, VAR_9);
            VAR_11 += 60;
        }

        FUNC_8(VAR_8);
    }

    *VAR_3 = 1;

    return VAR_7;
}
