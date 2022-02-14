
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t spiffs_check_type ;
typedef size_t spiffs_check_report ;
typedef int spiffs ;


 int FUNC_0 (int ,char*,char const*,char const*,int ,int ) ;
 int FUNC_1 (int ,char*,char const*,int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;

void FUNC_2(spiffs *VAR_2, spiffs_check_type VAR_3,
                            spiffs_check_report VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
    static const char * VAR_7[3] = {
        "LOOKUP",
        "INDEX",
        "PAGE"
    };

    static const char * VAR_8[7] = {
        "PROGRESS",
        "ERROR",
        "FIX INDEX",
        "FIX LOOKUP",
        "DELETE ORPHANED INDEX",
        "DELETE PAGE",
        "DELETE BAD FILE"
    };

    if (VAR_4 != VAR_0) {
        FUNC_0(VAR_1, "CHECK: type:%s, report:%s, %x:%x", VAR_7[VAR_3],
                              VAR_8[VAR_4], VAR_5, VAR_6);
    } else {
        FUNC_1(VAR_1, "CHECK PROGRESS: report:%s, %x:%x",
                              VAR_8[VAR_4], VAR_5, VAR_6);
    }
}
