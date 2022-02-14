
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ got_keyframe; } ;
typedef TYPE_1__ AVSContext ;
typedef TYPE_2__ AVCodecContext ;



__attribute__((used)) static void FUNC_0(AVCodecContext * VAR_0)
{
    AVSContext *VAR_1 = VAR_0->priv_data;
    VAR_1->got_keyframe = 0;
}
