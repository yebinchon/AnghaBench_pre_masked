
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(PutBitContext *VAR_0, int VAR_1, int VAR_2)
{
    unsigned int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;


    VAR_5 = VAR_2 & 3;
    VAR_3 = VAR_2 >> 5;
    VAR_4 = (VAR_2 >> 2) & 7;

    VAR_6 = ((VAR_5 + 1) << VAR_3);

    if (VAR_1 >= VAR_6) {
        VAR_1 -= VAR_6;
        VAR_1 += (1 << VAR_4);
        VAR_7 = FUNC_0(VAR_1);
        VAR_8 = VAR_7 - VAR_4 + VAR_5 + 1;
        FUNC_1(VAR_0, VAR_8, 0);
        FUNC_1(VAR_0, VAR_7 + 1, VAR_1);
    } else if (VAR_3) {
        FUNC_1(VAR_0, (VAR_1 >> VAR_3), 0);
        FUNC_1(VAR_0, 1, 1);
        FUNC_2(VAR_0, VAR_3, VAR_1);
    } else {
        FUNC_1(VAR_0, VAR_1, 0);
        FUNC_1(VAR_0, 1, 1);
    }
}
