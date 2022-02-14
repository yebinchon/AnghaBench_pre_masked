
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {TYPE_3__* plane; int * data; int height; int width; int format; } ;
typedef TYPE_4__ hb_image_t ;
struct TYPE_10__ {int max_plane; int height; int width; int fmt; } ;
struct TYPE_14__ {TYPE_2__* plane; TYPE_1__ f; int size; int data; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_12__ {int size; int height_stride; int stride; int height; int width; int * data; } ;
struct TYPE_11__ {int size; int height_stride; int stride; int height; int width; } ;


 int * FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int ,int ) ;

hb_image_t * FUNC_4(hb_buffer_t *VAR_0)
{
    hb_image_t *VAR_1 = FUNC_1(1, sizeof(hb_image_t));

    VAR_1->data = FUNC_0( VAR_0->size );
    if (VAR_1->data == ((void*)0))
    {
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    VAR_1->format = VAR_0->f.fmt;
    VAR_1->width = VAR_0->f.width;
    VAR_1->height = VAR_0->f.height;
    FUNC_3(VAR_1->data, VAR_0->data, VAR_0->size);

    int VAR_2;
    uint8_t *VAR_3 = VAR_1->data;
    for (VAR_2 = 0; VAR_2 <= VAR_0->f.max_plane; VAR_2++)
    {
        VAR_1->plane[VAR_2].data = VAR_3;
        VAR_1->plane[VAR_2].width = VAR_0->plane[VAR_2].width;
        VAR_1->plane[VAR_2].height = VAR_0->plane[VAR_2].height;
        VAR_1->plane[VAR_2].stride = VAR_0->plane[VAR_2].stride;
        VAR_1->plane[VAR_2].height_stride = VAR_0->plane[VAR_2].height_stride;
        VAR_1->plane[VAR_2].size = VAR_0->plane[VAR_2].size;
        VAR_3 += VAR_1->plane[VAR_2].size;
    }
    return VAR_1;
}
