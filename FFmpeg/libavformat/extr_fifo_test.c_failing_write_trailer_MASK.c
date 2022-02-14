
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int write_trailer_ret; } ;
typedef TYPE_1__ FailingMuxerContext ;
typedef TYPE_2__ AVFormatContext ;



__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_0)
{
    FailingMuxerContext *VAR_1 = VAR_0->priv_data;
    return VAR_1->write_trailer_ret;
}
