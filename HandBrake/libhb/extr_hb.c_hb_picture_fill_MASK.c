
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int max_plane; int fmt; } ;
struct TYPE_7__ {int size; int data; TYPE_2__* plane; TYPE_1__ f; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_6__ {int stride; int height_stride; } ;


 int FUNC_0 (int **,int ,int ,int ,int*) ;
 int FUNC_1 (char*,int,int) ;

int FUNC_2(uint8_t *VAR_0[], int VAR_1[], hb_buffer_t *VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 <= VAR_2->f.max_plane; VAR_4++)
        VAR_1[VAR_4] = VAR_2->plane[VAR_4].stride;
    for (; VAR_4 < 4; VAR_4++)
        VAR_1[VAR_4] = VAR_1[VAR_4 - 1];

    VAR_3 = FUNC_0(VAR_0, VAR_2->f.fmt,
                                 VAR_2->plane[0].height_stride,
                                 VAR_2->data, VAR_1);
    if (VAR_3 != VAR_2->size)
    {
        FUNC_1("Internal error hb_picture_fill expected %d, got %d",
                 VAR_2->size, VAR_3);
    }
    return VAR_3;
}
