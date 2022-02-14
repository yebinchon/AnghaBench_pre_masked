
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int present; void* min_luminance; void* max_luminance; void** white_point; void*** display_primaries; } ;
typedef TYPE_1__ HEVCSEIMasteringDisplay ;
typedef int GetBitContext ;


 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(HEVCSEIMasteringDisplay *VAR_0, GetBitContext *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        VAR_0->display_primaries[VAR_2][0] = FUNC_0(VAR_1, 16);
        VAR_0->display_primaries[VAR_2][1] = FUNC_0(VAR_1, 16);
    }

    VAR_0->white_point[0] = FUNC_0(VAR_1, 16);
    VAR_0->white_point[1] = FUNC_0(VAR_1, 16);


    VAR_0->max_luminance = FUNC_1(VAR_1, 32);
    VAR_0->min_luminance = FUNC_1(VAR_1, 32);




    VAR_0->present = 2;
    return 0;
}
