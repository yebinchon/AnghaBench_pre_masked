
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int temporal_id; int gb; } ;
typedef TYPE_1__ H2645NAL ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,char*,int,int ,int,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(H2645NAL *VAR_2, void *VAR_3)
{
    GetBitContext *VAR_4 = &VAR_2->gb;
    int VAR_5;

    if (FUNC_2(VAR_4) != 0)
        return VAR_0;

    VAR_2->type = FUNC_1(VAR_4, 6);

    VAR_5 = FUNC_1(VAR_4, 6);
    VAR_2->temporal_id = FUNC_1(VAR_4, 3) - 1;
    if (VAR_2->temporal_id < 0)
        return VAR_0;

    FUNC_0(VAR_3, VAR_1,
           "nal_unit_type: %d(%s), nuh_layer_id: %d, temporal_id: %d\n",
           VAR_2->type, FUNC_3(VAR_2->type), VAR_5, VAR_2->temporal_id);

    return VAR_5 == 0;
}
