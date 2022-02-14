
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_3) {
        int VAR_4 = 16 + FUNC_5(VAR_1);
        FUNC_1(VAR_0, VAR_4);
        FUNC_4(VAR_0, "data");
        FUNC_1(VAR_0, 1);
        FUNC_1(VAR_0, 0);
        FUNC_2(VAR_0, VAR_1, FUNC_5(VAR_1));
        return VAR_4;
    } else {
        if (!VAR_2)
            VAR_2 = FUNC_3("und", 1);
        FUNC_0(VAR_0, FUNC_5(VAR_1));
        FUNC_0(VAR_0, VAR_2);
        FUNC_2(VAR_0, VAR_1, FUNC_5(VAR_1));
        return FUNC_5(VAR_1) + 4;
    }
}
