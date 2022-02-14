
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ format; void** data; } ;
struct TYPE_5__ {intptr_t nb_d3d11_views; void** d3d11_views; int * d3d11_texture; } ;
typedef int ID3D11Texture2D ;
typedef TYPE_1__ FFDXVASharedContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int const*) ;
 int FUNC_1 (void*,int ,char*) ;

__attribute__((used)) static void *FUNC_2(const AVCodecContext *VAR_2, const AVFrame *VAR_3)
{
    return VAR_3->data[3];
}
