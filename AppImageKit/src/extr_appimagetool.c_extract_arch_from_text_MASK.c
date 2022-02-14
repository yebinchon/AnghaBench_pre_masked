
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_4(gchar *VAR_6, const gchar* VAR_7, bool* VAR_8) {
    if (VAR_6) {
        VAR_6 = FUNC_2(VAR_6);
        if (VAR_6) {
            FUNC_3(VAR_6, "-", "_");
            FUNC_3(VAR_6, " ", "_");
            if (FUNC_1("i386", VAR_6, 20) == 0
                    || FUNC_1("i486", VAR_6, 20) == 0
                    || FUNC_1("i586", VAR_6, 20) == 0
                    || FUNC_1("i686", VAR_6, 20) == 0
                    || FUNC_1("intel_80386", VAR_6, 20) == 0
                    || FUNC_1("intel_80486", VAR_6, 20) == 0
                    || FUNC_1("intel_80586", VAR_6, 20) == 0
                    || FUNC_1("intel_80686", VAR_6, 20) == 0
                    ) {
                VAR_8[VAR_2] = 1;
                if (VAR_5)
                    FUNC_0(VAR_4, "%s used for determining architecture i386\n", VAR_7);
            } else if (FUNC_1("x86_64", VAR_6, 20) == 0) {
                VAR_8[VAR_3] = 1;
                if (VAR_5)
                    FUNC_0(VAR_4, "%s used for determining architecture x86_64\n", VAR_7);
            } else if (FUNC_1("arm", VAR_6, 20) == 0) {
                VAR_8[VAR_1] = 1;
                if (VAR_5)
                    FUNC_0(VAR_4, "%s used for determining architecture ARM\n", VAR_7);
            } else if (FUNC_1("arm_aarch64", VAR_6, 20) == 0) {
                VAR_8[VAR_0] = 1;
                if (VAR_5)
                    FUNC_0(VAR_4, "%s used for determining architecture ARM aarch64\n", VAR_7);
            }
        }
    }
}
