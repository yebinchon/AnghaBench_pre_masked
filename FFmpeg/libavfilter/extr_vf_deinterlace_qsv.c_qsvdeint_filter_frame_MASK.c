
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mfxFrameSurface1 ;
struct TYPE_3__ {int * dst; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int **) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;

    mfxFrameSurface1 *VAR_4;
    int VAR_5;

    VAR_5 = FUNC_2(VAR_3, VAR_2, &VAR_4);
    if (VAR_5 < 0) {
        FUNC_0(&VAR_2);
        return VAR_5;
    }

    do {
        VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4);
        if (VAR_5 < 0)
            return VAR_5;
    } while (VAR_5 == VAR_0);

    return 0;
}
