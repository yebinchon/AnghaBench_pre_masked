
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {TYPE_1__* channels; } ;
struct TYPE_6__ {TYPE_5__ tmp_pkt; } ;
typedef TYPE_2__ StrDemuxContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0)
{
    StrDemuxContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;
    for(VAR_2=0; VAR_2<32; VAR_2++){
        if(VAR_1->channels[VAR_2].tmp_pkt.data)
            FUNC_0(&VAR_1->channels[VAR_2].tmp_pkt);
    }

    return 0;
}
