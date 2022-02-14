
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * last; int avgraph; } ;
typedef TYPE_1__ hb_avfilter_graph_t ;
typedef int AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int **,int ,char const*,char const*,int *,int ) ;
 int FUNC_3 (int *,int ,int *,int ) ;

__attribute__((used)) static AVFilterContext * FUNC_4( hb_avfilter_graph_t * VAR_0,
                                        const char * VAR_1, const char * VAR_2)
{
    AVFilterContext * VAR_3;
    int VAR_4;

    VAR_4 = FUNC_2(&VAR_3, FUNC_1(VAR_1),
                                          VAR_1, VAR_2, ((void*)0), VAR_0->avgraph);
    if (VAR_4 < 0)
    {
        return ((void*)0);
    }
    if (VAR_0->last != ((void*)0))
    {
        VAR_4 = FUNC_3(VAR_0->last, 0, VAR_3, 0);
        if (VAR_4 < 0)
        {
            FUNC_0(VAR_3);
            return ((void*)0);
        }
    }
    VAR_0->last = VAR_3;

    return VAR_3;
}
