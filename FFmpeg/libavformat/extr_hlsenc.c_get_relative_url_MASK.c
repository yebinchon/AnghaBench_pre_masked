
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static const char* FUNC_3(const char *VAR_1, const char *VAR_2)
{
    const char *VAR_3 = FUNC_2(VAR_1, '/');
    size_t VAR_4 = 0;

    if (!VAR_3) VAR_3 = FUNC_2(VAR_1, '\\');

    if (VAR_3) {
        VAR_4 = VAR_3 + 1 - VAR_1;
        if (FUNC_1(VAR_1, VAR_2, VAR_4)) {
            FUNC_0(((void*)0), VAR_0, "Unable to find relative url\n");
            return ((void*)0);
        }
    }

    return VAR_2 + VAR_4;
}
