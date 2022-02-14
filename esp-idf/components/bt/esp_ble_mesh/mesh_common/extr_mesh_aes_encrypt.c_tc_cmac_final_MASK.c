
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {unsigned int leftover_offset; int* leftover; int* iv; int sched; scalar_t__ K2; scalar_t__ K1; } ;
typedef TYPE_1__* TCCmacState_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ,size_t) ;
 int FUNC_1 (int*,int*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(uint8_t *VAR_4, TCCmacState_t VAR_5)
{
    uint8_t *VAR_6;
    unsigned int VAR_7;


    if (VAR_4 == (uint8_t *) 0 ||
            VAR_5 == (TCCmacState_t) 0) {
        return VAR_2;
    }

    if (VAR_5->leftover_offset == VAR_0) {

        VAR_6 = (uint8_t *) VAR_5->K1;
    } else {

        size_t VAR_8 = VAR_0 - VAR_5->leftover_offset;

        FUNC_0(&VAR_5->leftover[VAR_5->leftover_offset], 0, VAR_8);
        VAR_5->leftover[VAR_5->leftover_offset] = VAR_1;
        VAR_6 = (uint8_t *) VAR_5->K2;
    }
    for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
        VAR_5->iv[VAR_7] ^= VAR_5->leftover[VAR_7] ^ VAR_6[VAR_7];
    }

    FUNC_1(VAR_4, VAR_5->iv, VAR_5->sched);


    FUNC_2(VAR_5);

    return VAR_3;
}
