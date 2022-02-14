
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
        136, 150, 152,
        128, 129,
        140, 158, 144, 164,
        130, 131,
        132, 165, 166,
        159, 153, 145,
        163, 157, 149,
        162, 156, 148, 151,
        161, 155, 147,
        160, 154, 146,
        141, 137, 133,
        143, 139, 135,
        142, 138, 134,
        179, 174, 178,
        177, 176, 175,
        183, 182, 181, 180,
        169, 168, 173, 172, 171, 170,
        167
    };
    AVFilterFormats *VAR_3 = FUNC_1(VAR_2);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_1, VAR_3);
}
