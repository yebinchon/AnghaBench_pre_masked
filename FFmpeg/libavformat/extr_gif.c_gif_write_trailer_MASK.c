
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int prev_pkt; int have_end; } ;
typedef TYPE_1__ GIFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2)
{
    GIFContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;

    if (!VAR_3->prev_pkt)
        return FUNC_0(VAR_0);

    FUNC_3(VAR_2, ((void*)0));

    if (!VAR_3->have_end)
        FUNC_2(VAR_4, VAR_1);
    FUNC_1(&VAR_3->prev_pkt);

    return 0;
}
