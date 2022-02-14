
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int bits; int table; } ;
struct TYPE_8__ {int buffer; } ;
struct TYPE_7__ {long long output_size; int* output; TYPE_5__ vlc; int padded_output_size; TYPE_4__ gbyte; int gb; } ;
struct TYPE_6__ {long long width; long long height; TYPE_2__* priv_data; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AGMContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int**,int *,long long) ;
 int FUNC_2 (int*,TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 long long FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ,int) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_2, int VAR_3, int VAR_4)
{
    AGMContext *VAR_5 = VAR_2->priv_data;
    GetBitContext *VAR_6 = &VAR_5->gb;
    uint8_t VAR_7[256];
    int VAR_8, VAR_9, VAR_10;

    if ((VAR_8 = FUNC_8(VAR_6, VAR_5->gbyte.buffer,
                              FUNC_3(&VAR_5->gbyte))) < 0)
        return VAR_8;

    VAR_5->output_size = FUNC_6(VAR_6, 32);

    if (VAR_5->output_size > VAR_2->width * VAR_2->height * 9LL + 10000)
        return VAR_0;

    FUNC_1(&VAR_5->output, &VAR_5->padded_output_size, VAR_5->output_size);
    if (!VAR_5->output)
        return FUNC_0(VAR_1);

    VAR_9 = FUNC_4(VAR_6, 1);
    VAR_10 = 4 + FUNC_4(VAR_6, 1);
    if (VAR_9) {
        int VAR_11[8] = { 0 };
        int VAR_12 = FUNC_4(VAR_6, 3) + 1;

        for (int VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
            VAR_11[VAR_13] = FUNC_4(VAR_6, VAR_10);

        for (int VAR_14 = 0; VAR_14 < 256; VAR_14++) {
            int VAR_15 = FUNC_4(VAR_6, 3);
            VAR_7[VAR_14] = VAR_11[VAR_15];
        }
    } else {
        for (int VAR_16 = 0; VAR_16 < 256; VAR_16++)
            VAR_7[VAR_16] = FUNC_4(VAR_6, VAR_10);
    }

    if ((VAR_8 = FUNC_2(VAR_7, &VAR_5->vlc)) < 0)
        return VAR_8;

    VAR_9 = 0;
    while (FUNC_5(VAR_6) > 0 && VAR_9 < VAR_5->output_size) {
        int VAR_17 = FUNC_7(VAR_6, VAR_5->vlc.table, VAR_5->vlc.bits, 3);
        if (VAR_17 < 0)
            return VAR_0;
        VAR_5->output[VAR_9++] = VAR_17;
    }

    return 0;
}
