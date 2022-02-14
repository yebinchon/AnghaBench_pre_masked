
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(long VAR_0, int VAR_1)
{
    char VAR_2[17] = {0};
    char VAR_3[17] = "DST";
    char VAR_4[33] = {0};

    if(VAR_0 % 3600){
        FUNC_2(VAR_2, "UTC%ld:%02u:%02u", VAR_0 / 3600, FUNC_0((VAR_0 % 3600) / 60), FUNC_0(VAR_0 % 60));
    } else {
        FUNC_2(VAR_2, "UTC%ld", VAR_0 / 3600);
    }
    if(VAR_1 != 3600){
        long VAR_5 = VAR_0 - VAR_1;
        if(VAR_5 % 3600){
            FUNC_2(VAR_3, "DST%ld:%02u:%02u", VAR_5 / 3600, FUNC_0((VAR_5 % 3600) / 60), FUNC_0(VAR_5 % 60));
        } else {
            FUNC_2(VAR_3, "DST%ld", VAR_5 / 3600);
        }
    }
    FUNC_2(VAR_4, "%s%s", VAR_2, VAR_3);
    FUNC_1("TZ", VAR_4, 1);
    FUNC_3();
}
