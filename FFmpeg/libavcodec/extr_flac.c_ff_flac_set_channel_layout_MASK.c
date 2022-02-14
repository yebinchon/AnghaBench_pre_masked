
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; scalar_t__ channel_layout; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;

void FUNC_1(AVCodecContext *VAR_1)
{
    if (VAR_1->channels <= FUNC_0(VAR_0))
        VAR_1->channel_layout = VAR_0[VAR_1->channels - 1];
    else
        VAR_1->channel_layout = 0;
}
