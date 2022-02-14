
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int,int) ;

__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_1, const uint8_t *VAR_2,
                                    int VAR_3)
{
    if (VAR_3 > VAR_0 / 8 || VAR_3 < 0)
        VAR_3 = -1;
    return FUNC_0(VAR_1, VAR_2, VAR_3 * 8, 1);
}
