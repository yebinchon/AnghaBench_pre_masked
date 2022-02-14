
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,unsigned char const) ;
 int FUNC_1 (unsigned char const,int ) ;
 int FUNC_2 (char const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const char *VAR_1)
{
    const unsigned char *VAR_2;

    for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
        if (!((*VAR_2 >= '+' && *VAR_2 <= ':') || (*VAR_2 >= '@' && *VAR_2 <= 'Z') ||
              *VAR_2 == '_' || (*VAR_2 >= 'a' && *VAR_2 <= 'z')))
            break;
    if (!*VAR_2) {
        FUNC_2(VAR_1, VAR_0);
        return;
    }
    FUNC_1('"', VAR_0);
    for (VAR_2 = VAR_1; *VAR_2; VAR_2++) {
        if (*VAR_2 == '\\' || *VAR_2 == '"' || *VAR_2 == '$' || *VAR_2 == '`')
            FUNC_0(VAR_0, "\\%c", *VAR_2);
        else if (*VAR_2 < ' ' || *VAR_2 > '~')
            FUNC_0(VAR_0, "\\x%02hhx", *VAR_2);
        else
            FUNC_1(*VAR_2, VAR_0);
    }
    FUNC_1('"', VAR_0);
}
