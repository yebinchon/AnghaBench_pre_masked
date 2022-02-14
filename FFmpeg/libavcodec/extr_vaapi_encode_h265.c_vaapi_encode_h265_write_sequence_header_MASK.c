
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cbc; int raw_pps; int raw_sps; int raw_vps; scalar_t__ aud_needed; int raw_aud; int current_access_unit; } ;
typedef TYPE_1__ VAAPIEncodeH265Context ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef int CodedBitstreamFragment ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,char*,size_t*,int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0,
                                                   char *VAR_1, size_t *VAR_2)
{
    VAAPIEncodeH265Context *VAR_3 = VAR_0->priv_data;
    CodedBitstreamFragment *VAR_4 = &VAR_3->current_access_unit;
    int VAR_5;

    if (VAR_3->aud_needed) {
        VAR_5 = FUNC_1(VAR_0, VAR_4, &VAR_3->raw_aud);
        if (VAR_5 < 0)
            goto fail;
        VAR_3->aud_needed = 0;
    }

    VAR_5 = FUNC_1(VAR_0, VAR_4, &VAR_3->raw_vps);
    if (VAR_5 < 0)
        goto fail;

    VAR_5 = FUNC_1(VAR_0, VAR_4, &VAR_3->raw_sps);
    if (VAR_5 < 0)
        goto fail;

    VAR_5 = FUNC_1(VAR_0, VAR_4, &VAR_3->raw_pps);
    if (VAR_5 < 0)
        goto fail;

    VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);
fail:
    FUNC_0(VAR_3->cbc, VAR_4);
    return VAR_5;
}
