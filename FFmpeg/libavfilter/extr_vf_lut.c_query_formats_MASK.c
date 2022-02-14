
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {scalar_t__ is_yuv; scalar_t__ is_rgb; } ;
typedef TYPE_1__ LutContext ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_4)
{
    LutContext *VAR_5 = VAR_4->priv;

    const enum AVPixelFormat *VAR_6 = VAR_5->is_rgb ? VAR_2 :
                                                     VAR_5->is_yuv ? VAR_3 :
                                                                 VAR_1;
    AVFilterFormats *VAR_7 = FUNC_1(VAR_6);
    if (!VAR_7)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_4, VAR_7);
}
