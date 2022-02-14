
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;




 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0)
{
    static const enum AVPixelFormat VAR_1[] = {
        129, 128,
    };

    AVFilterFormats *VAR_2 = FUNC_0(VAR_1);
    return FUNC_1(VAR_0, VAR_2);
}
