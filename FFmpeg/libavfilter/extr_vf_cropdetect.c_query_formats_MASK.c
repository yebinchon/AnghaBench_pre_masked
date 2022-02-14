
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
        149, 130,
        143, 129,
        136, 128,
        150, 157,
        137, 151,
        144 , 138 , 131,
        148, 142, 135,
        147, 141, 134,
        146, 140, 133,
        145, 139, 132,
        155, 154,
        153, 159,
        152, 158,
        156
    };

    AVFilterFormats *VAR_3 = FUNC_1(VAR_2);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_1, VAR_3);
}
