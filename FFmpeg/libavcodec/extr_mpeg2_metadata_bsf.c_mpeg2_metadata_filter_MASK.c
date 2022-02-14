
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int cbc; int fragment; } ;
typedef TYPE_1__ MPEG2MetadataContext ;
typedef int CodedBitstreamFragment ;
typedef int AVPacket ;
typedef TYPE_2__ AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_7(AVBSFContext *VAR_1, AVPacket *VAR_2)
{
    MPEG2MetadataContext *VAR_3 = VAR_1->priv_data;
    CodedBitstreamFragment *VAR_4 = &VAR_3->fragment;
    int VAR_5;

    VAR_5 = FUNC_2(VAR_1, VAR_2);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_5 = FUNC_4(VAR_3->cbc, VAR_4, VAR_2);
    if (VAR_5 < 0) {
        FUNC_0(VAR_1, VAR_0, "Failed to read packet.\n");
        goto fail;
    }

    VAR_5 = FUNC_6(VAR_1, VAR_4);
    if (VAR_5 < 0) {
        FUNC_0(VAR_1, VAR_0, "Failed to update frame fragment.\n");
        goto fail;
    }

    VAR_5 = FUNC_5(VAR_3->cbc, VAR_2, VAR_4);
    if (VAR_5 < 0) {
        FUNC_0(VAR_1, VAR_0, "Failed to write packet.\n");
        goto fail;
    }

    VAR_5 = 0;
fail:
    FUNC_3(VAR_3->cbc, VAR_4);

    if (VAR_5 < 0)
        FUNC_1(VAR_2);

    return VAR_5;
}
