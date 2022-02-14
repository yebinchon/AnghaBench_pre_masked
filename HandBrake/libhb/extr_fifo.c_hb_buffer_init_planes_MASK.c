
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int max_plane; int height; int fmt; int width; } ;
struct TYPE_7__ {TYPE_2__* plane; TYPE_1__ f; int * data; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_6__ {int stride; int height_stride; int size; int height; int width; int * data; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(hb_buffer_t * VAR_0)
{
    uint8_t * VAR_1 = VAR_0->data;
    int VAR_2;

    for( VAR_2 = 0; VAR_2 <= VAR_0->f.max_plane; VAR_2++ )
    {
        VAR_0->plane[VAR_2].data = VAR_1;
        VAR_0->plane[VAR_2].stride = FUNC_2(VAR_0->f.fmt, VAR_0->f.width, VAR_2);
        VAR_0->plane[VAR_2].height_stride = FUNC_1(VAR_0->f.fmt,
                                                            VAR_0->f.height, VAR_2);
        VAR_0->plane[VAR_2].width = FUNC_3(VAR_0->f.fmt, VAR_0->f.width, VAR_2);
        VAR_0->plane[VAR_2].height = FUNC_0(VAR_0->f.fmt, VAR_0->f.height, VAR_2);
        VAR_0->plane[VAR_2].size = VAR_0->plane[VAR_2].stride *
                                     VAR_0->plane[VAR_2].height_stride;
        VAR_1 += VAR_0->plane[VAR_2].size;
    }
}
