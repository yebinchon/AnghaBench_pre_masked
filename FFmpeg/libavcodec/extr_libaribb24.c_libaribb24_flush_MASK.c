
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags2; TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ read_order; } ;
typedef TYPE_1__ Libaribb24Context ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(AVCodecContext *VAR_1)
{
    Libaribb24Context *VAR_2 = VAR_1->priv_data;
    if (!(VAR_1->flags2 & VAR_0))
        VAR_2->read_order = 0;
}
