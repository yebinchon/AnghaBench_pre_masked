
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
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(uint8_t *VAR_6, ptrdiff_t VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    int VAR_11 = VAR_0;
    int VAR_12 = VAR_3;

    if(FUNC_0(VAR_11-VAR_12)<VAR_8 && FUNC_0(VAR_1-VAR_11)<VAR_9 && FUNC_0(VAR_4-VAR_12)<VAR_9) {
        int VAR_13 = FUNC_1(((VAR_12-VAR_11)*3+VAR_1-VAR_4+4)>>3,-VAR_10, VAR_10);
        VAR_0 = FUNC_2(VAR_11+VAR_13);
        VAR_3 = FUNC_2(VAR_12-VAR_13);
        if(FUNC_0(VAR_2-VAR_11)<VAR_9) {
            VAR_13 = FUNC_1(((VAR_0-VAR_1)*3+VAR_2-VAR_3+4)>>3, -VAR_10, VAR_10);
            VAR_1 = FUNC_2(VAR_1+VAR_13);
        }
        if(FUNC_0(VAR_5-VAR_12)<VAR_9) {
            VAR_13 = FUNC_1(((VAR_4-VAR_3)*3+VAR_0-VAR_5+4)>>3, -VAR_10, VAR_10);
            VAR_4 = FUNC_2(VAR_4-VAR_13);
        }
    }
}
