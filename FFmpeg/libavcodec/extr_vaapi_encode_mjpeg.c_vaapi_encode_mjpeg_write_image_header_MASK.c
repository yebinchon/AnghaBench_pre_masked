
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VAAPIEncodeSlice ;
typedef int VAAPIEncodePicture ;
struct TYPE_10__ {int data_size; int data; } ;
struct TYPE_9__ {int cbc; int scan; int huffman_tables; scalar_t__ huffman; int frame_header; int quant_tables; int jfif_header; scalar_t__ jfif; TYPE_2__ current_fragment; } ;
typedef TYPE_1__ VAAPIEncodeMJPEGContext ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ CodedBitstreamFragment ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*,int,scalar_t__,int *,int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_7,
                                                 VAAPIEncodePicture *VAR_8,
                                                 VAAPIEncodeSlice *VAR_9,
                                                 char *VAR_10, size_t *VAR_11)
{
    VAAPIEncodeMJPEGContext *VAR_12 = VAR_7->priv_data;
    CodedBitstreamFragment *VAR_13 = &VAR_12->current_fragment;
    int VAR_14;

    if (VAR_12->jfif) {
        VAR_14 = FUNC_3(VAR_12->cbc, VAR_13, -1,
                                         VAR_2 + 0,
                                         &VAR_12->jfif_header, ((void*)0));
        if (VAR_14 < 0)
            goto fail;
    }

    VAR_14 = FUNC_3(VAR_12->cbc, VAR_13, -1,
                                     VAR_4,
                                     &VAR_12->quant_tables, ((void*)0));
    if (VAR_14 < 0)
        goto fail;

    VAR_14 = FUNC_3(VAR_12->cbc, VAR_13, -1,
                                     VAR_5,
                                     &VAR_12->frame_header, ((void*)0));
    if (VAR_14 < 0)
        goto fail;

    if (VAR_12->huffman) {
        VAR_14 = FUNC_3(VAR_12->cbc, VAR_13, -1,
                                         VAR_3,
                                         &VAR_12->huffman_tables, ((void*)0));
        if (VAR_14 < 0)
            goto fail;
    }

    VAR_14 = FUNC_3(VAR_12->cbc, VAR_13, -1,
                                     VAR_6,
                                     &VAR_12->scan, ((void*)0));
    if (VAR_14 < 0)
        goto fail;

    VAR_14 = FUNC_4(VAR_12->cbc, VAR_13);
    if (VAR_14 < 0) {
        FUNC_1(VAR_7, VAR_0, "Failed to write image header.\n");
        goto fail;
    }

    if (*VAR_11 < 8 * VAR_13->data_size) {
        FUNC_1(VAR_7, VAR_0, "Image header too large: "
               "%zu < %zu.\n", *VAR_11, 8 * VAR_13->data_size);
        VAR_14 = FUNC_0(VAR_1);
        goto fail;
    }


    FUNC_5(VAR_10, VAR_13->data, VAR_13->data_size - 2);
    *VAR_11 = 8 * (VAR_13->data_size - 2);

    VAR_14 = 0;
fail:
    FUNC_2(VAR_12->cbc, VAR_13);
    return VAR_14;
}
