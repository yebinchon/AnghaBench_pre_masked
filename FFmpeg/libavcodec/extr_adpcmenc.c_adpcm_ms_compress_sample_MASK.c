
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int sample1; int coeff1; int sample2; int coeff2; int idelta; } ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int* VAR_0 ;

__attribute__((used)) static inline uint8_t FUNC_2(ADPCMChannelStatus *VAR_1,
                                               int16_t VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    VAR_3 = (((VAR_1->sample1) * (VAR_1->coeff1)) +
                (( VAR_1->sample2) * (VAR_1->coeff2))) / 64;

    VAR_4 = VAR_2 - VAR_3;
    if (VAR_4 >= 0)
        VAR_5 = VAR_1->idelta / 2;
    else
        VAR_5 = -VAR_1->idelta / 2;

    VAR_4 = (VAR_4 + VAR_5) / VAR_1->idelta;
    VAR_4 = FUNC_1(VAR_4, 3) & 0x0F;

    VAR_3 += ((VAR_4 & 0x08) ? (VAR_4 - 0x10) : VAR_4) * VAR_1->idelta;

    VAR_1->sample2 = VAR_1->sample1;
    VAR_1->sample1 = FUNC_0(VAR_3);

    VAR_1->idelta = (VAR_0[VAR_4] * VAR_1->idelta) >> 8;
    if (VAR_1->idelta < 16)
        VAR_1->idelta = 16;

    return VAR_4;
}
