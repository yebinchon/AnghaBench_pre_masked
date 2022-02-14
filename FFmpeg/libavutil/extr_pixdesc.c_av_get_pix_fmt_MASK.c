
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name2 ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,int,char*,char const*,char*) ;
 int FUNC_3 (char const*,char*) ;

enum AVPixelFormat FUNC_4(const char *VAR_2)
{
    enum AVPixelFormat VAR_3;

    if (!FUNC_3(VAR_2, "rgb32"))
        VAR_2 = FUNC_0("argb", "bgra");
    else if (!FUNC_3(VAR_2, "bgr32"))
        VAR_2 = FUNC_0("abgr", "rgba");

    VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 == VAR_0) {
        char VAR_4[32];

        FUNC_2(VAR_4, sizeof(VAR_4), "%s%s", VAR_2, FUNC_0("be", "le"));
        VAR_3 = FUNC_1(VAR_4);
    }





    return VAR_3;
}
