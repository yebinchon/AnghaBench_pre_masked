
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cbc; int gop_header; int sequence_display_extension; int sequence_extension; int sequence_header; int current_fragment; } ;
typedef TYPE_1__ VAAPIEncodeMPEG2Context ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef int CodedBitstreamFragment ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int *) ;
 int FUNC_2 (TYPE_2__*,char*,size_t*,int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_3,
                                                    char *VAR_4, size_t *VAR_5)
{
    VAAPIEncodeMPEG2Context *VAR_6 = VAR_3->priv_data;
    CodedBitstreamFragment *VAR_7 = &VAR_6->current_fragment;
    int VAR_8;

    VAR_8 = FUNC_1(VAR_3, VAR_7, VAR_2,
                                        &VAR_6->sequence_header);
    if (VAR_8 < 0)
        goto fail;

    VAR_8 = FUNC_1(VAR_3, VAR_7, VAR_0,
                                        &VAR_6->sequence_extension);
    if (VAR_8 < 0)
        goto fail;

    VAR_8 = FUNC_1(VAR_3, VAR_7, VAR_0,
                                        &VAR_6->sequence_display_extension);
    if (VAR_8 < 0)
        goto fail;

    VAR_8 = FUNC_1(VAR_3, VAR_7, VAR_1,
                                        &VAR_6->gop_header);
    if (VAR_8 < 0)
        goto fail;

    VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7);
fail:
    FUNC_0(VAR_6->cbc, VAR_7);
    return 0;
}
