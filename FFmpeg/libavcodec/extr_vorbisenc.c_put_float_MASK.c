
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int PutBitContext ;


 int FUNC_0 (float,int*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(PutBitContext *VAR_0, float VAR_1)
{
    int VAR_2, VAR_3;
    uint32_t VAR_4 = 0;
    VAR_3 = (int)FUNC_1(FUNC_0(VAR_1, &VAR_2), 20);
    VAR_2 += 788 - 20;
    if (VAR_3 < 0) {
        VAR_4 |= (1U << 31);
        VAR_3 = -VAR_3;
    }
    VAR_4 |= VAR_3 | (VAR_2 << 21);
    FUNC_2(VAR_0, VAR_4);
}
