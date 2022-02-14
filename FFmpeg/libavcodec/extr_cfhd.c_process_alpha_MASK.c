
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline void FUNC_1(int16_t *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_5 = VAR_2[VAR_4];
        VAR_5 -= VAR_0;
        VAR_5 <<= 3;
        VAR_5 *= VAR_1;
        VAR_5 >>= 16;
        VAR_5 = FUNC_0(VAR_5, 12);
        VAR_2[VAR_4] = VAR_5;
    }
}
