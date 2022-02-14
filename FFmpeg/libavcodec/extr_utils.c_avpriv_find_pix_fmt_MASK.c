
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {scalar_t__ pix_fmt; unsigned int fourcc; } ;
typedef TYPE_1__ PixelFormatTag ;


 int VAR_0 ;

enum AVPixelFormat FUNC_0(const PixelFormatTag *VAR_1,
                                       unsigned int VAR_2)
{
    while (VAR_1->pix_fmt >= 0) {
        if (VAR_1->fourcc == VAR_2)
            return VAR_1->pix_fmt;
        VAR_1++;
    }
    return VAR_0;
}
