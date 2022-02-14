
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int sample1; int coeff1; int sample2; int coeff2; int idelta; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*) ;
 int* VAR_2 ;

__attribute__((used)) static inline int16_t FUNC_2(ADPCMChannelStatus *VAR_3, int VAR_4)
{
    int VAR_5;

    VAR_5 = (((VAR_3->sample1) * (VAR_3->coeff1)) + ((VAR_3->sample2) * (VAR_3->coeff2))) / 64;
    VAR_5 += ((VAR_4 & 0x08)?(VAR_4 - 0x10):(VAR_4)) * VAR_3->idelta;

    VAR_3->sample2 = VAR_3->sample1;
    VAR_3->sample1 = FUNC_0(VAR_5);
    VAR_3->idelta = (VAR_2[(int)VAR_4] * VAR_3->idelta) >> 8;
    if (VAR_3->idelta < 16) VAR_3->idelta = 16;
    if (VAR_3->idelta > VAR_1/768) {
        FUNC_1(((void*)0), VAR_0, "idelta overflow\n");
        VAR_3->idelta = VAR_1/768;
    }

    return VAR_3->sample1;
}
