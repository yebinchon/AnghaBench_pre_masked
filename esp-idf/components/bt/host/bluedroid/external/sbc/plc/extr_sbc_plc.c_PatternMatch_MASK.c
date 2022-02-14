
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 float FUNC_0 (int *,int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(int16_t *VAR_3){
    int VAR_4;
    float VAR_5 = -999999.0;
    float VAR_6;
    int VAR_7 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++){
        VAR_6 = FUNC_0(&VAR_3[VAR_0-VAR_1], &VAR_3[VAR_4]);
        if (VAR_6 > VAR_5){
            VAR_7 = VAR_4;
            VAR_5 = VAR_6;
        }
    }
    return VAR_7;
}
