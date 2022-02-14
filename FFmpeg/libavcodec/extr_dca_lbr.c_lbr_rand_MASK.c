
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int lbr_rand; float* sb_scf; } ;
typedef TYPE_1__ DCALbrDecoder ;



__attribute__((used)) static float FUNC_0(DCALbrDecoder *VAR_0, int VAR_1)
{
    VAR_0->lbr_rand = 1103515245U * VAR_0->lbr_rand + 12345U;
    return VAR_0->lbr_rand * VAR_0->sb_scf[VAR_1];
}
