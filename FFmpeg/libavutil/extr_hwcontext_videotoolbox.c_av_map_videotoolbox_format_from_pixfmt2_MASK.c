
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int pix_fmt; int full_range; int cv_fmt; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

uint32_t FUNC_1(enum AVPixelFormat VAR_1, bool VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        if (VAR_0[VAR_3].pix_fmt == VAR_1 && VAR_0[VAR_3].full_range == VAR_2)
            return VAR_0[VAR_3].cv_fmt;
    }
    return 0;
}
