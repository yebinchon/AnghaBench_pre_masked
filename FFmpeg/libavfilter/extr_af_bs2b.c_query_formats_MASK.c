
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;






 int VAR_1 ;
 scalar_t__ FUNC_1 (int **,int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_2)
{
    AVFilterFormats *VAR_3 = ((void*)0);
    AVFilterChannelLayouts *VAR_4 = ((void*)0);

    static const enum AVSampleFormat VAR_5[] = {
        128,
        130,
        129,
        132,
        133,
        131,
    };
    int VAR_6;

    if (FUNC_1(&VAR_4, VAR_0) != 0)
        return FUNC_0(VAR_1);
    VAR_6 = FUNC_4(VAR_2, VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_3 = FUNC_3(VAR_5);
    if (!VAR_3)
        return FUNC_0(VAR_1);
    VAR_6 = FUNC_5(VAR_2, VAR_3);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_3 = FUNC_2();
    if (!VAR_3)
        return FUNC_0(VAR_1);
    return FUNC_6(VAR_2, VAR_3);
}
