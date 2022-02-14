
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterFormats ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int **,int) ;

AVFilterFormats *FUNC_3(void)
{
    AVFilterFormats *VAR_0 = ((void*)0);
    int VAR_1;

    for (VAR_1 = 0; FUNC_0(VAR_1)>0; VAR_1++)
        if (FUNC_1(VAR_1))
            if (FUNC_2(&VAR_0, VAR_1) < 0)
                return ((void*)0);

    return VAR_0;
}
