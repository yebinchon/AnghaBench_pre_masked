
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int color; unsigned int* bitmap; int stride; } ;
typedef TYPE_1__ ASS_Image ;



__attribute__((used)) static uint8_t FUNC_0( ASS_Image *VAR_0, int VAR_1, int VAR_2 )
{
    unsigned VAR_3 = ( VAR_0->color ) & 0xff;
    unsigned VAR_4 = VAR_0->bitmap[VAR_2*VAR_0->stride + VAR_1];



    unsigned VAR_5 = (255 - VAR_3) * VAR_4 >> 8;

    return (uint8_t)VAR_5;
}
