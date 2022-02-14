
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_d3d11_views; scalar_t__ dxva2_service; scalar_t__* d3d11_views; int decoder_ref; } ;
typedef TYPE_1__ FFDXVASharedContext ;
typedef int AVCodecContext ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__**) ;

int FUNC_5(AVCodecContext *VAR_0)
{
    FFDXVASharedContext *VAR_1 = FUNC_0(VAR_0);
    int VAR_2;

    FUNC_3(&VAR_1->decoder_ref);
    return 0;
}
