
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int cbc; } ;
typedef TYPE_1__ VAAPIEncodeMPEG2Context ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int data_size; int data_bit_padding; int data; } ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2,
                                             char *VAR_3, size_t *VAR_4,
                                             CodedBitstreamFragment *VAR_5)
{
    VAAPIEncodeMPEG2Context *VAR_6 = VAR_2->priv_data;
    int VAR_7;

    VAR_7 = FUNC_2(VAR_6->cbc, VAR_5);
    if (VAR_7 < 0) {
        FUNC_1(VAR_2, VAR_0, "Failed to write packed header.\n");
        return VAR_7;
    }

    if (*VAR_4 < 8 * VAR_5->data_size - VAR_5->data_bit_padding) {
        FUNC_1(VAR_2, VAR_0, "Access unit too large: "
               "%zu < %zu.\n", *VAR_4,
               8 * VAR_5->data_size - VAR_5->data_bit_padding);
        return FUNC_0(VAR_1);
    }

    FUNC_3(VAR_3, VAR_5->data, VAR_5->data_size);
    *VAR_4 = 8 * VAR_5->data_size - VAR_5->data_bit_padding;

    return 0;
}
