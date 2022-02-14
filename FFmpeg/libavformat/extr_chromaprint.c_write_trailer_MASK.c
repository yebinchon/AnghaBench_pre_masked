
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int fp_format; int algorithm; int ctx; } ;
typedef TYPE_1__ ChromaprintMuxContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int,int ,void**,int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void**,int*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_2)
{
    ChromaprintMuxContext *VAR_3 = VAR_2->priv_data;
    AVIOContext *VAR_4 = VAR_2->pb;
    void *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    int VAR_7, VAR_8, VAR_9 = FUNC_0(VAR_1);

    if (!FUNC_5(VAR_3->ctx)) {
        FUNC_1(VAR_2, VAR_0, "Failed to generate fingerprint\n");
        goto fail;
    }

    if (!FUNC_6(VAR_3->ctx, &VAR_5, &VAR_7)) {
        FUNC_1(VAR_2, VAR_0, "Failed to retrieve fingerprint\n");
        goto fail;
    }

    switch (VAR_3->fp_format) {
    case 128:
        FUNC_2(VAR_4, VAR_5, VAR_7 * 4);
        break;
    case 129:
    case 130:
        if (!FUNC_4(VAR_5, VAR_7, VAR_3->algorithm, &VAR_6, &VAR_8,
                                            VAR_3->fp_format == 130)) {
            FUNC_1(VAR_2, VAR_0, "Failed to encode fingerprint\n");
            goto fail;
        }
        FUNC_2(VAR_4, VAR_6, VAR_8);
        break;
    }

    VAR_9 = 0;
fail:
    if (VAR_5)
        FUNC_3(VAR_5);
    if (VAR_6)
        FUNC_3(VAR_6);
    FUNC_7(VAR_3);
    return VAR_9;
}
