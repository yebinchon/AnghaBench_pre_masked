
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int avfmt; int v4l2_fmt; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

uint32_t FUNC_1(enum AVPixelFormat VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (VAR_0[VAR_2].avfmt == VAR_1)
            return VAR_0[VAR_2].v4l2_fmt;
    }
    return 0;
}
