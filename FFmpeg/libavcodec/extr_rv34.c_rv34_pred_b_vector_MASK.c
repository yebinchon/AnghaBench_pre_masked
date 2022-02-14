
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static inline void FUNC_1(int VAR_0[2], int VAR_1[2], int VAR_2[2],
                                      int VAR_3, int VAR_4, int VAR_5,
                                      int *VAR_6, int *VAR_7)
{
    if(VAR_3 + VAR_4 + VAR_5 != 3){
        *VAR_6 = VAR_0[0] + VAR_1[0] + VAR_2[0];
        *VAR_7 = VAR_0[1] + VAR_1[1] + VAR_2[1];
        if(VAR_3 + VAR_4 + VAR_5 == 2){
            *VAR_6 /= 2;
            *VAR_7 /= 2;
        }
    }else{
        *VAR_6 = FUNC_0(VAR_0[0], VAR_1[0], VAR_2[0]);
        *VAR_7 = FUNC_0(VAR_0[1], VAR_1[1], VAR_2[1]);
    }
}
