
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* priv_data; TYPE_1__* codec; } ;
struct TYPE_3__ {scalar_t__ priv_class; } ;
typedef TYPE_2__ AVCodecContext ;



__attribute__((used)) static void *FUNC_0(void *VAR_0, void *VAR_1)
{
    AVCodecContext *VAR_2 = VAR_0;
    if (!VAR_1 && VAR_2->codec && VAR_2->codec->priv_class && VAR_2->priv_data)
        return VAR_2->priv_data;
    return ((void*)0);
}
