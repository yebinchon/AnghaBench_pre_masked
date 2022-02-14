
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {unsigned int* state; scalar_t__ index; } ;
typedef TYPE_1__ AVLFG ;
typedef int AVCRC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int const*,int,int const*,unsigned int) ;
 int * FUNC_2 (int ) ;

int FUNC_3(AVLFG *VAR_3, const uint8_t *VAR_4, unsigned int VAR_5) {
    unsigned int VAR_6, VAR_7, VAR_8;
    const AVCRC *VAR_9;
    uint32_t VAR_10 = 1;


    if (VAR_5 > (VAR_2 / 128U)) return FUNC_0(VAR_1);

    VAR_3->index = 0;
    VAR_9 = FUNC_2(VAR_0);




    VAR_6 = 0;
    for (VAR_8 = 0;VAR_8 < 64;VAR_8++) {
        VAR_7 = (((VAR_8 + 1) * VAR_5) / 64);
        VAR_10 = FUNC_1(VAR_9, VAR_10, VAR_4 + VAR_6, VAR_7 - VAR_6);
        VAR_3->state[VAR_8] = (unsigned int)VAR_10;
        VAR_6 = VAR_7;
    }

    return 0;
}
