
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_21__ {TYPE_1__* priv_data; } ;
struct TYPE_20__ {int nb_samples; } ;
struct TYPE_19__ {int size; int * data; } ;
struct TYPE_18__ {int const* buffer; } ;
struct TYPE_17__ {scalar_t__ is_av500; } ;
typedef TYPE_1__ On2AVCContext ;
typedef TYPE_2__ GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int const*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_1__*,int const*,int,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext * VAR_3, void *VAR_4,
                               int *VAR_5, AVPacket *VAR_6)
{
    AVFrame *VAR_7 = VAR_4;
    const uint8_t *VAR_8 = VAR_6->data;
    int VAR_9 = VAR_6->size;
    On2AVCContext *VAR_10 = VAR_3->priv_data;
    GetByteContext VAR_11;
    int VAR_12 = 0, VAR_13, VAR_14;
    int VAR_15;

    if (VAR_10->is_av500) {

        VAR_7->nb_samples = VAR_2;
        if ((VAR_15 = FUNC_5(VAR_3, VAR_7, 0)) < 0)
            return VAR_15;

        if ((VAR_15 = FUNC_6(VAR_10, VAR_8, VAR_9, VAR_7, 0)) < 0)
            return VAR_15;
    } else {
        FUNC_3(&VAR_11, VAR_8, VAR_9);
        while (FUNC_1(&VAR_11) > 2) {
            VAR_13 = FUNC_2(&VAR_11);
            if (!VAR_13 || VAR_13 > FUNC_1(&VAR_11)) {
                FUNC_0(VAR_3, VAR_1, "Invalid subframe size %d\n",
                       VAR_13);
                return VAR_0;
            }
            VAR_12++;
            FUNC_4(&VAR_11, VAR_13);
        }
        if (!VAR_12) {
            FUNC_0(VAR_3, VAR_1, "No subframes present\n");
            return VAR_0;
        }


        VAR_7->nb_samples = VAR_2 * VAR_12;
        if ((VAR_15 = FUNC_5(VAR_3, VAR_7, 0)) < 0)
            return VAR_15;

        VAR_14 = 0;
        FUNC_3(&VAR_11, VAR_8, VAR_9);
        while (FUNC_1(&VAR_11) > 2) {
            VAR_13 = FUNC_2(&VAR_11);
            if ((VAR_15 = FUNC_6(VAR_10, VAR_11.buffer, VAR_13,
                                              VAR_7, VAR_14)) < 0)
                return VAR_15;
            VAR_14 += VAR_2;
            FUNC_4(&VAR_11, VAR_13);
        }
    }

    *VAR_5 = 1;

    return VAR_9;
}
