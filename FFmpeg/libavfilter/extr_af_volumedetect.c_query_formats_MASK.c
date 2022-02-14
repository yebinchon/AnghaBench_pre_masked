
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
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1)
{
    static const enum AVSampleFormat VAR_2[] = {
        129,
        128,
        130
    };
    AVFilterFormats *VAR_3;
    AVFilterChannelLayouts *VAR_4;
    int VAR_5;

    if (!(VAR_3 = FUNC_2(VAR_2)))
        return FUNC_0(VAR_0);

    VAR_4 = FUNC_1();
    if (!VAR_4)
        return FUNC_0(VAR_0);
    VAR_5 = FUNC_3(VAR_1, VAR_4);
    if (VAR_5 < 0)
        return VAR_5;

    return FUNC_4(VAR_1, VAR_3);
}
