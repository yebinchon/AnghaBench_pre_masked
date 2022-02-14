
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 double VAR_1 ;
 int ** VAR_2 ;
 double FUNC_0 (double) ;
 int FUNC_1 () ;
 int FUNC_2 (double) ;
 double FUNC_3 (double) ;

__attribute__((used)) static void FUNC_4(uint8_t *VAR_3){
    int VAR_4, VAR_5, VAR_6, VAR_7;
    FUNC_1();
    for(VAR_4=0; VAR_4<8; VAR_4++){
        for(VAR_5=0; VAR_5<8; VAR_5++){
            for(VAR_7=0; VAR_7<8; VAR_7++){
                for(VAR_6=0; VAR_6<8; VAR_6++){
                    double VAR_8= 0.25*(1<<VAR_0);
                    int VAR_9= 8*VAR_4 + VAR_5;
                    int VAR_10= VAR_3[VAR_9];
                    if(VAR_4==0) VAR_8*= FUNC_3(0.5);
                    if(VAR_5==0) VAR_8*= FUNC_3(0.5);
                    VAR_2[VAR_10][8*VAR_6 + VAR_7]= FUNC_2(VAR_8 * FUNC_0((VAR_1/8.0)*VAR_4*(VAR_6+0.5)) * FUNC_0((VAR_1/8.0)*VAR_5*(VAR_7+0.5)));
                }
            }
        }
    }
}
