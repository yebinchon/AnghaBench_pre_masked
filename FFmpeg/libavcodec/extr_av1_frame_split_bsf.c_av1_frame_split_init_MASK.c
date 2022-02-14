
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int extradata_size; } ;
struct TYPE_12__ {int nb_decompose_unit_types; int * decompose_unit_types; } ;
struct TYPE_11__ {TYPE_3__* cbc; int buffer_pkt; int temporal_unit; } ;
struct TYPE_10__ {TYPE_4__* par_in; TYPE_2__* priv_data; } ;
typedef int CodedBitstreamUnitType ;
typedef int CodedBitstreamFragment ;
typedef TYPE_1__ AVBSFContext ;
typedef TYPE_2__ AV1FSplitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__**,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(AVBSFContext *VAR_4)
{
    AV1FSplitContext *VAR_5 = VAR_4->priv_data;
    CodedBitstreamFragment *VAR_6 = &VAR_5->temporal_unit;
    int VAR_7;

    VAR_5->buffer_pkt = FUNC_3();
    if (!VAR_5->buffer_pkt)
        return FUNC_0(VAR_2);

    VAR_7 = FUNC_5(&VAR_5->cbc, VAR_0, VAR_4);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_5->cbc->decompose_unit_types = (CodedBitstreamUnitType*)VAR_3;
    VAR_5->cbc->nb_decompose_unit_types = FUNC_1(VAR_3);

    if (!VAR_4->par_in->extradata_size)
        return 0;

    VAR_7 = FUNC_6(VAR_5->cbc, VAR_6, VAR_4->par_in);
    if (VAR_7 < 0)
        FUNC_2(VAR_4, VAR_1, "Failed to parse extradata.\n");

    FUNC_4(VAR_5->cbc, VAR_6);

    return 0;
}
