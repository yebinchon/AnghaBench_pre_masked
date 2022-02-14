
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int RangeCoder ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static inline int FUNC_2(RangeCoder *VAR_1, uint8_t *VAR_2, int VAR_3){
    if(FUNC_1(VAR_1, VAR_2+0))
        return 0;
    else{
        int VAR_4, VAR_5;
        unsigned VAR_6;
        VAR_5= 0;
        while(FUNC_1(VAR_1, VAR_2+1 + FUNC_0(VAR_5,9))){
            VAR_5++;
            if (VAR_5 > 31)
                return VAR_0;
        }

        VAR_6= 1;
        for(VAR_4=VAR_5-1; VAR_4>=0; VAR_4--){
            VAR_6 += VAR_6 + FUNC_1(VAR_1, VAR_2+22 + FUNC_0(VAR_4,9));
        }

        VAR_5= -(VAR_3 && FUNC_1(VAR_1, VAR_2+11 + FUNC_0(VAR_5,10)));
        return (VAR_6^VAR_5)-VAR_5;
    }
}
