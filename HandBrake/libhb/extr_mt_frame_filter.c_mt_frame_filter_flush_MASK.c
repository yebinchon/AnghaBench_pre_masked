
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame_count; int ** buf; TYPE_2__* sub_filter; } ;
typedef TYPE_1__ hb_filter_private_t ;
typedef int hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_5__ {int (* work ) (TYPE_2__*,int **,int **) ;} ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int **,int **) ;

__attribute__((used)) static hb_buffer_t * FUNC_4(hb_filter_private_t *VAR_0)
{
    hb_buffer_list_t VAR_1;

    FUNC_2(&VAR_1);
    for (int VAR_2 = 0; VAR_2 < VAR_0->frame_count; VAR_2++)
    {
        hb_buffer_t * VAR_3;
        VAR_0->sub_filter->work(VAR_0->sub_filter, &VAR_0->buf[VAR_2], &VAR_3);

        if (VAR_0->buf[VAR_2] != ((void*)0))
        {
            FUNC_0(&VAR_0->buf[VAR_2]);
        }
        FUNC_1(&VAR_1, VAR_3);
    }
    VAR_0->frame_count = 0;
    return FUNC_2(&VAR_1);
}
