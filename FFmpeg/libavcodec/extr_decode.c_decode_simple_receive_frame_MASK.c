
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * buf; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0, AVFrame *VAR_1)
{
    int VAR_2;

    while (!VAR_1->buf[0]) {
        VAR_2 = FUNC_0(VAR_0, VAR_1);
        if (VAR_2 < 0)
            return VAR_2;
    }

    return 0;
}
