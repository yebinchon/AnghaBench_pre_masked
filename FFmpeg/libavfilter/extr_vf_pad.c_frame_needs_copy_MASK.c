
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* buf; } ;
typedef int PadContext ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(PadContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2;

    if (!FUNC_0(VAR_1))
        return 1;

    for (VAR_2 = 0; VAR_2 < 4 && VAR_1->buf[VAR_2]; VAR_2++)
        if (FUNC_1(VAR_0, VAR_1, VAR_1->buf[VAR_2]))
            return 1;
    return 0;
}
