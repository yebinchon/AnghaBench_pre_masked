
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int FFDrawContext ;
typedef int AVFilterFormats ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int **,int) ;
 scalar_t__ FUNC_2 (int *,int,unsigned int) ;

AVFilterFormats *FUNC_3(unsigned VAR_0)
{
    enum AVPixelFormat VAR_1;
    FFDrawContext VAR_2;
    AVFilterFormats *VAR_3 = ((void*)0);
    int VAR_4;

    for (VAR_1 = 0; FUNC_0(VAR_1); VAR_1++)
        if (FUNC_2(&VAR_2, VAR_1, VAR_0) >= 0 &&
            (VAR_4 = FUNC_1(&VAR_3, VAR_1)) < 0)
            return ((void*)0);
    return VAR_3;
}
