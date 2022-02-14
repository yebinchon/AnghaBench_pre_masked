
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static inline int FUNC_1(int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                                  int VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = 2 * VAR_1 - 1;
    if (VAR_5 && VAR_1 == 2)
        VAR_8--;




    VAR_7 = FUNC_0(VAR_2 - VAR_4 - (4 << 3), (VAR_2 + VAR_8 * VAR_3) / VAR_8, 8 << 3);
    VAR_6 = (VAR_7 < (1 << 3 >> 1)) ? 1 : ((VAR_0[VAR_7 & 0x7] >> (14 - (VAR_7 >> 3))) + 1) >> 1 << 1;
    return VAR_6;
}
