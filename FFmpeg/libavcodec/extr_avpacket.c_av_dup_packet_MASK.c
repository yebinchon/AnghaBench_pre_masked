
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data; int buf; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_1(AVPacket *VAR_0)
{
    AVPacket VAR_1;

    if (!VAR_0->buf && VAR_0->data) {
        VAR_1 = *VAR_0;
        return FUNC_0(VAR_0, &VAR_1, 1);
    }
    return 0;
}
