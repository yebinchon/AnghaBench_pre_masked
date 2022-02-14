
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double uint8_t ;
struct TYPE_3__ {int* colorkey_rgba; double blend; double similarity; } ;
typedef TYPE_1__ ColorkeyContext ;


 double FUNC_0 (double,double,double) ;
 double FUNC_1 (int) ;

__attribute__((used)) static uint8_t FUNC_2(ColorkeyContext *VAR_0, uint8_t VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
    int VAR_4 = (int)VAR_1 - VAR_0->colorkey_rgba[0];
    int VAR_5 = (int)VAR_2 - VAR_0->colorkey_rgba[1];
    int VAR_6 = (int)VAR_3 - VAR_0->colorkey_rgba[2];

    double VAR_7 = FUNC_1((VAR_4 * VAR_4 + VAR_5 * VAR_5 + VAR_6 * VAR_6) / (255.0 * 255.0));

    if (VAR_0->blend > 0.0001) {
        return FUNC_0((VAR_7 - VAR_0->similarity) / VAR_0->blend, 0.0, 1.0) * 255.0;
    } else {
        return (VAR_7 > VAR_0->similarity) ? 255 : 0;
    }
}
