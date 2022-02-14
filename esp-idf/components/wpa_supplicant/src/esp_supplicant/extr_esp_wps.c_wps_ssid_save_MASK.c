
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ ssid_len; scalar_t__* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int,int) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__*) ;

int
FUNC_5(u8 *VAR_4, u8 VAR_5)
{
    u8 *VAR_6;

    if (!VAR_4 || !VAR_3) {
        return VAR_0;
    }

    FUNC_1(VAR_3->ssid, 0x00, sizeof(VAR_3->ssid));
    FUNC_0(VAR_3->ssid, VAR_4, VAR_5);
    VAR_3->ssid_len = VAR_5;

    VAR_6 = (u8 *)FUNC_3(VAR_5 + 1);
    if (VAR_6) {
        FUNC_0(VAR_6, VAR_4, VAR_5);
        FUNC_4(VAR_2, "WPS: ssid[%s]", VAR_6);
        FUNC_2(VAR_6);
    }
    return VAR_1;
}
