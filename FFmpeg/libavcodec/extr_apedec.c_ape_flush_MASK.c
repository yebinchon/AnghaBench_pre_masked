
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ samples; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ APEContext ;



__attribute__((used)) static void FUNC_0(AVCodecContext *VAR_0)
{
    APEContext *VAR_1 = VAR_0->priv_data;
    VAR_1->samples= 0;
}
