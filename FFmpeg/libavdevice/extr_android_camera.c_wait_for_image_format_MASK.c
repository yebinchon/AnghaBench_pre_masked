
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int got_image_format; int exit; } ;
typedef TYPE_1__ AndroidCameraCtx ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    AndroidCameraCtx *VAR_1 = VAR_0->priv_data;

    while (!FUNC_0(&VAR_1->got_image_format) && !FUNC_0(&VAR_1->exit)) {

        FUNC_1(1000);
    }

    return FUNC_0(&VAR_1->got_image_format);
}
