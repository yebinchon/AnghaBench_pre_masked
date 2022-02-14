
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1)
{
    static const enum AVPixelFormat VAR_2[] = {
        153,
        147,
        140,
        155,
        154,
        157,
        131,
        130,
        128,
        158,
        141,
        129,
        148,
        142,
        135,
        152,
        146,
        139,
        151,
        145,
        138,
        150,
        144,
        137,
        149,
        143,
        136,
        134,
        133,
        132,
        164,
        159,
        163,
        162,
        161,
        160,
        165,
        156
    };

    AVFilterFormats *VAR_3 = FUNC_1(VAR_2);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_1, VAR_3);
}
