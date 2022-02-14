
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(int16_t *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_9 = VAR_4[0];
    VAR_10 = VAR_4[1];
    VAR_11 = VAR_4[2];
    VAR_12 = VAR_4[3];
    VAR_5 = (VAR_9 + VAR_11)*VAR_2 + (1 << (VAR_3 - 1));
    VAR_7 = (VAR_9 - VAR_11)*VAR_2 + (1 << (VAR_3 - 1));
    VAR_6 = VAR_10 * VAR_0 + VAR_12 * VAR_1;
    VAR_8 = VAR_10 * VAR_1 - VAR_12 * VAR_0;
    VAR_4[0]= (VAR_5 + VAR_6) >> VAR_3;
    VAR_4[1]= (VAR_7 + VAR_8) >> VAR_3;
    VAR_4[2]= (VAR_7 - VAR_8) >> VAR_3;
    VAR_4[3]= (VAR_5 - VAR_6) >> VAR_3;
}
