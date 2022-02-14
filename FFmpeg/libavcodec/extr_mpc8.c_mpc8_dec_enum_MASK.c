
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int GetBitContext ;


 int** VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    const uint32_t * VAR_5 = VAR_0[VAR_2-1];
    int VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);

    do {
        VAR_3--;
        if (VAR_6 >= VAR_5[VAR_3]) {
            VAR_4 |= 1U << VAR_3;
            VAR_6 -= VAR_5[VAR_3];
            VAR_5 -= 32;
            VAR_2--;
        }
    } while(VAR_2 > 0);

    return VAR_4;
}
