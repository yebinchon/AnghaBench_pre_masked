
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
struct TYPE_10__ {scalar_t__* data; int nb_samples; } ;
struct TYPE_9__ {int size; int * data; } ;
typedef int DssSpContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int) ;
 int FUNC_1 (int *,int *,int const*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_4, void *VAR_5,
                               int *VAR_6, AVPacket *VAR_7)
{
    DssSpContext *VAR_8 = VAR_4->priv_data;
    AVFrame *VAR_9 = VAR_5;
    const uint8_t *VAR_10 = VAR_7->data;
    int VAR_11 = VAR_7->size;

    int16_t *VAR_12;
    int VAR_13;

    if (VAR_11 < VAR_2) {
        if (VAR_11)
            FUNC_0(VAR_4, VAR_1,
                   "Expected %d bytes, got %d - skipping packet.\n",
                   VAR_2, VAR_11);
        *VAR_6 = 0;
        return VAR_0;
    }

    VAR_9->nb_samples = VAR_3;
    if ((VAR_13 = FUNC_2(VAR_4, VAR_9, 0)) < 0)
        return VAR_13;

    VAR_12 = (int16_t *)VAR_9->data[0];

    FUNC_1(VAR_8, VAR_12, VAR_10);

    *VAR_6 = 1;

    return VAR_2;
}
