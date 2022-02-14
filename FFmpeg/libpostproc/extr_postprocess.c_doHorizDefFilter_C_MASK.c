
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int QP; } ;
typedef TYPE_1__ PPContext ;


 int VAR_0 ;
 int const FUNC_0 (int const) ;
 int FUNC_1 (int,int const) ;
 int FUNC_2 (int,int const) ;
 int FUNC_3 (int const) ;

__attribute__((used)) static inline void FUNC_4(uint8_t VAR_1[], int VAR_2, const PPContext *VAR_3)
{
    int VAR_4;
    for(VAR_4=0; VAR_4<VAR_0; VAR_4++){
        const int VAR_5= 5*(VAR_1[4] - VAR_1[3]) + 2*(VAR_1[2] - VAR_1[5]);

        if(FUNC_0(VAR_5) < 8*VAR_3->QP){
            const int VAR_6=(VAR_1[3] - VAR_1[4])/2;
            const int VAR_7= 5*(VAR_1[2] - VAR_1[1]) + 2*(VAR_1[0] - VAR_1[3]);
            const int VAR_8= 5*(VAR_1[6] - VAR_1[5]) + 2*(VAR_1[4] - VAR_1[7]);

            int VAR_9= FUNC_0(VAR_5) - FUNC_2( FUNC_0(VAR_7), FUNC_0(VAR_8) );
            VAR_9= FUNC_1(VAR_9, 0);

            VAR_9= (5*VAR_9 + 32) >> 6;
            VAR_9*= FUNC_3(-VAR_5);

            if(VAR_6>0)
            {
                VAR_9 = FUNC_1(VAR_9, 0);
                VAR_9 = FUNC_2(VAR_9, VAR_6);
            }
            else
            {
                VAR_9 = FUNC_2(VAR_9, 0);
                VAR_9 = FUNC_1(VAR_9, VAR_6);
            }

            VAR_1[3]-= VAR_9;
            VAR_1[4]+= VAR_9;
        }
        VAR_1+= VAR_2;
    }
}
