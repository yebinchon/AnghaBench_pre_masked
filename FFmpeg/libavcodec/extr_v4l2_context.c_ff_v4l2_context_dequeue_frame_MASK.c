
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ done; } ;
typedef TYPE_1__ V4L2Context ;
typedef int V4L2Buffer ;
typedef int AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(V4L2Context* VAR_2, AVFrame* VAR_3, int VAR_4)
{
    V4L2Buffer* VAR_5 = ((void*)0);






    VAR_5 = FUNC_2(VAR_2, VAR_4);
    if (!VAR_5) {
        if (VAR_2->done)
            return VAR_0;

        return FUNC_0(VAR_1);
    }

    return FUNC_1(VAR_3, VAR_5);
}
