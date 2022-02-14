
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;
typedef int WriterContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(WriterContext *VAR_1, int VAR_2)
{
    char VAR_3[128];
    const char *VAR_4 = VAR_3;

    if (FUNC_1(VAR_2, VAR_3, sizeof(VAR_3)) < 0)
        VAR_4 = FUNC_4(FUNC_0(VAR_2));

    FUNC_6(VAR_1, VAR_0);
    FUNC_2("code", VAR_2);
    FUNC_3("string", VAR_4);
    FUNC_5(VAR_1);
}
