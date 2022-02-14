
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {int nb_samples; int** data; } ;
struct TYPE_12__ {int size; int data; } ;
struct TYPE_11__ {size_t dict_entry; int sample; int delta_compression; TYPE_1__* dict; } ;
struct TYPE_10__ {size_t r; size_t l; } ;
typedef TYPE_2__ HCOMContext ;
typedef int GetBitContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, void *VAR_3,
                       int *VAR_4, AVPacket *VAR_5)
{
    HCOMContext *VAR_6 = VAR_2->priv_data;
    AVFrame *VAR_7 = VAR_3;
    GetBitContext VAR_8;
    int VAR_9, VAR_10 = 0;

    if (VAR_5->size > VAR_1)
        return VAR_0;

    VAR_7->nb_samples = VAR_5->size * 8;
    if ((VAR_9 = FUNC_0(VAR_2, VAR_7, 0)) < 0)
        return VAR_9;

    if ((VAR_9 = FUNC_3(&VAR_8, VAR_5->data, VAR_5->size)) < 0)
        return VAR_9;

    while (FUNC_2(&VAR_8) > 0) {
        if (FUNC_1(&VAR_8))
            VAR_6->dict_entry = VAR_6->dict[VAR_6->dict_entry].r;
        else
            VAR_6->dict_entry = VAR_6->dict[VAR_6->dict_entry].l;

        if (VAR_6->dict[VAR_6->dict_entry].l < 0) {
            int16_t VAR_11;

            VAR_11 = VAR_6->dict[VAR_6->dict_entry].r;

            if (!VAR_6->delta_compression)
                VAR_6->sample = 0;
            VAR_6->sample = (VAR_6->sample + VAR_11) & 0xFF;

            VAR_7->data[0][VAR_10++] = VAR_6->sample;

            VAR_6->dict_entry = 0;
        }
    }

    VAR_7->nb_samples = VAR_10;

    *VAR_4 = 1;

    return VAR_5->size;
}
