
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_3(PutBitContext *VAR_0, unsigned VAR_1, int VAR_2)
{
    unsigned int VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7;


    VAR_5 = (VAR_1 & 3) + 1;
    VAR_3 = VAR_1 >> 5;
    VAR_4 = (VAR_1 >> 2) & 7;

    VAR_6 = VAR_5 << VAR_3;

    if (VAR_2 >= VAR_6) {
        VAR_2 -= VAR_6 - (1 << VAR_4);
        VAR_7 = FUNC_0(VAR_2);

        FUNC_1(VAR_0, VAR_7 - VAR_4 + VAR_5, 0);
        FUNC_1(VAR_0, VAR_7 + 1, VAR_2);
    } else {
        VAR_7 = VAR_2 >> VAR_3;

        if (VAR_7)
            FUNC_1(VAR_0, VAR_7, 0);
        FUNC_1(VAR_0, 1, 1);
        if (VAR_3)
            FUNC_2(VAR_0, VAR_3, VAR_2);
    }
}
