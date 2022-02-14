
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct wifi_ssid {int len; int ssid; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 struct wifi_ssid* FUNC_4 () ;
 int FUNC_5 (char*,char*,int ,int ,char*,int ,int ) ;

int FUNC_6(uint8_t *VAR_0)
{
    int VAR_1 = 0;
    struct wifi_ssid *VAR_2 = FUNC_4();
    u8 VAR_3[6];

    FUNC_0(0, VAR_3);
    VAR_1 = FUNC_5((char *)VAR_3, (char *)VAR_0, FUNC_2(), FUNC_1(),
                (char *)FUNC_3(), VAR_2->ssid, VAR_2->len);
    return VAR_1;
}
