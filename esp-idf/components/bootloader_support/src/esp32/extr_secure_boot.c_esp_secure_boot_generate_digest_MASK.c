
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ hash_appended; } ;
struct TYPE_5__ {scalar_t__ image_len; TYPE_1__ image; int member_0; } ;
typedef TYPE_2__ esp_image_metadata_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_20 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;

esp_err_t FUNC_10(void)
{
    esp_err_t VAR_21;
    if (FUNC_8()) {
        FUNC_1(VAR_20, "bootloader secure boot is already enabled."
                      " No need to generate digest. continuing..");
        return VAR_19;
    }

    uint32_t VAR_22 = FUNC_3(VAR_1, VAR_11);
    if (VAR_22 != VAR_13 && VAR_22 != VAR_12) {
        FUNC_0(VAR_20, "Unknown/unsupported CODING_SCHEME value 0x%x", VAR_22);
        return VAR_16;
    }


    esp_image_metadata_t VAR_23 = { 0 };
    VAR_21 = FUNC_7(&VAR_23);
    if (VAR_21 != VAR_19) {
        FUNC_0(VAR_20, "bootloader image appears invalid! error %d", VAR_21);
        return VAR_21;
    }


    uint32_t VAR_24 = FUNC_4(VAR_0);
    bool VAR_25 = VAR_24 & VAR_14;
    bool VAR_26 = VAR_24 & VAR_15;
    if (VAR_25 == 0
        && VAR_26 == 0
        && FUNC_4(VAR_2) == 0
        && FUNC_4(VAR_3) == 0
        && FUNC_4(VAR_4) == 0
        && FUNC_4(VAR_5) == 0
        && FUNC_4(VAR_6) == 0
        && FUNC_4(VAR_7) == 0
        && FUNC_4(VAR_8) == 0
        && FUNC_4(VAR_9) == 0) {
        FUNC_1(VAR_20, "Generating new secure boot key...");
        FUNC_6(VAR_10);
        FUNC_5();
    } else {
        FUNC_2(VAR_20, "Using pre-loaded secure boot key in EFUSE block 2");
    }


    FUNC_1(VAR_20, "Generating secure boot digest...");
    uint32_t VAR_27 = VAR_23.image_len;
    if(VAR_23.image.hash_appended) {

        VAR_27 -= VAR_18;
    }
    if (0 == FUNC_9(VAR_27)){
        FUNC_0(VAR_20, "secure boot generation failed");
        return VAR_17;
    }
    FUNC_1(VAR_20, "Digest generation complete.");

    return VAR_19;
}
