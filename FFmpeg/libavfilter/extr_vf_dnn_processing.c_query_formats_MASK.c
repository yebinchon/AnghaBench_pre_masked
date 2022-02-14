
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int fmt; } ;
typedef TYPE_1__ DnnProcessingContext ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int * FUNC_0 (int*) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_1)
{
    AVFilterFormats *VAR_2;
    DnnProcessingContext *VAR_3 = VAR_1->priv;
    enum AVPixelFormat VAR_4[2];
    VAR_4[0] = VAR_3->fmt;
    VAR_4[1] = VAR_0;

    VAR_2 = FUNC_0(VAR_4);
    return FUNC_1(VAR_1, VAR_2);
}
