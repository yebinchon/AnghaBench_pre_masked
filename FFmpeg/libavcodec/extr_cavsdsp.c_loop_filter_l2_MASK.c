
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_6, ptrdiff_t VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10 = VAR_0;
    int VAR_11 = VAR_3;

    if(FUNC_0(VAR_10-VAR_11)<VAR_8 && FUNC_0(VAR_1-VAR_10)<VAR_9 && FUNC_0(VAR_4-VAR_11)<VAR_9) {
        int VAR_12 = VAR_10 + VAR_11 + 2;
        VAR_8 = (VAR_8>>2) + 2;
        if(FUNC_0(VAR_2-VAR_10) < VAR_9 && FUNC_0(VAR_10-VAR_11) < VAR_8) {
            VAR_0 = (VAR_1 + VAR_10 + VAR_12) >> 2;
            VAR_1 = (2*VAR_1 + VAR_12) >> 2;
        } else
            VAR_0 = (2*VAR_1 + VAR_12) >> 2;
        if(FUNC_0(VAR_5-VAR_11) < VAR_9 && FUNC_0(VAR_11-VAR_10) < VAR_8) {
            VAR_3 = (VAR_4 + VAR_11 + VAR_12) >> 2;
            VAR_4 = (2*VAR_4 + VAR_12) >> 2;
        } else
            VAR_3 = (2*VAR_4 + VAR_12) >> 2;
    }
}
