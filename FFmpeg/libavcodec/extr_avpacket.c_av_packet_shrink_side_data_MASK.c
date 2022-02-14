
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVPacketSideDataType { ____Placeholder_AVPacketSideDataType } AVPacketSideDataType ;
struct TYPE_5__ {int side_data_elems; TYPE_1__* side_data; } ;
struct TYPE_4__ {int type; int size; } ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(AVPacket *VAR_2, enum AVPacketSideDataType VAR_3,
                               int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2->side_data_elems; VAR_5++) {
        if (VAR_2->side_data[VAR_5].type == VAR_3) {
            if (VAR_4 > VAR_2->side_data[VAR_5].size)
                return FUNC_0(VAR_1);
            VAR_2->side_data[VAR_5].size = VAR_4;
            return 0;
        }
    }
    return FUNC_0(VAR_0);
}
