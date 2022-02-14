
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int PutBitContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_4(PutBitContext *VAR_2, uint32_t VAR_3)
{
    FUNC_0(VAR_3 <= (VAR_0 - 1));

    if (VAR_3 < 256)
        FUNC_2(VAR_2, VAR_1[VAR_3], VAR_3 + 1);
    else {
        int VAR_4 = FUNC_1(VAR_3 + 1);
        FUNC_3(VAR_2, 2 * VAR_4 + 1, VAR_3 + 1);
    }
}
