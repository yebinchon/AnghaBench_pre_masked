
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,char*,int,...) ;

int FUNC_3(void)
{
    bool VAR_6 = 0;
    wifi_mode_t VAR_7;
    int VAR_8;

    VAR_8 = FUNC_0(&VAR_7);
    if (VAR_2 != VAR_8) {
        FUNC_2(VAR_3, "wps check wifi mode: failed to get wifi mode ret=%d", VAR_8);
        return VAR_1;
    }

    VAR_8 = FUNC_1(&VAR_6);
    if (VAR_2 != VAR_8) {
        FUNC_2(VAR_3, "wps check wifi mode: failed to get sniffer mode ret=%d", VAR_8);
        return VAR_1;
    }

    if (VAR_7 == VAR_4 || VAR_7 == VAR_5 || VAR_6 == 1) {
        FUNC_2(VAR_3, "wps check wifi mode: wrong wifi mode=%d sniffer=%d", VAR_7, VAR_6);
        return VAR_0;
    }

    return VAR_2;
}
