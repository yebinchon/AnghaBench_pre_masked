
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int max_plane; int* data; int format; int width; int height; TYPE_2__* plane; } ;
typedef TYPE_3__ hb_image_t ;
struct TYPE_12__ {int nb_components; TYPE_1__* comp; } ;
struct TYPE_10__ {int* data; int stride; int height_stride; int size; int height; int width; } ;
struct TYPE_9__ {int plane; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;


 int* FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int*,int ,int) ;

hb_image_t * FUNC_9(int VAR_0, int VAR_1, int VAR_2)
{
    const AVPixFmtDescriptor * VAR_3 = FUNC_1(VAR_0);
    uint8_t VAR_4[4] = {0,};
    int VAR_5, VAR_6;

    if (VAR_3 == ((void*)0))
    {
        return ((void*)0);
    }

    hb_image_t *VAR_7 = FUNC_2(1, sizeof(hb_image_t));
    if (VAR_7 == ((void*)0))
    {
        return ((void*)0);
    }

    int VAR_8 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_3->nb_components; VAR_5++)
    {


        VAR_6 = VAR_3->comp[VAR_5].plane;
        if (VAR_6 > VAR_7->max_plane)
        {
            VAR_7->max_plane = VAR_6;
        }
        if (!VAR_4[VAR_6])
        {
            VAR_4[VAR_6] = 1;
            VAR_8 += FUNC_6( VAR_0, VAR_1, VAR_6 ) *
                    FUNC_5( VAR_0, VAR_2, VAR_6 );
        }
    }

    VAR_7->data = FUNC_0(VAR_8);
    if (VAR_7->data == ((void*)0))
    {
        FUNC_3(VAR_7);
        return ((void*)0);
    }
    VAR_7->format = VAR_0;
    VAR_7->width = VAR_1;
    VAR_7->height = VAR_2;
    FUNC_8(VAR_7->data, 0, VAR_8);

    uint8_t * VAR_9 = VAR_7->data;
    for (VAR_6 = 0; VAR_6 <= VAR_7->max_plane; VAR_6++)
    {
        VAR_7->plane[VAR_6].data = VAR_9;
        VAR_7->plane[VAR_6].stride = FUNC_6(VAR_0, VAR_1, VAR_6);
        VAR_7->plane[VAR_6].height_stride =
                                FUNC_5(VAR_0, VAR_2, VAR_6);
        VAR_7->plane[VAR_6].width = FUNC_7(VAR_0, VAR_1, VAR_6);
        VAR_7->plane[VAR_6].height = FUNC_4(VAR_0, VAR_2, VAR_6);
        VAR_7->plane[VAR_6].size = VAR_7->plane[VAR_6].stride *
                                  VAR_7->plane[VAR_6].height_stride;
        VAR_9 += VAR_7->plane[VAR_6].size;
    }
    return VAR_7;
}
