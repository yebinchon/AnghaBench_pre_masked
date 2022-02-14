
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef char gchar ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_1(int16_t VAR_6, const gchar* VAR_7, bool* VAR_8) {
    if (VAR_6 == 3) {
        VAR_8[VAR_2] = 1;
        if(VAR_5)
            FUNC_0(VAR_4, "%s used for determining architecture i386\n", VAR_7);
    }

    if (VAR_6 == 62) {
        VAR_8[VAR_3] = 1;
        if(VAR_5)
            FUNC_0(VAR_4, "%s used for determining architecture x86_64\n", VAR_7);
    }

    if (VAR_6 == 40) {
        VAR_8[VAR_1] = 1;
        if(VAR_5)
            FUNC_0(VAR_4, "%s used for determining architecture armhf\n", VAR_7);
    }

    if (VAR_6 == 183) {
        VAR_8[VAR_0] = 1;
        if(VAR_5)
            FUNC_0(VAR_4, "%s used for determining architecture aarch64\n", VAR_7);
    }
}
