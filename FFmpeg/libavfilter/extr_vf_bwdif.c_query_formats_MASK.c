
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
        165, 164, 163,
        157, 151, 150,
        132, 131,
        130, 129, 128,
        158, 152, 145,
        162, 156, 149,
        161, 155, 148,
        160, 154, 147,
        159, 153, 146,
        144, 140, 136,
        141, 137, 133,
        143, 139, 135,
        142, 138, 134,
        174, 169, 173,
        172, 171, 170,
        176, 175,
        167, 168,
        166
    };

    AVFilterFormats *VAR_3 = FUNC_1(VAR_2);
    if (!VAR_3)
        return FUNC_0(VAR_0);

    return FUNC_2(VAR_1, VAR_3);
}
