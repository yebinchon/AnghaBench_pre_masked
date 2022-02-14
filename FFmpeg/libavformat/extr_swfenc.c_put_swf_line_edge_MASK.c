
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(PutBitContext *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    FUNC_1(VAR_0, 1, 1);
    FUNC_1(VAR_0, 1, 1);
    VAR_3 = 2;
    FUNC_0(&VAR_3, VAR_1);
    FUNC_0(&VAR_3, VAR_2);

    VAR_4 = (1 << VAR_3) - 1;
    FUNC_1(VAR_0, 4, VAR_3 - 2);
    if (VAR_1 == 0) {
        FUNC_1(VAR_0, 1, 0);
        FUNC_1(VAR_0, 1, 1);
        FUNC_1(VAR_0, VAR_3, VAR_2 & VAR_4);
    } else if (VAR_2 == 0) {
        FUNC_1(VAR_0, 1, 0);
        FUNC_1(VAR_0, 1, 0);
        FUNC_1(VAR_0, VAR_3, VAR_1 & VAR_4);
    } else {
        FUNC_1(VAR_0, 1, 1);
        FUNC_1(VAR_0, VAR_3, VAR_1 & VAR_4);
        FUNC_1(VAR_0, VAR_3, VAR_2 & VAR_4);
    }
}
