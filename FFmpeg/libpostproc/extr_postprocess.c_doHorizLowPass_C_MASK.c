
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ QP; } ;
typedef TYPE_1__ PPContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(uint8_t VAR_1[], int VAR_2, const PPContext *VAR_3)
{
    int VAR_4;
    for(VAR_4=0; VAR_4<VAR_0; VAR_4++){
        const int VAR_5= FUNC_0(VAR_1[-1] - VAR_1[0]) < VAR_3->QP ? VAR_1[-1] : VAR_1[0];
        const int VAR_6= FUNC_0(VAR_1[8] - VAR_1[7]) < VAR_3->QP ? VAR_1[8] : VAR_1[7];

        int VAR_7[10];
        VAR_7[0] = 4*VAR_5 + VAR_1[0] + VAR_1[1] + VAR_1[2] + 4;
        VAR_7[1] = VAR_7[0] - VAR_5 + VAR_1[3];
        VAR_7[2] = VAR_7[1] - VAR_5 + VAR_1[4];
        VAR_7[3] = VAR_7[2] - VAR_5 + VAR_1[5];
        VAR_7[4] = VAR_7[3] - VAR_5 + VAR_1[6];
        VAR_7[5] = VAR_7[4] - VAR_1[0] + VAR_1[7];
        VAR_7[6] = VAR_7[5] - VAR_1[1] + VAR_6;
        VAR_7[7] = VAR_7[6] - VAR_1[2] + VAR_6;
        VAR_7[8] = VAR_7[7] - VAR_1[3] + VAR_6;
        VAR_7[9] = VAR_7[8] - VAR_1[4] + VAR_6;

        VAR_1[0]= (VAR_7[0] + VAR_7[2] + 2*VAR_1[0])>>4;
        VAR_1[1]= (VAR_7[1] + VAR_7[3] + 2*VAR_1[1])>>4;
        VAR_1[2]= (VAR_7[2] + VAR_7[4] + 2*VAR_1[2])>>4;
        VAR_1[3]= (VAR_7[3] + VAR_7[5] + 2*VAR_1[3])>>4;
        VAR_1[4]= (VAR_7[4] + VAR_7[6] + 2*VAR_1[4])>>4;
        VAR_1[5]= (VAR_7[5] + VAR_7[7] + 2*VAR_1[5])>>4;
        VAR_1[6]= (VAR_7[6] + VAR_7[8] + 2*VAR_1[6])>>4;
        VAR_1[7]= (VAR_7[7] + VAR_7[9] + 2*VAR_1[7])>>4;

        VAR_1+= VAR_2;
    }
}
