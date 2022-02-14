
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char**) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1, char *VAR_2, AVBPrint *VAR_3)
{
    int VAR_4;

    FUNC_2(VAR_3);
    while (*VAR_2) {
        if (*VAR_2 == '\\' && VAR_2[1]) {
            FUNC_1(VAR_3, VAR_2[1], 1);
            VAR_2 += 2;
        } else if (*VAR_2 == '%') {
            VAR_2++;
            if ((VAR_4 = FUNC_4(VAR_1, VAR_3, &VAR_2)) < 0)
                return VAR_4;
        } else {
            FUNC_1(VAR_3, *VAR_2, 1);
            VAR_2++;
        }
    }
    if (!FUNC_3(VAR_3))
        return FUNC_0(VAR_0);
    return 0;
}
