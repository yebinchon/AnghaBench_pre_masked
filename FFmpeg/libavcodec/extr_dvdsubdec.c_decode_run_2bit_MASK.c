
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(GetBitContext *VAR_1, int *VAR_2)
{
    unsigned int VAR_3, VAR_4;

    VAR_3 = 0;
    for (VAR_4 = 1; VAR_3 < VAR_4 && VAR_4 <= 0x40; VAR_4 <<= 2)
        VAR_3 = (VAR_3 << 4) | FUNC_0(VAR_1, 4);
    *VAR_2 = VAR_3 & 3;
    if (VAR_3 < 4) {
        return VAR_0;
    }
    return VAR_3 >> 2;
}
