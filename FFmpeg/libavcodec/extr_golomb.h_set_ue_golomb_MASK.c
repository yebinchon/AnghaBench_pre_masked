
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_3(PutBitContext *VAR_1, int VAR_2)
{
    FUNC_0(VAR_2 >= 0);
    FUNC_0(VAR_2 <= 0xFFFE);

    if (VAR_2 < 256)
        FUNC_2(VAR_1, VAR_0[VAR_2], VAR_2 + 1);
    else {
        int VAR_3 = FUNC_1(VAR_2 + 1);
        FUNC_2(VAR_1, 2 * VAR_3 + 1, VAR_2 + 1);
    }
}
