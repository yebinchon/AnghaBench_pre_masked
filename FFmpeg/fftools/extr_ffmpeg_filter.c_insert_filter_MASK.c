
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * graph; } ;
typedef int AVFilterGraph ;
typedef TYPE_1__ AVFilterContext ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__**,int ,char const*,char const*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(AVFilterContext **VAR_0, int *VAR_1,
                         const char *VAR_2, const char *VAR_3)
{
    AVFilterGraph *VAR_4 = (*VAR_0)->graph;
    AVFilterContext *VAR_5;
    int VAR_6;

    VAR_6 = FUNC_1(&VAR_5,
                                       FUNC_0(VAR_2),
                                       VAR_2, VAR_3, ((void*)0), VAR_4);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_6 = FUNC_2(*VAR_0, *VAR_1, VAR_5, 0);
    if (VAR_6 < 0)
        return VAR_6;

    *VAR_0 = VAR_5;
    *VAR_1 = 0;
    return 0;
}
