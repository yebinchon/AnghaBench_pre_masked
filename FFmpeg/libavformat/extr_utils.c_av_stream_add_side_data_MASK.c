
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPacketSideDataType { ____Placeholder_AVPacketSideDataType } AVPacketSideDataType ;
struct TYPE_7__ {int type; size_t size; int * data; } ;
struct TYPE_6__ {int nb_side_data; TYPE_2__* side_data; } ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVPacketSideData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int) ;

int FUNC_3(AVStream *VAR_3, enum AVPacketSideDataType VAR_4,
                            uint8_t *VAR_5, size_t VAR_6)
{
    AVPacketSideData *VAR_7, *VAR_8;
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_3->nb_side_data; VAR_9++) {
        VAR_7 = &VAR_3->side_data[VAR_9];

        if (VAR_7->type == VAR_4) {
            FUNC_1(&VAR_7->data);
            VAR_7->data = VAR_5;
            VAR_7->size = VAR_6;
            return 0;
        }
    }

    if ((unsigned)VAR_3->nb_side_data + 1 >= VAR_2 / sizeof(*VAR_3->side_data))
        return FUNC_0(VAR_1);

    VAR_8 = FUNC_2(VAR_3->side_data, (VAR_3->nb_side_data + 1) * sizeof(*VAR_8));
    if (!VAR_8) {
        return FUNC_0(VAR_0);
    }

    VAR_3->side_data = VAR_8;
    VAR_3->nb_side_data++;

    VAR_7 = &VAR_3->side_data[VAR_3->nb_side_data - 1];
    VAR_7->type = VAR_4;
    VAR_7->data = VAR_5;
    VAR_7->size = VAR_6;

    return 0;
}
