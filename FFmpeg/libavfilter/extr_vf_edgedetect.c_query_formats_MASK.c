
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
typedef TYPE_1__ EdgeDetectContext ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_4)
{
    const EdgeDetectContext *VAR_5 = VAR_4->priv;
    static const enum AVPixelFormat VAR_6[] = {132, 131};
    static const enum AVPixelFormat VAR_7[] = {130, 129, 128, 133, 132, 131};
    static const enum AVPixelFormat VAR_8[] = {133, 132, 131};
    AVFilterFormats *VAR_9;
    const enum AVPixelFormat *VAR_10 = ((void*)0);

    if (VAR_5->mode == VAR_3) {
        VAR_10 = VAR_6;
    } else if (VAR_5->mode == VAR_2) {
        VAR_10 = VAR_8;
    } else if (VAR_5->mode == VAR_1) {
        VAR_10 = VAR_7;
    } else {
        FUNC_1(0);
    }
    VAR_9 = FUNC_2(VAR_10);
    if (!VAR_9)
        return FUNC_0(VAR_0);
    return FUNC_3(VAR_4, VAR_9);
}
