
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int RangeCoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int *,int *,int const) ;

__attribute__((used)) static inline void FUNC_4(RangeCoder *VAR_0, uint8_t *VAR_1, int VAR_2, int VAR_3){
    int VAR_4;

    if(VAR_2){
        const int VAR_5= FUNC_0(VAR_2);
        const int VAR_6= FUNC_2(VAR_5);
        const int VAR_7= FUNC_1(VAR_6, 10);
        FUNC_3(VAR_0, VAR_1+0, 0);

        for(VAR_4=0; VAR_4<VAR_7; VAR_4++){
            FUNC_3(VAR_0, VAR_1+1+VAR_4, 1);
        }
        for(; VAR_4<VAR_6; VAR_4++){
            FUNC_3(VAR_0, VAR_1+1+9, 1);
        }
        FUNC_3(VAR_0, VAR_1+1+FUNC_1(VAR_4,9), 0);

        for(VAR_4=VAR_6-1; VAR_4>=VAR_7; VAR_4--){
            FUNC_3(VAR_0, VAR_1+22+9, (VAR_5>>VAR_4)&1);
        }
        for(; VAR_4>=0; VAR_4--){
            FUNC_3(VAR_0, VAR_1+22+VAR_4, (VAR_5>>VAR_4)&1);
        }

        if(VAR_3)
            FUNC_3(VAR_0, VAR_1+11 + VAR_7, VAR_2 < 0);
    }else{
        FUNC_3(VAR_0, VAR_1+0, 1);
    }
}
