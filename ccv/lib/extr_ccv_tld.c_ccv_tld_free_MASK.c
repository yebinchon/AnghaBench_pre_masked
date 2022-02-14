
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ferns; TYPE_3__* top; TYPE_3__** sv; struct TYPE_6__* sfmt; struct TYPE_6__* dsfmt; } ;
typedef TYPE_1__ ccv_tld_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_7__ {int rnum; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(ccv_tld_t* VAR_0)
{
 int VAR_1;
 FUNC_0(VAR_0->dsfmt);
 FUNC_0(VAR_0->sfmt);
 for (VAR_1 = 0; VAR_1 < VAR_0->sv[0]->rnum; VAR_1++)
  FUNC_4(*(ccv_dense_matrix_t**)FUNC_2(VAR_0->sv[0], VAR_1));
 FUNC_1(VAR_0->sv[0]);
 for (VAR_1 = 0; VAR_1 < VAR_0->sv[1]->rnum; VAR_1++)
  FUNC_4(*(ccv_dense_matrix_t**)FUNC_2(VAR_0->sv[1], VAR_1));
 FUNC_1(VAR_0->sv[1]);
 FUNC_1(VAR_0->top);
 FUNC_3(VAR_0->ferns);
 FUNC_0(VAR_0);
}
