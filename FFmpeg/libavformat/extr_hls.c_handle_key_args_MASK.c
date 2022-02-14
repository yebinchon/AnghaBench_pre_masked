
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_info {char* method; char* uri; char* iv; } ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct key_info *VAR_0, const char *VAR_1,
                            int VAR_2, char **VAR_3, int *VAR_4)
{
    if (!FUNC_0(VAR_1, "METHOD=", VAR_2)) {
        *VAR_3 = VAR_0->method;
        *VAR_4 = sizeof(VAR_0->method);
    } else if (!FUNC_0(VAR_1, "URI=", VAR_2)) {
        *VAR_3 = VAR_0->uri;
        *VAR_4 = sizeof(VAR_0->uri);
    } else if (!FUNC_0(VAR_1, "IV=", VAR_2)) {
        *VAR_3 = VAR_0->iv;
        *VAR_4 = sizeof(VAR_0->iv);
    }
}
