
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double uint8_t ;
struct TYPE_3__ {int* chromakey_uv; double blend; double similarity; } ;
typedef TYPE_1__ ChromakeyContext ;


 double FUNC_0 (double,double,double) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static uint8_t FUNC_2(ChromakeyContext *VAR_0, uint8_t VAR_1[9], uint8_t VAR_2[9])
{
    double VAR_3 = 0.0;
    int VAR_4, VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < 9; ++VAR_6) {
        VAR_4 = (int)VAR_1[VAR_6] - VAR_0->chromakey_uv[0];
        VAR_5 = (int)VAR_2[VAR_6] - VAR_0->chromakey_uv[1];

        VAR_3 += FUNC_1((VAR_4 * VAR_4 + VAR_5 * VAR_5) / (255.0 * 255.0));
    }

    VAR_3 /= 9.0;

    if (VAR_0->blend > 0.0001) {
        return FUNC_0((VAR_3 - VAR_0->similarity) / VAR_0->blend, 0.0, 1.0) * 255.0;
    } else {
        return (VAR_3 > VAR_0->similarity) ? 255 : 0;
    }
}
