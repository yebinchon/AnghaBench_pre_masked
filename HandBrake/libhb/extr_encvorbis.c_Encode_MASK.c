
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int input_samples; int out_discrete_channels; int* remap_table; int vd; scalar_t__ buf; int pts; int list; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_work_object_t ;
typedef int hb_buffer_t ;


 int * FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int,int *,int *) ;
 float** FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static hb_buffer_t* FUNC_5(hb_work_object_t *VAR_1)
{
    hb_work_private_t *VAR_2 = VAR_1->private_data;
    hb_buffer_t *VAR_3;
    float **VAR_4;
    int VAR_5, VAR_6;


    if ((VAR_3 = FUNC_0(VAR_1)) != ((void*)0))
    {
        return VAR_3;
    }


    if (FUNC_1(VAR_2->list) < VAR_2->input_samples * sizeof(float))
    {
        return ((void*)0);
    }


    FUNC_2(VAR_2->list, VAR_2->buf, VAR_2->input_samples * sizeof(float),
                     &VAR_2->pts, ((void*)0));
    VAR_4 = FUNC_3(&VAR_2->vd, VAR_0);
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
        for (VAR_6 = 0; VAR_6 < VAR_2->out_discrete_channels; VAR_6++)
        {
            VAR_4[VAR_6][VAR_5] = ((float*)VAR_2->buf)[(VAR_2->out_discrete_channels * VAR_5 +
                                              VAR_2->remap_table[VAR_6])];
        }
    }

    FUNC_4(&VAR_2->vd, VAR_0);


    return FUNC_0(VAR_1);
}
