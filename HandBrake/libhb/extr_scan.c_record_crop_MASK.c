
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* t; size_t n; int* b; int* l; int* r; } ;
typedef TYPE_1__ crop_record_t ;



__attribute__((used)) static void FUNC_0( crop_record_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4 )
{
    VAR_0->t[VAR_0->n] = VAR_1;
    VAR_0->b[VAR_0->n] = VAR_2;
    VAR_0->l[VAR_0->n] = VAR_3;
    VAR_0->r[VAR_0->n] = VAR_4;
    ++VAR_0->n;
}
