
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

int FUNC_3(void)
{
    enum AVHWDeviceType VAR_2 = VAR_0;
    int VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_3 = VAR_4 = VAR_5 = 0;
    while (1) {
        VAR_2 = FUNC_0(VAR_2);
        if (VAR_2 == VAR_0)
            break;

        VAR_6 = FUNC_2(VAR_2);
        if (VAR_6 == 0)
            ++VAR_3;
        else if (VAR_6 < 0)
            ++VAR_4;
        else
            ++VAR_5;
    }

    FUNC_1(VAR_1, "Attempted to test %d device types: "
            "%d passed, %d failed, %d skipped.\n",
            VAR_3 + VAR_4 + VAR_5, VAR_3, VAR_4, VAR_5);

    return VAR_4 > 0;
}
