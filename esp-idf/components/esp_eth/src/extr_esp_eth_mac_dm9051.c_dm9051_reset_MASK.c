
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_5__ {int sw_reset_timeout_ms; } ;
typedef TYPE_1__ emac_dm9051_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static esp_err_t FUNC_5(emac_dm9051_t *VAR_7)
{
    esp_err_t VAR_8 = VAR_4;

    FUNC_0(FUNC_2(VAR_7, VAR_0, 0x00) == VAR_4, "write GPR failed", VAR_6, VAR_3);

    FUNC_4(FUNC_3(10));

    uint8_t VAR_9 = VAR_5;
    FUNC_0(FUNC_2(VAR_7, VAR_1, VAR_9) == VAR_4, "write NCR failed", VAR_6, VAR_3);
    uint32_t VAR_10 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_7->sw_reset_timeout_ms / 10; VAR_10++) {
        FUNC_0(FUNC_1(VAR_7, VAR_1, &VAR_9) == VAR_4, "read NCR failed", VAR_6, VAR_3);
        if (!(VAR_9 & VAR_5)) {
            break;
        }
        FUNC_4(FUNC_3(10));
    }
    FUNC_0(VAR_10 < VAR_7->sw_reset_timeout_ms / 10, "reset timeout", VAR_6, VAR_2);
    return VAR_4;
err:
    return VAR_8;
}
