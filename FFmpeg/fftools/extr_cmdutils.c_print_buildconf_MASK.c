
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*,char const*,...) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_2, int VAR_3)
{
    const char *VAR_4 = VAR_2 & VAR_1 ? "  " : "";
    char VAR_5[] = { VAR_0 };
    char *VAR_6, *VAR_7, *VAR_8;



    while ((VAR_6 = FUNC_2(VAR_5, " --")) != ((void*)0)) {
        FUNC_1(VAR_6, "~--", 3);
    }



    while ((VAR_7 = FUNC_2(VAR_5, "pkg-config~")) != ((void*)0)) {
        FUNC_1(VAR_7, "pkg-config ", 11);
    }

    VAR_8 = FUNC_3(VAR_5, "~");
    FUNC_0(((void*)0), VAR_3, "\n%sconfiguration:\n", VAR_4);
    while (VAR_8 != ((void*)0)) {
        FUNC_0(((void*)0), VAR_3, "%s%s%s\n", VAR_4, VAR_4, VAR_8);
        VAR_8 = FUNC_3(((void*)0), "~");
    }
}
