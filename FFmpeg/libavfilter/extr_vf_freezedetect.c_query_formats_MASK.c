
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
        167, 129, 173,
        195, 161, 152,
        169, 168, 179,
        133, 132, 130,
        171, 176, 174, 196,
        172, 197, 194, 180,
        155, 131, 146,
        163, 157, 148,
        170, 162, 166,
        160, 147, 151,
        156, 189, 184,
        188, 185, 142,
        138, 143, 139,
        135, 145, 141,
        137, 144, 140,
        136, 175, 128,
        193, 190, 165,
        164, 159, 158,
        150, 149, 187,
        186, 134, 154,
        153, 191, 192,
        182, 183, 178,
        181,
        177
    };

    AVFilterFormats *VAR_3 = FUNC_1(VAR_2);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_1, VAR_3);
}
