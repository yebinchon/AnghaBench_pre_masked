
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* level_idc; } ;
struct TYPE_4__ {TYPE_3__* sub_layer_ptl; void** sub_layer_level_present_flag; void** sub_layer_profile_present_flag; TYPE_3__ general_ptl; } ;
typedef TYPE_1__ PTL ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_3__*) ;
 void* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(GetBitContext *VAR_1, AVCodecContext *VAR_2,
                      PTL *VAR_3, int VAR_4)
{
    int VAR_5;
    if (FUNC_1(VAR_1, VAR_2, &VAR_3->general_ptl) < 0 ||
        FUNC_4(VAR_1) < 8 + (8*2 * (VAR_4 - 1 > 0))) {
        FUNC_0(VAR_2, VAR_0, "PTL information too short\n");
        return -1;
    }

    VAR_3->general_ptl.level_idc = FUNC_2(VAR_1, 8);

    for (VAR_5 = 0; VAR_5 < VAR_4 - 1; VAR_5++) {
        VAR_3->sub_layer_profile_present_flag[VAR_5] = FUNC_3(VAR_1);
        VAR_3->sub_layer_level_present_flag[VAR_5] = FUNC_3(VAR_1);
    }

    if (VAR_4 - 1> 0)
        for (VAR_5 = VAR_4 - 1; VAR_5 < 8; VAR_5++)
            FUNC_5(VAR_1, 2);
    for (VAR_5 = 0; VAR_5 < VAR_4 - 1; VAR_5++) {
        if (VAR_3->sub_layer_profile_present_flag[VAR_5] &&
            FUNC_1(VAR_1, VAR_2, &VAR_3->sub_layer_ptl[VAR_5]) < 0) {
            FUNC_0(VAR_2, VAR_0,
                   "PTL information for sublayer %i too short\n", VAR_5);
            return -1;
        }
        if (VAR_3->sub_layer_level_present_flag[VAR_5]) {
            if (FUNC_4(VAR_1) < 8) {
                FUNC_0(VAR_2, VAR_0,
                       "Not enough data for sublayer %i level_idc\n", VAR_5);
                return -1;
            } else
                VAR_3->sub_layer_ptl[VAR_5].level_idc = FUNC_2(VAR_1, 8);
        }
    }

    return 0;
}
