
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFrame ;


 int * FUNC_0 () ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (int *,int const*) ;

AVFrame *FUNC_3(const AVFrame *VAR_0)
{
    AVFrame *VAR_1 = FUNC_0();

    if (!VAR_1)
        return ((void*)0);

    if (FUNC_2(VAR_1, VAR_0) < 0)
        FUNC_1(&VAR_1);

    return VAR_1;
}
