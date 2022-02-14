
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct AVSHA {int dummy; } ;
struct TYPE_3__ {int aax_mode; int activation_bytes_size; int audible_fixed_key_size; scalar_t__* file_key; scalar_t__* file_iv; int fc; int aes_decrypt; scalar_t__* audible_fixed_key; scalar_t__* activation_bytes; } ;
typedef TYPE_1__ MOVContext ;
typedef int MOVAtom ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__*,int,scalar_t__*,int) ;
 int FUNC_3 (int ,scalar_t__*,int,int) ;
 int FUNC_4 (struct AVSHA*) ;
 int FUNC_5 (int ,int ,char*,...) ;
 struct AVSHA* FUNC_6 () ;
 int FUNC_7 (struct AVSHA*,scalar_t__*) ;
 int FUNC_8 (struct AVSHA*,int) ;
 int FUNC_9 (struct AVSHA*,scalar_t__*,int) ;
 int FUNC_10 (int *,scalar_t__*,int) ;
 scalar_t__ FUNC_11 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_13(MOVContext *VAR_8, AVIOContext *VAR_9, MOVAtom VAR_10)
{
    uint8_t VAR_11[20];
    uint8_t VAR_12[20];
    uint8_t VAR_13[64];
    uint8_t VAR_14[64];
    uint8_t VAR_15[20];
    uint8_t VAR_16[20];
    struct AVSHA *VAR_17;
    int VAR_18;
    int VAR_19 = 0;
    uint8_t *VAR_20 = VAR_8->activation_bytes;
    uint8_t *VAR_21 = VAR_8->audible_fixed_key;

    VAR_8->aax_mode = 1;

    VAR_17 = FUNC_6();
    if (!VAR_17)
        return FUNC_0(VAR_7);
    VAR_8->aes_decrypt = FUNC_1();
    if (!VAR_8->aes_decrypt) {
        VAR_19 = FUNC_0(VAR_7);
        goto fail;
    }


    FUNC_10(VAR_9, VAR_14, 8);
    FUNC_10(VAR_9, VAR_13, VAR_5);
    FUNC_10(VAR_9, VAR_14, 4);
    FUNC_10(VAR_9, VAR_15, 20);

    FUNC_5(VAR_8->fc, VAR_3, "[aax] file checksum == ");
    for (VAR_18 = 0; VAR_18 < 20; VAR_18++)
        FUNC_5(VAR_8->fc, VAR_3, "%02x", VAR_15[VAR_18]);
    FUNC_5(VAR_8->fc, VAR_3, "\n");


    if (!VAR_20) {
        FUNC_5(VAR_8->fc, VAR_4, "[aax] activation_bytes option is missing!\n");
        VAR_19 = 0;
        goto fail;
    }
    if (VAR_8->activation_bytes_size != 4) {
        FUNC_5(VAR_8->fc, VAR_2, "[aax] activation_bytes value needs to be 4 bytes!\n");
        VAR_19 = FUNC_0(VAR_6);
        goto fail;
    }


    if (VAR_8->audible_fixed_key_size != 16) {
        FUNC_5(VAR_8->fc, VAR_2, "[aax] audible_fixed_key value needs to be 16 bytes!\n");
        VAR_19 = FUNC_0(VAR_6);
        goto fail;
    }


    FUNC_8(VAR_17, 160);
    FUNC_9(VAR_17, VAR_21, 16);
    FUNC_9(VAR_17, VAR_20, 4);
    FUNC_7(VAR_17, VAR_11);
    FUNC_8(VAR_17, 160);
    FUNC_9(VAR_17, VAR_21, 16);
    FUNC_9(VAR_17, VAR_11, 20);
    FUNC_9(VAR_17, VAR_20, 4);
    FUNC_7(VAR_17, VAR_12);
    FUNC_8(VAR_17, 160);
    FUNC_9(VAR_17, VAR_11, 16);
    FUNC_9(VAR_17, VAR_12, 16);
    FUNC_7(VAR_17, VAR_16);
    if (FUNC_11(VAR_16, VAR_15, 20)) {
        FUNC_5(VAR_8->fc, VAR_1, "[aax] mismatch in checksums!\n");
        VAR_19 = VAR_0;
        goto fail;
    }
    FUNC_3(VAR_8->aes_decrypt, VAR_11, 128, 1);
    FUNC_2(VAR_8->aes_decrypt, VAR_14, VAR_13, VAR_5 >> 4, VAR_12, 1);
    for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {

        if (VAR_20[VAR_18] != VAR_14[3 - VAR_18]) {
            FUNC_5(VAR_8->fc, VAR_1, "[aax] error in drm blob decryption!\n");
            VAR_19 = VAR_0;
            goto fail;
        }
    }
    FUNC_12(VAR_8->file_key, VAR_14 + 8, 16);
    FUNC_12(VAR_13, VAR_14 + 26, 16);
    FUNC_8(VAR_17, 160);
    FUNC_9(VAR_17, VAR_13, 16);
    FUNC_9(VAR_17, VAR_8->file_key, 16);
    FUNC_9(VAR_17, VAR_21, 16);
    FUNC_7(VAR_17, VAR_8->file_iv);

fail:
    FUNC_4(VAR_17);

    return VAR_19;
}
