
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int AVIOContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;

int FUNC_5(AVIOContext *VAR_2, AVBPrint *VAR_3, size_t VAR_4)
{
    int VAR_5;
    char VAR_6[1024];
    while (VAR_4) {
        VAR_5 = FUNC_4(VAR_2, VAR_6, FUNC_1(VAR_4, sizeof(VAR_6)));
        if (VAR_5 == VAR_0)
            return 0;
        if (VAR_5 <= 0)
            return VAR_5;
        FUNC_2(VAR_3, VAR_6, VAR_5);
        if (!FUNC_3(VAR_3))
            return FUNC_0(VAR_1);
        VAR_4 -= VAR_5;
    }
    return 0;
}
