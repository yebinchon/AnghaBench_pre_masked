
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* opaque; } ;
struct TYPE_11__ {scalar_t__ format; } ;
struct TYPE_10__ {int (* hwaccel_get_buffer ) (TYPE_3__*,TYPE_2__*,int) ;scalar_t__ hwaccel_pix_fmt; } ;
typedef TYPE_1__ InputStream ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, AVFrame *VAR_1, int VAR_2)
{
    InputStream *VAR_3 = VAR_0->opaque;

    if (VAR_3->hwaccel_get_buffer && VAR_1->format == VAR_3->hwaccel_pix_fmt)
        return VAR_3->hwaccel_get_buffer(VAR_0, VAR_1, VAR_2);

    return FUNC_0(VAR_0, VAR_1, VAR_2);
}
