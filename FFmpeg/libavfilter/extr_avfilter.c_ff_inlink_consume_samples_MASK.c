
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fifo; scalar_t__ status_in; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;
 int FUNC_5 (TYPE_1__*,unsigned int,unsigned int,int **) ;

int FUNC_6(AVFilterLink *VAR_0, unsigned VAR_1, unsigned VAR_2,
                            AVFrame **VAR_3)
{
    AVFrame *VAR_4;
    int VAR_5;

    FUNC_1(VAR_1);
    *VAR_3 = ((void*)0);
    if (!FUNC_4(VAR_0, VAR_1))
        return 0;
    if (VAR_0->status_in)
        VAR_1 = FUNC_0(VAR_1, FUNC_3(&VAR_0->fifo));
    VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, &VAR_4);
    if (VAR_5 < 0)
        return VAR_5;
    FUNC_2(VAR_0, VAR_4);
    *VAR_3 = VAR_4;
    return 1;
}
