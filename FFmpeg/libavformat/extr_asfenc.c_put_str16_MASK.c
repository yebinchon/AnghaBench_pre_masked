
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int **) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static void FUNC_6(AVIOContext *VAR_0, const char *VAR_1)
{
    int VAR_2;
    uint8_t *VAR_3;
    AVIOContext *VAR_4;
    if (FUNC_2(&VAR_4) < 0)
        return;

    FUNC_3(VAR_4, VAR_1);
    VAR_2 = FUNC_1(VAR_4, &VAR_3);
    FUNC_4(VAR_0, VAR_2);
    FUNC_5(VAR_0, VAR_3, VAR_2);
    FUNC_0(&VAR_3);
}
