
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {void* output_buffer; void* recon_surface; void* input_surface; void* priv_data; } ;
typedef TYPE_2__ VAAPIEncodePicture ;
struct TYPE_10__ {TYPE_1__* codec; } ;
typedef TYPE_3__ VAAPIEncodeContext ;
struct TYPE_11__ {TYPE_3__* priv_data; } ;
struct TYPE_8__ {int picture_priv_data_size; } ;
typedef TYPE_4__ AVCodecContext ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static VAAPIEncodePicture *FUNC_2(AVCodecContext *VAR_1)
{
    VAAPIEncodeContext *VAR_2 = VAR_1->priv_data;
    VAAPIEncodePicture *VAR_3;

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    if (!VAR_3)
        return ((void*)0);

    if (VAR_2->codec->picture_priv_data_size > 0) {
        VAR_3->priv_data = FUNC_1(VAR_2->codec->picture_priv_data_size);
        if (!VAR_3->priv_data) {
            FUNC_0(&VAR_3);
            return ((void*)0);
        }
    }

    VAR_3->input_surface = VAR_0;
    VAR_3->recon_surface = VAR_0;
    VAR_3->output_buffer = VAR_0;

    return VAR_3;
}
