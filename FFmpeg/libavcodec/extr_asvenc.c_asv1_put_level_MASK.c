
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int ** VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_2(PutBitContext *VAR_1, int VAR_2)
{
    unsigned int VAR_3 = VAR_2 + 3;

    if (VAR_3 <= 6) {
        FUNC_0(VAR_1, VAR_0[VAR_3][1], VAR_0[VAR_3][0]);
    } else {
        FUNC_0(VAR_1, VAR_0[3][1], VAR_0[3][0]);
        FUNC_1(VAR_1, 8, VAR_2);
    }
}
