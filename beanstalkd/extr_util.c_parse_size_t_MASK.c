
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char*,char*,size_t*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static size_t
FUNC_3(char *VAR_0)
{
    char VAR_1, VAR_2;
    size_t VAR_3;

    VAR_1 = FUNC_0(VAR_0, "%zu%c", &VAR_3, &VAR_2);
    if (1 != VAR_1) {
        FUNC_2("invalid size: %s", VAR_0);
        FUNC_1(5);
    }
    return VAR_3;
}
