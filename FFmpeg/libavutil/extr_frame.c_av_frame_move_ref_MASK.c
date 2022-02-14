
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ width; scalar_t__ height; scalar_t__ channels; scalar_t__ extended_data; scalar_t__ data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(AVFrame *VAR_0, AVFrame *VAR_1)
{
    FUNC_0(VAR_0->width == 0 && VAR_0->height == 0);
    FUNC_0(VAR_0->channels == 0);

    *VAR_0 = *VAR_1;
    if (VAR_1->extended_data == VAR_1->data)
        VAR_0->extended_data = VAR_0->data;
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
    FUNC_1(VAR_1);
}
