
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buffer_pkt; } ;
typedef TYPE_1__ VP9SFSplitContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVBSFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(AVBSFContext *VAR_1)
{
    VP9SFSplitContext *VAR_2 = VAR_1->priv_data;

    VAR_2->buffer_pkt = FUNC_1();
    if (!VAR_2->buffer_pkt)
        return FUNC_0(VAR_0);

    return 0;
}
