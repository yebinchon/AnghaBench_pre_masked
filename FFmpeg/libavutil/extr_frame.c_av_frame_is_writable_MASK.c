
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_extended_buf; scalar_t__* extended_buf; scalar_t__* buf; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(AVFrame *VAR_0)
{
    int VAR_1, VAR_2 = 1;


    if (!VAR_0->buf[0])
        return 0;

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->buf); VAR_1++)
        if (VAR_0->buf[VAR_1])
            VAR_2 &= !!FUNC_1(VAR_0->buf[VAR_1]);
    for (VAR_1 = 0; VAR_1 < VAR_0->nb_extended_buf; VAR_1++)
        VAR_2 &= !!FUNC_1(VAR_0->extended_buf[VAR_1]);

    return VAR_2;
}
