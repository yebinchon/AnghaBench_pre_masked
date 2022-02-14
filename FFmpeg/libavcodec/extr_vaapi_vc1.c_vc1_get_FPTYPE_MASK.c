
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pict_type; } ;
struct TYPE_4__ {int bi_type; TYPE_2__ s; } ;
typedef TYPE_1__ VC1Context ;
typedef TYPE_2__ MpegEncContext ;






__attribute__((used)) static int FUNC_0(const VC1Context *VAR_0)
{
    const MpegEncContext *VAR_1 = &VAR_0->s;
    switch (VAR_1->pict_type) {
    case 129: return 0;
    case 128: return 3;
    case 130: return VAR_0->bi_type ? 7 : 4;
    }
    return 0;
}
