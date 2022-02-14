
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int RangeCoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline int FUNC_2(RangeCoder *VAR_0, uint8_t *VAR_1, int VAR_2){
    int VAR_3;
    int VAR_4= VAR_2>=0 ? 1<<VAR_2 : 1;
    int VAR_5=0;

    FUNC_0(VAR_2>=-4);

    while(VAR_2<28 && FUNC_1(VAR_0, VAR_1+4+VAR_2)){
        VAR_5+= VAR_4;
        VAR_2++;
        if(VAR_2>0) VAR_4+=VAR_4;
    }

    for(VAR_3=VAR_2-1; VAR_3>=0; VAR_3--){
        VAR_5+= FUNC_1(VAR_0, VAR_1+31-VAR_3)<<VAR_3;
    }

    return VAR_5;
}
