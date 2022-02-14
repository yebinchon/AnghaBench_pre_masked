
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {scalar_t__ pix_fmt; unsigned int fourcc; } ;
typedef TYPE_1__ PixelFormatTag ;


 TYPE_1__* VAR_0 ;

unsigned int FUNC_0(enum AVPixelFormat VAR_1)
{
    const PixelFormatTag *VAR_2 = VAR_0;
    while (VAR_2->pix_fmt >= 0) {
        if (VAR_2->pix_fmt == VAR_1)
            return VAR_2->fourcc;
        VAR_2++;
    }
    return 0;
}
