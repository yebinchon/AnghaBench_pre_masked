
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ,int *,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,char*,char const*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, AVIOContext *VAR_3)
{
    AVIOContext *VAR_4 = ((void*)0);
    int VAR_5;

    if ((VAR_5 = FUNC_4(&VAR_4, VAR_2, VAR_0, ((void*)0), ((void*)0))) < 0) {
        char VAR_6[100];
        FUNC_1(VAR_5, VAR_6, sizeof(VAR_6));
        FUNC_6(VAR_1, "Unable to open %s: %s\n", VAR_2, VAR_6);
        return VAR_5;
    }
    VAR_5 = FUNC_5(VAR_3, VAR_4, FUNC_0('m', 'o', 'o', 'f'));
    if (!VAR_5)
        VAR_5 = FUNC_5(VAR_3, VAR_4, FUNC_0('m', 'd', 'a', 't'));

    FUNC_3(VAR_4);
    FUNC_2(VAR_4);

    return VAR_5;
}
