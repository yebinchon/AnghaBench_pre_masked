
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_5__ {TYPE_4__ vpkt; } ;
typedef TYPE_1__ Wc3DemuxContext ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    Wc3DemuxContext *VAR_1 = VAR_0->priv_data;

    if (VAR_1->vpkt.size > 0)
        FUNC_0(&VAR_1->vpkt);

    return 0;
}
