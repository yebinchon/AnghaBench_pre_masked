
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;


 int FUNC_0 (char**) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,size_t,char*,char const*,int) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(enum AVHWDeviceType VAR_0)
{



    const char *VAR_1 = FUNC_1(VAR_0);
    char *VAR_2;
    size_t VAR_3;
    int VAR_4, VAR_5 = 1000;
    VAR_3 = FUNC_5(VAR_1);
    VAR_2 = FUNC_2(VAR_3 + 4);
    if (!VAR_2)
        return ((void*)0);
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        FUNC_4(VAR_2, VAR_3 + 4, "%s%d", VAR_1, VAR_4);
        if (!FUNC_3(VAR_2))
            break;
    }
    if (VAR_4 >= VAR_5) {
        FUNC_0(&VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}
