
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*,char const*) ;
 int FUNC_1 (int) ;
 char const* VAR_1 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, const char *VAR_3)
{
    if (VAR_1) {
        FUNC_0(((void*)0), VAR_0,
               "Argument '%s' provided as input filename, but '%s' was already specified.\n",
                VAR_3, VAR_1);
        FUNC_1(1);
    }
    if (!FUNC_2(VAR_3, "-"))
        VAR_3 = "pipe:";
    VAR_1 = VAR_3;
}
