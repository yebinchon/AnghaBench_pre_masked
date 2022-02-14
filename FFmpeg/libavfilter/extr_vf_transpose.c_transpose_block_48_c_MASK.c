
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                        uint8_t *VAR_2, ptrdiff_t VAR_3,
                                        int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++, VAR_2 += VAR_3, VAR_0 += 6) {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
            int64_t VAR_8 = FUNC_0(VAR_0 + VAR_6*VAR_1);
            FUNC_1(VAR_2 + 6*VAR_6, VAR_8);
        }
    }
}
