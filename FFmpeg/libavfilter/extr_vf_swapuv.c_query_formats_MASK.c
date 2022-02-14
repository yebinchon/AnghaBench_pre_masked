
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0)
{
    AVFilterFormats *VAR_1 = ((void*)0);
    int VAR_2, VAR_3;

    for (VAR_2 = 0; FUNC_0(VAR_2); VAR_2++) {
        const AVPixFmtDescriptor *VAR_4 = FUNC_0(VAR_2);
        if (FUNC_3(VAR_4) && (VAR_3 = FUNC_1(&VAR_1, VAR_2)) < 0)
            return VAR_3;
    }

    return FUNC_2(VAR_0, VAR_1);
}
