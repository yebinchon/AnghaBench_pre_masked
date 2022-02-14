
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int max_plane; } ;
struct TYPE_7__ {TYPE_2__* plane; TYPE_1__ f; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_6__ {int width; int height; int stride; int height_stride; int * data; } ;


 int FUNC_0 (int *,int,int) ;

void FUNC_1(hb_buffer_t * VAR_0)
{
    uint8_t * VAR_1;
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    for (VAR_2 = 0; VAR_2 <= VAR_0->f.max_plane; VAR_2++)
    {
        VAR_1 = VAR_0->plane[VAR_2].data;
        VAR_4 = VAR_0->plane[VAR_2].width;
        VAR_5 = VAR_0->plane[VAR_2].height;
        VAR_6 = VAR_0->plane[VAR_2].stride;
        VAR_7 = VAR_0->plane[VAR_2].height_stride;

        if (VAR_1 != ((void*)0))
        {

            for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
            {
                FUNC_0(VAR_1 + VAR_3 * VAR_6 + VAR_4, 0x80, VAR_6 - VAR_4);
            }

            for (VAR_3 = VAR_5; VAR_3 < VAR_7; VAR_3++)
            {
                FUNC_0(VAR_1 + VAR_3 * VAR_6, 0x80, VAR_6);
            }
        }
    }
}
