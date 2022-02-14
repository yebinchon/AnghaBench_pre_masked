
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slice_buffers; scalar_t__ slices_allocated; scalar_t__ nb_slices; scalar_t__ nb_param_buffers; } ;
typedef TYPE_1__ VAAPIDecodePicture ;
typedef int AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

int FUNC_2(AVCodecContext *VAR_0,
                           VAAPIDecodePicture *VAR_1)
{
    FUNC_1(VAR_0, VAR_1);

    VAR_1->nb_param_buffers = 0;
    VAR_1->nb_slices = 0;
    VAR_1->slices_allocated = 0;
    FUNC_0(&VAR_1->slice_buffers);

    return 0;
}
