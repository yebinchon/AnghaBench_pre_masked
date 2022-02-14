
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float nnc_thres; float nnc_collect; } ;
struct TYPE_7__ {TYPE_3__** sv; TYPE_1__ params; } ;
typedef TYPE_2__ ccv_tld_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_8__ {scalar_t__ rnum; } ;


 float FUNC_0 (TYPE_2__*,int *,int ,int ,int*,int*) ;
 int FUNC_1 (TYPE_3__*,int **) ;

__attribute__((used)) static int FUNC_2(ccv_tld_t* VAR_0, ccv_dense_matrix_t* VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 if (VAR_2 == 1 && VAR_0->sv[1]->rnum == 0)
 {
  FUNC_1(VAR_0->sv[1], &VAR_1);
  return 0;
 }
 float VAR_5 = FUNC_0(VAR_0, VAR_1, 0, 0, &VAR_3, &VAR_4);
 if (VAR_2 == 1 && VAR_5 < VAR_0->params.nnc_thres)
 {
  FUNC_1(VAR_0->sv[1], &VAR_1);
  return 0;
 } else if (VAR_2 == 0 && VAR_5 > VAR_0->params.nnc_collect) {
  FUNC_1(VAR_0->sv[0], &VAR_1);
  return 0;
 }
 return -1;
}
