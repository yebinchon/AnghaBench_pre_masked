
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
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_1)
{
    AVFilterChannelLayouts *VAR_2;
    AVFilterFormats *VAR_3;
    static const enum AVSampleFormat VAR_4[] = {
        129, 128,
        131, 132,
        130
    };
    int VAR_5;

    VAR_2 = FUNC_1();
    if (!VAR_2)
        return FUNC_0(VAR_0);
    VAR_5 = FUNC_4(VAR_1, VAR_2);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_3 = FUNC_3(VAR_4);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    VAR_5 = FUNC_5(VAR_1, VAR_3);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_3 = FUNC_2();
    if (!VAR_3)
        return FUNC_0(VAR_0);
    return FUNC_6(VAR_1, VAR_3);
}
