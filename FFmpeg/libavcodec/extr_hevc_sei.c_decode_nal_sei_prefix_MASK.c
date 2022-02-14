
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int alternative_transfer; int content_light; int mastering_display; int display_orientation; int frame_packing; int picture_hash; } ;
typedef TYPE_1__ HEVCSEI ;
typedef int HEVCParamSets ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int *,void*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *,int const*,void*,int) ;
 int FUNC_9 (TYPE_1__*,int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(GetBitContext *VAR_1, void *VAR_2, HEVCSEI *VAR_3,
                                 const HEVCParamSets *VAR_4, int VAR_5, int VAR_6)
{
    switch (VAR_5) {
    case 256:
        return FUNC_4(&VAR_3->picture_hash, VAR_1);
    case 131:
        return FUNC_6(&VAR_3->frame_packing, VAR_1);
    case 132:
        return FUNC_5(&VAR_3->display_orientation, VAR_1);
    case 129:
        return FUNC_8(VAR_3, VAR_1, VAR_4, VAR_2, VAR_6);
    case 130:
        return FUNC_7(&VAR_3->mastering_display, VAR_1);
    case 133:
        return FUNC_3(&VAR_3->content_light, VAR_1);
    case 135:
        return FUNC_1(VAR_3, VAR_1, VAR_2);
    case 128:
        return FUNC_9(VAR_3, VAR_1, VAR_6);
    case 134:
        return FUNC_2(&VAR_3->alternative_transfer, VAR_1);
    default:
        FUNC_0(VAR_2, VAR_0, "Skipped PREFIX SEI %d\n", VAR_5);
        FUNC_10(VAR_1, 8 * VAR_6);
        return 0;
    }
}
