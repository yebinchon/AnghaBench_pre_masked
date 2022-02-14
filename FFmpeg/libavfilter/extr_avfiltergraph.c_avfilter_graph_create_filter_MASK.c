
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterGraph ;
typedef int AVFilterContext ;
typedef int AVFilter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int const*,char const*) ;
 int FUNC_3 (int *,char const*) ;

int FUNC_4(AVFilterContext **VAR_1, const AVFilter *VAR_2,
                                 const char *VAR_3, const char *VAR_4, void *VAR_5,
                                 AVFilterGraph *VAR_6)
{
    int VAR_7;

    *VAR_1 = FUNC_2(VAR_6, VAR_2, VAR_3);
    if (!*VAR_1)
        return FUNC_0(VAR_0);

    VAR_7 = FUNC_3(*VAR_1, VAR_4);
    if (VAR_7 < 0)
        goto fail;

    return 0;

fail:
    if (*VAR_1)
        FUNC_1(*VAR_1);
    *VAR_1 = ((void*)0);
    return VAR_7;
}
