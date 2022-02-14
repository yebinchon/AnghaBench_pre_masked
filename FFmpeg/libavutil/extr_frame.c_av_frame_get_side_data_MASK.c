
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVFrameSideDataType { ____Placeholder_AVFrameSideDataType } AVFrameSideDataType ;
struct TYPE_6__ {int nb_side_data; TYPE_1__** side_data; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef TYPE_2__ AVFrame ;



AVFrameSideData *FUNC_0(const AVFrame *VAR_0,
                                        enum AVFrameSideDataType VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->nb_side_data; VAR_2++) {
        if (VAR_0->side_data[VAR_2]->type == VAR_1)
            return VAR_0->side_data[VAR_2];
    }
    return ((void*)0);
}
