
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WriterContext ;
typedef int AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int,int ) ;
 char* FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(WriterContext *VAR_1, const char *VAR_2, const char *VAR_3)
{
    AVBPrint VAR_4;

    FUNC_2(&VAR_4, 1, VAR_0);
    FUNC_4("%s=", FUNC_3(&VAR_4, VAR_2));
    FUNC_0(&VAR_4);
    FUNC_4("%s\n", FUNC_3(&VAR_4, VAR_3));
    FUNC_1(&VAR_4, ((void*)0));
}
