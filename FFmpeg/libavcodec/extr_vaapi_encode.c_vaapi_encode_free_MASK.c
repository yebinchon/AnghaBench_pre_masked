
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nb_slices; scalar_t__ output_buffer; TYPE_4__* roi; TYPE_4__* codec_picture_params; TYPE_4__* priv_data; TYPE_4__* slices; TYPE_4__* param_buffers; int recon_image; int input_image; scalar_t__ encode_issued; } ;
typedef TYPE_1__ VAAPIEncodePicture ;
struct TYPE_7__ {struct TYPE_7__* codec_slice_params; struct TYPE_7__* priv_data; } ;
typedef int AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_1,
                             VAAPIEncodePicture *VAR_2)
{
    int VAR_3;

    if (VAR_2->encode_issued)
        FUNC_4(VAR_1, VAR_2);

    for (VAR_3 = 0; VAR_3 < VAR_2->nb_slices; VAR_3++) {
        if (VAR_2->slices) {
            FUNC_3(&VAR_2->slices[VAR_3].priv_data);
            FUNC_3(&VAR_2->slices[VAR_3].codec_slice_params);
        }
    }
    FUNC_3(&VAR_2->codec_picture_params);

    FUNC_1(&VAR_2->input_image);
    FUNC_1(&VAR_2->recon_image);

    FUNC_3(&VAR_2->param_buffers);
    FUNC_3(&VAR_2->slices);

    FUNC_0(VAR_2->output_buffer == VAR_0);

    FUNC_3(&VAR_2->priv_data);
    FUNC_3(&VAR_2->codec_picture_params);
    FUNC_3(&VAR_2->roi);

    FUNC_2(VAR_2);

    return 0;
}
