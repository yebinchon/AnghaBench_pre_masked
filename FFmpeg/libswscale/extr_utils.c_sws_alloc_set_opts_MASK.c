
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_4__ {int flags; int srcW; int srcH; int dstW; int dstH; int srcFormat; int dstFormat; double* param; } ;
typedef TYPE_1__ SwsContext ;


 TYPE_1__* FUNC_0 () ;

SwsContext *FUNC_1(int VAR_0, int VAR_1, enum AVPixelFormat VAR_2,
                               int VAR_3, int VAR_4, enum AVPixelFormat VAR_5,
                               int VAR_6, const double *VAR_7)
{
    SwsContext *VAR_8;

    if (!(VAR_8 = FUNC_0()))
        return ((void*)0);

    VAR_8->flags = VAR_6;
    VAR_8->srcW = VAR_0;
    VAR_8->srcH = VAR_1;
    VAR_8->dstW = VAR_3;
    VAR_8->dstH = VAR_4;
    VAR_8->srcFormat = VAR_2;
    VAR_8->dstFormat = VAR_5;

    if (VAR_7) {
        VAR_8->param[0] = VAR_7[0];
        VAR_8->param[1] = VAR_7[1];
    }

    return VAR_8;
}
