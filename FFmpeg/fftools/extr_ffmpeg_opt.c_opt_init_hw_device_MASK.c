
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_1, const char *VAR_2, const char *VAR_3)
{
    if (!FUNC_5(VAR_3, "list")) {
        enum AVHWDeviceType VAR_4 = VAR_0;
        FUNC_4("Supported hardware device types:\n");
        while ((VAR_4 = FUNC_1(VAR_4)) !=
               VAR_0)
            FUNC_4("%s\n", FUNC_0(VAR_4));
        FUNC_4("\n");
        FUNC_2(0);
    } else {
        return FUNC_3(VAR_3, ((void*)0));
    }
}
