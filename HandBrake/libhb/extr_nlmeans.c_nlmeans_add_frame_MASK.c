
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int* range; size_t next_frame; TYPE_2__* frame; } ;
typedef TYPE_4__ hb_filter_private_t ;
struct TYPE_10__ {int fmt; int height; int width; } ;
struct TYPE_12__ {TYPE_3__ f; int s; TYPE_1__* plane; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_9__ {int fmt; int height; int width; int s; int * plane; } ;
struct TYPE_8__ {int height; int stride; int width; int data; } ;


 int FUNC_0 (int ,int ,int ,int ,int *,int const) ;

__attribute__((used)) static void FUNC_1(hb_filter_private_t *VAR_0, hb_buffer_t *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < 3; VAR_2++)
    {

        const int VAR_3 = ((VAR_0->range[VAR_2] + 2) / 2 + 15) / 16 * 16;
        FUNC_0(VAR_1->plane[VAR_2].data,
                      VAR_1->plane[VAR_2].width,
                      VAR_1->plane[VAR_2].stride,
                      VAR_1->plane[VAR_2].height,
                      &VAR_0->frame[VAR_0->next_frame].plane[VAR_2],
                      VAR_3);
        VAR_0->frame[VAR_0->next_frame].s = VAR_1->s;
        VAR_0->frame[VAR_0->next_frame].width = VAR_1->f.width;
        VAR_0->frame[VAR_0->next_frame].height = VAR_1->f.height;
        VAR_0->frame[VAR_0->next_frame].fmt = VAR_1->f.fmt;
    }
    VAR_0->next_frame++;
}
