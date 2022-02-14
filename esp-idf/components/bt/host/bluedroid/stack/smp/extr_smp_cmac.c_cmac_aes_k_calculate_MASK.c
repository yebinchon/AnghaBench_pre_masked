
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* param_buf; } ;
typedef TYPE_1__ tSMP_ENC ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {scalar_t__ round; int * text; } ;
typedef int BT_OCTET16 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int *,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__*) ;

__attribute__((used)) static BOOLEAN FUNC_5(BT_OCTET16 VAR_4, UINT8 *VAR_5, UINT16 VAR_6)
{
    tSMP_ENC VAR_7;
    UINT8 VAR_8 = 1, VAR_9 = 0;
    UINT8 VAR_10[16] = {0};
    UINT8 *VAR_11;

    FUNC_2 ("cmac_aes_k_calculate ");

    while (VAR_8 <= VAR_3.round) {
        FUNC_4(&VAR_3.text[(VAR_3.round - VAR_8)*VAR_0], VAR_10);

        if (!FUNC_0(VAR_4, VAR_0, &VAR_3.text[(VAR_3.round - VAR_8)*VAR_0], VAR_0, &VAR_7)) {
            VAR_9 = 1;
            break;
        }

        FUNC_3(VAR_10, VAR_7.param_buf, VAR_0);
        VAR_8 ++;
    }

    if (!VAR_9) {
        VAR_11 = VAR_7.param_buf + (VAR_0 - VAR_6);
        FUNC_3(VAR_5, VAR_11, VAR_6);

        FUNC_1("tlen = %d p_mac = %p", VAR_6, *VAR_11);
        FUNC_1("p_mac[0] = 0x%02x p_mac[1] = 0x%02x p_mac[2] = 0x%02x p_mac[3] = 0x%02x",
                        *VAR_11, *(VAR_11 + 1), *(VAR_11 + 2), *(VAR_11 + 3));
        FUNC_1("p_mac[4] = 0x%02x p_mac[5] = 0x%02x p_mac[6] = 0x%02x p_mac[7] = 0x%02x",
                        *(VAR_11 + 4), *(VAR_11 + 5), *(VAR_11 + 6), *(VAR_11 + 7));

        return VAR_2;

    } else {
        return VAR_1;
    }
}
