
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int extradata_parsed; int new_idr; scalar_t__ idr_pps_seen; scalar_t__ idr_sps_seen; } ;
typedef TYPE_1__ H264BSFContext ;
typedef TYPE_2__ AVBSFContext ;



__attribute__((used)) static void FUNC_0(AVBSFContext *VAR_0)
{
    H264BSFContext *VAR_1 = VAR_0->priv_data;

    VAR_1->idr_sps_seen = 0;
    VAR_1->idr_pps_seen = 0;
    VAR_1->new_idr = VAR_1->extradata_parsed;
}
