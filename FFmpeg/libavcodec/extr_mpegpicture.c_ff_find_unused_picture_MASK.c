
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ needs_realloc; } ;
typedef TYPE_1__ Picture ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;

int FUNC_3(AVCodecContext *VAR_1, Picture *VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

    if (VAR_4 >= 0 && VAR_4 < VAR_0) {
        if (VAR_2[VAR_4].needs_realloc) {
            VAR_2[VAR_4].needs_realloc = 0;
            FUNC_0(&VAR_2[VAR_4]);
            FUNC_1(VAR_1, &VAR_2[VAR_4]);
        }
    }
    return VAR_4;
}
