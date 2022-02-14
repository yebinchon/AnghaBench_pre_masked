
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_only_constraint_flag; int non_packed_constraint_flag; int interlaced_source_flag; int progressive_source_flag; int * profile_compatibility_flag; int profile_idc; int tier_flag; int profile_space; } ;
typedef int PutBitContext ;
typedef TYPE_1__ PTLCommon ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(PutBitContext *VAR_0, PTLCommon *VAR_1)
{
    int VAR_2;

    FUNC_0(VAR_0, 2, VAR_1->profile_space);
    FUNC_0(VAR_0, 1, VAR_1->tier_flag);
    FUNC_0(VAR_0, 5, VAR_1->profile_idc);
    for (VAR_2 = 0; VAR_2 < 32; VAR_2++)
        FUNC_0(VAR_0, 1, VAR_1->profile_compatibility_flag[VAR_2]);
    FUNC_0(VAR_0, 1, VAR_1->progressive_source_flag);
    FUNC_0(VAR_0, 1, VAR_1->interlaced_source_flag);
    FUNC_0(VAR_0, 1, VAR_1->non_packed_constraint_flag);
    FUNC_0(VAR_0, 1, VAR_1->frame_only_constraint_flag);
    FUNC_1(VAR_0, 0);
    FUNC_0(VAR_0, 12, 0);
}
