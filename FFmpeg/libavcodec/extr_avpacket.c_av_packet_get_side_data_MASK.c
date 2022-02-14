
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPacketSideDataType { ____Placeholder_AVPacketSideDataType } AVPacketSideDataType ;
struct TYPE_5__ {int side_data_elems; TYPE_1__* side_data; } ;
struct TYPE_4__ {int type; int size; int * data; } ;
typedef TYPE_2__ AVPacket ;



uint8_t *FUNC_0(const AVPacket *VAR_0, enum AVPacketSideDataType VAR_1,
                                 int *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->side_data_elems; VAR_3++) {
        if (VAR_0->side_data[VAR_3].type == VAR_1) {
            if (VAR_2)
                *VAR_2 = VAR_0->side_data[VAR_3].size;
            return VAR_0->side_data[VAR_3].data;
        }
    }
    if (VAR_2)
        *VAR_2 = 0;
    return ((void*)0);
}
