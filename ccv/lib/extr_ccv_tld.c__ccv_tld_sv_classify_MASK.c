
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {float nnc_same; } ;
struct TYPE_10__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_12__ {TYPE_2__ params; TYPE_5__** sv; TYPE_1__ patch; } ;
typedef TYPE_3__ ccv_tld_t ;
struct TYPE_13__ {scalar_t__ rows; scalar_t__ cols; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_14__ {int rnum; } ;


 float FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static float FUNC_4(ccv_tld_t* VAR_0, ccv_dense_matrix_t* VAR_1, int VAR_2, int VAR_3, int* VAR_4, int* VAR_5)
{
 FUNC_1(VAR_1->rows == VAR_0->patch.height && VAR_1->cols == VAR_0->patch.width);
 int VAR_6;
 VAR_2 = (VAR_2 <= 0) ? VAR_0->sv[1]->rnum : FUNC_3(VAR_2, VAR_0->sv[1]->rnum);
 if (VAR_2 == 0)
  return 0;
 VAR_3 = (VAR_3 <= 0) ? VAR_0->sv[0]->rnum : FUNC_3(VAR_3, VAR_0->sv[0]->rnum);
 if (VAR_3 == 0)
  return 1;
 float VAR_7 = -1;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 {
  ccv_dense_matrix_t* VAR_8 = *(ccv_dense_matrix_t**)FUNC_2(VAR_0->sv[1], VAR_6);
  float VAR_9 = FUNC_0(VAR_1, VAR_8);
  if (VAR_9 > VAR_7)
   VAR_7 = VAR_9;
 }
 VAR_7 = (VAR_7 + 1) * 0.5;
 if (VAR_4)
  *VAR_4 = (VAR_7 > VAR_0->params.nnc_same);
 float VAR_10 = -1;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  ccv_dense_matrix_t* VAR_11 = *(ccv_dense_matrix_t**)FUNC_2(VAR_0->sv[0], VAR_6);
  float VAR_12 = FUNC_0(VAR_1, VAR_11);
  if (VAR_12 > VAR_10)
   VAR_10 = VAR_12;
 }
 VAR_10 = (VAR_10 + 1) * 0.5;
 if (VAR_5)
  *VAR_5 = (VAR_10 > VAR_0->params.nnc_same);
 return (1 - VAR_10) / (2 - VAR_10 - VAR_7);
}
