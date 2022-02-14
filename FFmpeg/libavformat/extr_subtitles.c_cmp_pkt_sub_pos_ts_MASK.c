
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos; scalar_t__ pts; } ;
typedef TYPE_1__ AVPacket ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const AVPacket *VAR_2 = VAR_0;
    const AVPacket *VAR_3 = VAR_1;
    if (VAR_2->pos == VAR_3->pos) {
        if (VAR_2->pts == VAR_3->pts)
            return 0;
        return VAR_2->pts > VAR_3->pts ? 1 : -1;
    }
    return VAR_2->pos > VAR_3->pos ? 1 : -1;
}
