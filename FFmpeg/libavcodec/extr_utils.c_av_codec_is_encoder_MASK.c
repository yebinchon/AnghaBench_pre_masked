
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ send_frame; scalar_t__ encode2; scalar_t__ encode_sub; } ;
typedef TYPE_1__ AVCodec ;



int FUNC_0(const AVCodec *VAR_0)
{
    return VAR_0 && (VAR_0->encode_sub || VAR_0->encode2 ||VAR_0->send_frame);
}
