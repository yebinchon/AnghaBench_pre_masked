
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVFilterContext ;


 int FUNC_0 (int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AVFrame *VAR_4 = VAR_1;
    const int VAR_5 = (VAR_4->channels * VAR_2) / VAR_3;
    const int VAR_6 = (VAR_4->channels * (VAR_2+1)) / VAR_3;

    for (int VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++) {
        FUNC_0(VAR_0, VAR_4, VAR_7);
    }

    return 0;
}
