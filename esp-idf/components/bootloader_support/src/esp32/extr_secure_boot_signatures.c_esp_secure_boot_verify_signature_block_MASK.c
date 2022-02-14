
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ ptrdiff_t ;
struct TYPE_3__ {int signature; scalar_t__ version; } ;
typedef TYPE_1__ esp_secure_boot_sig_block_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int const*,int ,int ,int ) ;

esp_err_t FUNC_4(const esp_secure_boot_sig_block_t *VAR_8, const uint8_t *VAR_9)
{
    ptrdiff_t VAR_10;

    VAR_10 = VAR_6 - VAR_7;
    if (VAR_10 != VAR_4) {
        FUNC_1(VAR_5, "Embedded public verification key has wrong length %d", VAR_10);
        return VAR_2;
    }

    if (VAR_8->version != 0) {
        FUNC_1(VAR_5, "image has invalid signature version field 0x%08x", VAR_8->version);
        return VAR_2;
    }

    FUNC_0(VAR_5, "Verifying secure boot signature");

    bool VAR_11;
    VAR_11 = FUNC_3(VAR_7,
                           VAR_9,
                           VAR_0,
                           VAR_8->signature,
                           FUNC_2());
    FUNC_0(VAR_5, "Verification result %d", VAR_11);
    return VAR_11 ? VAR_3 : VAR_1;
}
