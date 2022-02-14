
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*,int) ;

__attribute__((used)) static void *FUNC_3(const char *VAR_2, const char *VAR_3)
{
    char *VAR_4 = FUNC_0("%s/%s.so", VAR_2, VAR_3);
    void *VAR_5 = ((void*)0);

    if (VAR_4) {
        VAR_5 = FUNC_2(VAR_4, VAR_0|VAR_1);
        FUNC_1(VAR_4);
    }

    return VAR_5;
}
