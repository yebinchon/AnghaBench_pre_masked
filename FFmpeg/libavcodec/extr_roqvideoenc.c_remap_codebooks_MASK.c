
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* cb4x4; scalar_t__ quake3_compat; } ;
struct TYPE_8__ {scalar_t__* usedCB2; scalar_t__* usedCB4; } ;
struct TYPE_9__ {int* i2f4; int* f2i4; int numCB4; int* i2f2; int* f2i2; int numCB2; TYPE_2__ codebooks; } ;
struct TYPE_7__ {size_t* idx; } ;
typedef TYPE_3__ RoqTempdata ;
typedef TYPE_4__ RoqContext ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(RoqContext *VAR_2, RoqTempdata *VAR_3)
{
    int VAR_4, VAR_5, VAR_6=0;


    for (VAR_4=0; VAR_4<(VAR_2->quake3_compat ? VAR_1-1 : VAR_1); VAR_4++) {
        if (VAR_3->codebooks.usedCB4[VAR_4]) {
            VAR_3->i2f4[VAR_4] = VAR_6;
            VAR_3->f2i4[VAR_6] = VAR_4;
            for (VAR_5=0; VAR_5<4; VAR_5++)
                VAR_3->codebooks.usedCB2[VAR_2->cb4x4[VAR_4].idx[VAR_5]]++;
            VAR_6++;
        }
    }

    VAR_3->numCB4 = VAR_6;

    VAR_6 = 0;
    for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
        if (VAR_3->codebooks.usedCB2[VAR_4]) {
            VAR_3->i2f2[VAR_4] = VAR_6;
            VAR_3->f2i2[VAR_6] = VAR_4;
            VAR_6++;
        }
    }
    VAR_3->numCB2 = VAR_6;

}
