
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int avpkt; } ;
struct TYPE_11__ {TYPE_1__ pkt; } ;
struct TYPE_10__ {int nb_streams; TYPE_5__** asf_st; TYPE_2__* asf_sd; } ;
struct TYPE_9__ {TYPE_4__* priv_data; } ;
struct TYPE_8__ {int asf_met; } ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASFContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__**) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1)
{
    ASFContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        FUNC_0(&VAR_2->asf_sd[VAR_3].asf_met);
        if (VAR_3 < VAR_2->nb_streams) {
            FUNC_2(&VAR_2->asf_st[VAR_3]->pkt.avpkt);
            FUNC_1(&VAR_2->asf_st[VAR_3]);
        }
    }

    VAR_2->nb_streams = 0;
    return 0;
}
