
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum HapSectionType { ____Placeholder_HapSectionType } HapSectionType ;
struct TYPE_10__ {int * priv_data; } ;
struct TYPE_9__ {int data; int size; } ;
typedef int HapqaExtractContext ;
typedef int GetByteContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVBSFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (int *,int*,int*) ;

__attribute__((used)) static int FUNC_7(AVBSFContext *VAR_3, AVPacket *VAR_4)
{
    HapqaExtractContext *VAR_5 = VAR_3->priv_data;
    GetByteContext VAR_6;
    int VAR_7;
    enum HapSectionType VAR_8;
    int VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 0;

    VAR_11 = FUNC_5(VAR_3, VAR_4);
    if (VAR_11 < 0)
        return VAR_11;

    FUNC_2(&VAR_6, VAR_4->data, VAR_4->size);
    VAR_11 = FUNC_6(&VAR_6, &VAR_7, &VAR_8);
    if (VAR_11 != 0)
        goto fail;

    if ((VAR_8 & 0x0F) != 0x0D) {
        FUNC_0(VAR_3, VAR_1, "Invalid section type for HAPQA %#04x.\n", VAR_8 & 0x0F);
        VAR_11 = VAR_0;
        goto fail;
    }

    VAR_9 = 4;

    FUNC_3(&VAR_6, VAR_9, VAR_2);

    VAR_11 = FUNC_6(&VAR_6, &VAR_7, &VAR_8);
    if (VAR_11 != 0)
        goto fail;

    VAR_10 = VAR_7 + 4;

    if (FUNC_4(VAR_5, VAR_8) == 0) {
        VAR_9 += 4 + VAR_7;
        FUNC_3(&VAR_6, VAR_9, VAR_2);
        VAR_11 = FUNC_6(&VAR_6, &VAR_7, &VAR_8);
        if (VAR_11 != 0)
            goto fail;

        VAR_10 = VAR_7 + 4;

        if (FUNC_4(VAR_5, VAR_8) == 0){
            FUNC_0(VAR_3, VAR_1, "No valid texture found.\n");
            VAR_11 = VAR_0;
            goto fail;
        }
    }

    VAR_4->data += VAR_9;
    VAR_4->size = VAR_10;

fail:
    if (VAR_11 < 0)
        FUNC_1(VAR_4);
    return VAR_11;
}
