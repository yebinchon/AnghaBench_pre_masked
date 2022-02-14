
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;


 int const VAR_0 ;
 int const VAR_1 ;
 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_2)
{
    AVFilterFormats *VAR_3;
    const enum AVPixelFormat VAR_4[] = {
        VAR_1,
        VAR_0
    };

    VAR_3 = FUNC_0(VAR_4);

    return FUNC_1(VAR_2, VAR_3);
}
