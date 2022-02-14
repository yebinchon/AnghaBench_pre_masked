
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int ) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, ptrdiff_t VAR_1,
                             const uint8_t *VAR_2, ptrdiff_t VAR_3,
                             ptrdiff_t VAR_4, int VAR_5)
{
    if (!VAR_0 || !VAR_2)
        return;
    FUNC_1(FUNC_0(VAR_3) >= VAR_4);
    FUNC_1(FUNC_0(VAR_1) >= VAR_4);
    for (;VAR_5 > 0; VAR_5--) {
        FUNC_2(VAR_0, VAR_2, VAR_4);
        VAR_0 += VAR_1;
        VAR_2 += VAR_3;
    }
}
