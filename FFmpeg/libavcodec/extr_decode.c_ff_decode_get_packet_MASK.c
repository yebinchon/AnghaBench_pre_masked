
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* codec; TYPE_3__* internal; } ;
struct TYPE_16__ {int draining; int compat_decode_consumed; } ;
struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_14__ {scalar_t__ receive_frame; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecInternal ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

int FUNC_4(AVCodecContext *VAR_1, AVPacket *VAR_2)
{
    AVCodecInternal *VAR_3 = VAR_1->internal;
    int VAR_4;

    if (VAR_3->draining)
        return VAR_0;

    VAR_4 = FUNC_2(VAR_1, VAR_2);
    if (VAR_4 == VAR_0)
        VAR_3->draining = 1;
    if (VAR_4 < 0)
        return VAR_4;

    VAR_4 = FUNC_3(VAR_1->internal, VAR_2);
    if (VAR_4 < 0)
        goto finish;

    VAR_4 = FUNC_0(VAR_1, VAR_2);
    if (VAR_4 < 0)
        goto finish;

    if (VAR_1->codec->receive_frame)
        VAR_3->compat_decode_consumed += VAR_2->size;

    return 0;
finish:
    FUNC_1(VAR_2);
    return VAR_4;
}
