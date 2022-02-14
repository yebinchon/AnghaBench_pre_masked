
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int max_plane; } ;
struct TYPE_12__ {TYPE_2__* plane; TYPE_1__ f; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_13__ {int* linesize; int ** data; int height; int width; int format; } ;
struct TYPE_11__ {int stride; int height; int * data; } ;
typedef int AVRational ;
typedef TYPE_4__ AVFrame ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int ) ;
 TYPE_3__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int *,int) ;

hb_buffer_t * FUNC_4(AVFrame *VAR_0, AVRational VAR_1)
{
    hb_buffer_t * VAR_2;

    VAR_2 = FUNC_2(VAR_0->format, VAR_0->width, VAR_0->height);
    if (VAR_2 == ((void*)0))
    {
        return ((void*)0);
    }

    FUNC_1(VAR_2, VAR_0, VAR_1);

    int VAR_3;
    for (VAR_3 = 0; VAR_3 <= VAR_2->f.max_plane; VAR_3++)
    {
        int VAR_4;
        int VAR_5 = VAR_2->plane[VAR_3].stride;
        int VAR_6 = VAR_2->plane[VAR_3].height;
        int VAR_7 = VAR_0->linesize[VAR_3];
        int VAR_8 = VAR_7 < VAR_5 ? FUNC_0(VAR_7) : VAR_5;
        uint8_t * VAR_9 = VAR_2->plane[VAR_3].data;
        uint8_t * VAR_10 = VAR_0->data[VAR_3];

        for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
        {
            FUNC_3(VAR_9, VAR_10, VAR_8);
            VAR_9 += VAR_5;
            VAR_10 += VAR_7;
        }
    }

    return VAR_2;
}
