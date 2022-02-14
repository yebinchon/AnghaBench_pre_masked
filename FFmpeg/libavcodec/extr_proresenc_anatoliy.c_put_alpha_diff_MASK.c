
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int const) ;
 int FUNC_2 (int *,int const,int) ;

__attribute__((used)) static void FUNC_3(PutBitContext *VAR_0, int VAR_1, int VAR_2)
{
    const int VAR_3 = 16;
    const int VAR_4 = 7;
    const int VAR_5 = 1 << (VAR_4 - 1);
    int VAR_6 = VAR_1 - VAR_2;

    VAR_6 = FUNC_1(VAR_6, VAR_3);
    if (VAR_6 >= (1 << VAR_3) - VAR_5)
        VAR_6 -= 1 << VAR_3;
    if (VAR_6 < -VAR_5 || VAR_6 > VAR_5 || !VAR_6) {
        FUNC_2(VAR_0, 1, 1);
        FUNC_2(VAR_0, VAR_3, VAR_6);
    } else {
        FUNC_2(VAR_0, 1, 0);
        FUNC_2(VAR_0, VAR_4 - 1, FUNC_0(VAR_6) - 1);
        FUNC_2(VAR_0, 1, VAR_6 < 0);
    }
}
