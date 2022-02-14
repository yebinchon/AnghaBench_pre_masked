
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int time_base_in; int par_in; } ;
struct TYPE_11__ {int time_base; int codecpar; TYPE_2__* internal; } ;
struct TYPE_9__ {int inited; int pkt; TYPE_6__* bsf; } ;
struct TYPE_10__ {TYPE_1__ extract_extradata; } ;
typedef TYPE_2__ AVStreamInternal ;
typedef TYPE_3__ AVStream ;
typedef int AVBitStreamFilter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*,TYPE_6__**) ;
 int FUNC_2 (TYPE_6__**) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(AVStream *VAR_1)
{
    AVStreamInternal *VAR_2 = VAR_1->internal;
    const AVBitStreamFilter *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_3("extract_extradata");
    if (!VAR_3)
        goto finish;


    VAR_4 = FUNC_8(VAR_1);
    if (!VAR_4)
        goto finish;

    VAR_2->extract_extradata.pkt = FUNC_5();
    if (!VAR_2->extract_extradata.pkt)
        return FUNC_0(VAR_0);

    VAR_4 = FUNC_1(VAR_3, &VAR_2->extract_extradata.bsf);
    if (VAR_4 < 0)
        goto fail;

    VAR_4 = FUNC_7(VAR_2->extract_extradata.bsf->par_in,
                                  VAR_1->codecpar);
    if (VAR_4 < 0)
        goto fail;

    VAR_2->extract_extradata.bsf->time_base_in = VAR_1->time_base;

    VAR_4 = FUNC_4(VAR_2->extract_extradata.bsf);
    if (VAR_4 < 0)
        goto fail;

finish:
    VAR_2->extract_extradata.inited = 1;

    return 0;
fail:
    FUNC_2(&VAR_2->extract_extradata.bsf);
    FUNC_6(&VAR_2->extract_extradata.pkt);
    return VAR_4;
}
