
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_13__ {TYPE_1__* priv_data; } ;
struct TYPE_12__ {char* data; int size; } ;
struct TYPE_11__ {int color_primaries; int transfer_characteristics; int matrix_coefficients; } ;
typedef TYPE_1__ ProresMetadataContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(AVBSFContext *VAR_2, AVPacket *VAR_3)
{
    ProresMetadataContext *VAR_4 = VAR_2->priv_data;
    int VAR_5 = 0;
    int VAR_6;
    uint8_t *VAR_7;

    VAR_5 = FUNC_5(VAR_2, VAR_3);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_5 = FUNC_3(VAR_3);
    if (VAR_5 < 0)
        goto fail;

    VAR_7 = VAR_3->data;
    VAR_6 = VAR_3->size;


    if (VAR_6 < 28) {
        FUNC_2(VAR_2, VAR_1, "not enough data in prores frame\n");
        VAR_5 = VAR_0;
        goto fail;
    }

    if (FUNC_1(VAR_7 + 4) != FUNC_1("icpf")) {
        FUNC_2(VAR_2, VAR_1, "invalid frame header\n");
        VAR_5 = VAR_0;
        goto fail;
    }

    if (FUNC_0(VAR_7 + 8) < 28) {
        FUNC_2(VAR_2, VAR_1, "invalid frame header size\n");
        VAR_5 = VAR_0;
        goto fail;
    }


    if (VAR_4->color_primaries != -1)
        VAR_7[8+14] = VAR_4->color_primaries;
    if (VAR_4->transfer_characteristics != -1)
        VAR_7[8+15] = VAR_4->transfer_characteristics;
    if (VAR_4->matrix_coefficients != -1)
        VAR_7[8+16] = VAR_4->matrix_coefficients;

fail:
    if (VAR_5 < 0)
        FUNC_4(VAR_3);
    return VAR_5;
}
