
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__* l1distlut; } ;
typedef TYPE_1__ SignatureContext ;
typedef int AVFilterContext ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(AVFilterContext *VAR_1, SignatureContext *VAR_2, const uint8_t *VAR_3, const uint8_t *VAR_4)
{
    unsigned int VAR_5;
    unsigned int VAR_6 = 0;
    uint8_t VAR_7, VAR_8;

    for (VAR_5 = 0; VAR_5 < VAR_0/5; VAR_5++) {
        if (VAR_3[VAR_5] != VAR_4[VAR_5]) {
            VAR_7 = VAR_3[VAR_5];
            VAR_8 = VAR_4[VAR_5];
            if (VAR_7 > VAR_8) {

                VAR_6 += VAR_2->l1distlut[243*242/2 - (243-VAR_8)*(242-VAR_8)/2 + VAR_7 - VAR_8 - 1];
            } else {
                VAR_6 += VAR_2->l1distlut[243*242/2 - (243-VAR_7)*(242-VAR_7)/2 + VAR_8 - VAR_7 - 1];
            }
        }
    }
    return VAR_6;
}
