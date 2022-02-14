
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xmlNodePtr ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,char const*) ;

__attribute__((used)) static enum AVMediaType FUNC_3(xmlNodePtr VAR_4)
{
    enum AVMediaType VAR_5 = VAR_2;
    int VAR_6 = 0;
    const char *VAR_7;
    char *VAR_8 = ((void*)0);

    if (VAR_4) {
        for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
            VAR_7 = VAR_6 ? "mimeType" : "contentType";
            VAR_8 = FUNC_2(VAR_4, VAR_7);
            if (VAR_8) {
                if (FUNC_0((const char *)VAR_8, "video")) {
                    VAR_5 = VAR_3;
                } else if (FUNC_0((const char *)VAR_8, "audio")) {
                    VAR_5 = VAR_0;
                } else if (FUNC_0((const char *)VAR_8, "text")) {
                    VAR_5 = VAR_1;
                }
                FUNC_1(VAR_8);
            }
        }
    }
    return VAR_5;
}
