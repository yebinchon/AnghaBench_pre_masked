
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_filters; int * filters; int * filter_frame; } ;
typedef TYPE_1__ InputStream ;
typedef int AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(InputStream *VAR_2, AVFrame *VAR_3)
{
    int VAR_4, VAR_5;
    AVFrame *VAR_6;

    FUNC_0(VAR_2->nb_filters > 0);
    for (VAR_4 = 0; VAR_4 < VAR_2->nb_filters; VAR_4++) {
        if (VAR_4 < VAR_2->nb_filters - 1) {
            VAR_6 = VAR_2->filter_frame;
            VAR_5 = FUNC_2(VAR_6, VAR_3);
            if (VAR_5 < 0)
                break;
        } else
            VAR_6 = VAR_3;
        VAR_5 = FUNC_4(VAR_2->filters[VAR_4], VAR_6);
        if (VAR_5 == VAR_0)
            VAR_5 = 0;
        if (VAR_5 < 0) {
            FUNC_3(((void*)0), VAR_1,
                   "Failed to inject frame into filter network: %s\n", FUNC_1(VAR_5));
            break;
        }
    }
    return VAR_5;
}
