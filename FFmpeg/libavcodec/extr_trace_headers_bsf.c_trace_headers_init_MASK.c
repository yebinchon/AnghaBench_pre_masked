
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* cbc; int fragment; } ;
typedef TYPE_1__ TraceHeadersContext ;
struct TYPE_13__ {scalar_t__ extradata; int codec_id; } ;
struct TYPE_12__ {int trace_enable; int trace_level; } ;
struct TYPE_11__ {TYPE_5__* par_in; TYPE_1__* priv_data; } ;
typedef int CodedBitstreamFragment ;
typedef TYPE_2__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__**,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int *,TYPE_5__*) ;

__attribute__((used)) static int FUNC_4(AVBSFContext *VAR_1)
{
    TraceHeadersContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    VAR_3 = FUNC_2(&VAR_2->cbc, VAR_1->par_in->codec_id, VAR_1);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_2->cbc->trace_enable = 1;
    VAR_2->cbc->trace_level = VAR_0;

    if (VAR_1->par_in->extradata) {
        CodedBitstreamFragment *VAR_4 = &VAR_2->fragment;

        FUNC_0(VAR_1, VAR_0, "Extradata\n");

        VAR_3 = FUNC_3(VAR_2->cbc, VAR_4, VAR_1->par_in);

        FUNC_1(VAR_2->cbc, VAR_4);
    }

    return VAR_3;
}
