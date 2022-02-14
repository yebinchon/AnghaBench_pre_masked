
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int VAImageFormat ;
struct TYPE_8__ {int nb_formats; TYPE_2__* formats; } ;
typedef TYPE_3__ VAAPIDeviceContext ;
struct TYPE_9__ {TYPE_1__* internal; } ;
struct TYPE_7__ {int pix_fmt; int image_format; } ;
struct TYPE_6__ {TYPE_3__* priv; } ;
typedef TYPE_4__ AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(AVHWDeviceContext *VAR_1,
                                  enum AVPixelFormat VAR_2,
                                  VAImageFormat **VAR_3)
{
    VAAPIDeviceContext *VAR_4 = VAR_1->internal->priv;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4->nb_formats; VAR_5++) {
        if (VAR_4->formats[VAR_5].pix_fmt == VAR_2) {
            if (VAR_3)
                *VAR_3 = &VAR_4->formats[VAR_5].image_format;
            return 0;
        }
    }
    return FUNC_0(VAR_0);
}
