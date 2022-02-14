
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* update_map; void** filter_level; void** base_quant; void* absolute_vals; void* update_feature_data; } ;
struct TYPE_7__ {TYPE_2__* prob; TYPE_1__ segmentation; int c; } ;
typedef TYPE_3__ VP8Context ;
typedef int VP56RangeCoder ;
struct TYPE_6__ {int* segmentid; } ;


 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(VP8Context *VAR_0)
{
    VP56RangeCoder *VAR_1 = &VAR_0->c;
    int VAR_2;

    VAR_0->segmentation.update_map = FUNC_0(VAR_1);
    VAR_0->segmentation.update_feature_data = FUNC_0(VAR_1);

    if (VAR_0->segmentation.update_feature_data) {
        VAR_0->segmentation.absolute_vals = FUNC_0(VAR_1);

        for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
            VAR_0->segmentation.base_quant[VAR_2] = FUNC_1(VAR_1, 7);

        for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
            VAR_0->segmentation.filter_level[VAR_2] = FUNC_1(VAR_1, 6);
    }
    if (VAR_0->segmentation.update_map)
        for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
            VAR_0->prob->segmentid[VAR_2] = FUNC_0(VAR_1) ? FUNC_2(VAR_1, 8) : 255;
}
