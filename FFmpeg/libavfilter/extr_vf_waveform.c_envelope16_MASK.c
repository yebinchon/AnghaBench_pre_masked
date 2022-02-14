
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int envelope; } ;
typedef TYPE_1__ WaveformContext ;
typedef int AVFrame ;


 int FUNC_0 (TYPE_1__*,int *,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(WaveformContext *VAR_0, AVFrame *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_0->envelope == 0) {
        return;
    } else if (VAR_0->envelope == 1) {
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    }
}
