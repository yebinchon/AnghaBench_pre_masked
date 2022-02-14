
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__** sps_list; } ;
struct TYPE_12__ {int picture_struct; } ;
struct TYPE_13__ {size_t active_seq_parameter_set_id; TYPE_4__ picture_timing; } ;
struct TYPE_10__ {scalar_t__ frame_field_info_present_flag; } ;
struct TYPE_11__ {TYPE_2__ vui; } ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_3__ HEVCSPS ;
typedef TYPE_4__ HEVCSEIPictureTiming ;
typedef TYPE_5__ HEVCSEI ;
typedef TYPE_6__ HEVCParamSets ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,int ,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(HEVCSEI *VAR_5, GetBitContext *VAR_6, const HEVCParamSets *VAR_7,
                                     void *VAR_8, int VAR_9)
{
    HEVCSEIPictureTiming *VAR_10 = &VAR_5->picture_timing;
    HEVCSPS *VAR_11;

    if (!VAR_7->sps_list[VAR_5->active_seq_parameter_set_id])
        return(FUNC_0(VAR_4));
    VAR_11 = (HEVCSPS*)VAR_7->sps_list[VAR_5->active_seq_parameter_set_id]->data;

    if (VAR_11->vui.frame_field_info_present_flag) {
        int VAR_12 = FUNC_2(VAR_6, 4);
        VAR_10->picture_struct = VAR_3;
        if (VAR_12 == 2 || VAR_12 == 10 || VAR_12 == 12) {
            FUNC_1(VAR_8, VAR_0, "BOTTOM Field\n");
            VAR_10->picture_struct = VAR_1;
        } else if (VAR_12 == 1 || VAR_12 == 9 || VAR_12 == 11) {
            FUNC_1(VAR_8, VAR_0, "TOP Field\n");
            VAR_10->picture_struct = VAR_2;
        }
        FUNC_2(VAR_6, 2);
        FUNC_2(VAR_6, 1);
        FUNC_3(VAR_6);
        VAR_9--;
    }
    FUNC_4(VAR_6, 8 * VAR_9);

    return 0;
}
