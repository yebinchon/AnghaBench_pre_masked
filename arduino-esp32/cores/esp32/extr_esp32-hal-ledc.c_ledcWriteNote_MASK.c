
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef size_t note_t ;


 size_t VAR_0 ;
 double FUNC_0 (int,double) ;

double FUNC_1(uint8_t VAR_1, note_t VAR_2, uint8_t VAR_3){
    const uint16_t VAR_4[12] = {

        4186, 4435, 4699, 4978, 5274, 5588, 5920, 6272, 6645, 7040, 7459, 7902
    };

    if(VAR_3 > 8 || VAR_2 >= VAR_0){
        return 0;
    }
    double VAR_5 = (double)VAR_4[VAR_2] / (double)(1 << (8-VAR_3));
    return FUNC_0(VAR_1, VAR_5);
}
