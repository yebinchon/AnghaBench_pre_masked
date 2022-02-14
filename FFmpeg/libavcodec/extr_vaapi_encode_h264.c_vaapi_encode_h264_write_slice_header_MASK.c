
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VAAPIEncodeSlice ;
typedef int VAAPIEncodePicture ;
struct TYPE_6__ {int cbc; int raw_slice; scalar_t__ aud_needed; int raw_aud; int current_access_unit; } ;
typedef TYPE_1__ VAAPIEncodeH264Context ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef int CodedBitstreamFragment ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,char*,size_t*,int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0,
                                                VAAPIEncodePicture *VAR_1,
                                                VAAPIEncodeSlice *VAR_2,
                                                char *VAR_3, size_t *VAR_4)
{
    VAAPIEncodeH264Context *VAR_5 = VAR_0->priv_data;
    CodedBitstreamFragment *VAR_6 = &VAR_5->current_access_unit;
    int VAR_7;

    if (VAR_5->aud_needed) {
        VAR_7 = FUNC_1(VAR_0, VAR_6, &VAR_5->raw_aud);
        if (VAR_7 < 0)
            goto fail;
        VAR_5->aud_needed = 0;
    }

    VAR_7 = FUNC_1(VAR_0, VAR_6, &VAR_5->raw_slice);
    if (VAR_7 < 0)
        goto fail;

    VAR_7 = FUNC_2(VAR_0, VAR_3, VAR_4, VAR_6);
fail:
    FUNC_0(VAR_5->cbc, VAR_6);
    return VAR_7;
}
