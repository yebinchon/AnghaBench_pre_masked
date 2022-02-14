
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ota_seq; } ;
typedef TYPE_1__ esp_ota_select_entry_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;

int FUNC_3(const esp_ota_select_entry_t *VAR_1, bool *VAR_2, bool VAR_3)
{
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
        return -1;
    }
    int VAR_4 = -1;
    if (VAR_2[0] && VAR_2[1]) {
        int VAR_5 = (VAR_3 == 1) ? FUNC_1(VAR_1[0].ota_seq, VAR_1[1].ota_seq) : FUNC_2(VAR_1[0].ota_seq, VAR_1[1].ota_seq);
        if (VAR_5 == VAR_1[0].ota_seq) {
            VAR_4 = 0;
        } else {
            VAR_4 = 1;
        }
        FUNC_0(VAR_0, "Both OTA copies are valid");
    } else {
        for (int VAR_6 = 0; VAR_6 < 2; ++VAR_6) {
            if (VAR_2[VAR_6]) {
                VAR_4 = VAR_6;
                FUNC_0(VAR_0, "Only otadata[%d] is valid", VAR_6);
                break;
            }
        }
    }
    return VAR_4;
}
