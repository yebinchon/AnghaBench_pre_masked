
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum AVFrameSideDataType { ____Placeholder_AVFrameSideDataType } AVFrameSideDataType ;
struct TYPE_12__ {int size; int data; } ;
struct TYPE_11__ {int nb_side_data; TYPE_1__** side_data; } ;
struct TYPE_10__ {int type; int size; TYPE_3__* buf; int data; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVBufferRef ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__** FUNC_1 (TYPE_1__**,int) ;

AVFrameSideData *FUNC_2(AVFrame *VAR_1,
                                                 enum AVFrameSideDataType VAR_2,
                                                 AVBufferRef *VAR_3)
{
    AVFrameSideData *VAR_4, **VAR_5;

    if (!VAR_3)
        return ((void*)0);

    if (VAR_1->nb_side_data > VAR_0 / sizeof(*VAR_1->side_data) - 1)
        return ((void*)0);

    VAR_5 = FUNC_1(VAR_1->side_data,
                     (VAR_1->nb_side_data + 1) * sizeof(*VAR_1->side_data));
    if (!VAR_5)
        return ((void*)0);
    VAR_1->side_data = VAR_5;

    VAR_4 = FUNC_0(sizeof(*VAR_4));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->buf = VAR_3;
    VAR_4->data = VAR_4->buf->data;
    VAR_4->size = VAR_3->size;
    VAR_4->type = VAR_2;

    VAR_1->side_data[VAR_1->nb_side_data++] = VAR_4;

    return VAR_4;
}
