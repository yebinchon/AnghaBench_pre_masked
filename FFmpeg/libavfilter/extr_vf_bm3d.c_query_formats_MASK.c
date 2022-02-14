
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
        158, 157, 162,
        161, 160, 159,
        155, 154,
        153, 147,
        141, 138,
        131, 130,
        129, 128,
        132,
        148, 142, 133,
        152, 146, 137,
        140,
        136, 145, 151,
        139,
        135, 144, 150,
        149, 143, 134,
        168, 163, 167,
        166, 165, 164,
        156
    };

    AVFilterFormats *VAR_3 = FUNC_1(VAR_2);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_1, VAR_3);
}
