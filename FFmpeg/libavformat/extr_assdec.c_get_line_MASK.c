
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int FFTextReader ;
typedef int AVBPrint ;


 int FUNC_0 (int *,char,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char FUNC_3 (int *) ;

__attribute__((used)) static int64_t FUNC_4(AVBPrint *VAR_0, FFTextReader *VAR_1)
{
    int64_t VAR_2 = FUNC_2(VAR_1);

    FUNC_1(VAR_0);
    for (;;) {
        char VAR_3 = FUNC_3(VAR_1);
        if (!VAR_3)
            break;
        FUNC_0(VAR_0, VAR_3, 1);
        if (VAR_3 == '\n')
            break;
    }
    return VAR_2;
}
