
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dsfmt_t ;
struct TYPE_9__ {scalar_t__ dsfmt; } ;
typedef TYPE_1__ ccv_tld_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_10__ {int rect; } ;
typedef TYPE_2__ ccv_comp_t ;
struct TYPE_11__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 double FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int **,int ,int ) ;
 float FUNC_2 (TYPE_1__*,int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 double FUNC_5 (int *) ;

__attribute__((used)) static float FUNC_6(ccv_tld_t* VAR_0, float VAR_1, ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t* VAR_3, ccv_dense_matrix_t* VAR_4, double VAR_5, ccv_array_t* VAR_6, int VAR_7)
{
 int VAR_8;
 dsfmt_t* VAR_9 = (dsfmt_t*)VAR_0->dsfmt;
 for (VAR_8 = VAR_7; VAR_8 < VAR_6->rnum; VAR_8++)
 {
  ccv_comp_t* VAR_10 = (ccv_comp_t*)FUNC_3(VAR_6, VAR_8);
  if (FUNC_0(VAR_3, VAR_4, VAR_10->rect) > VAR_5)
  {
   if (FUNC_5(VAR_9) <= 0.1)
   {
    ccv_dense_matrix_t* VAR_11 = 0;
    FUNC_1(VAR_0, VAR_2, &VAR_11, 0, VAR_10->rect);
    float VAR_12 = FUNC_2(VAR_0, VAR_11, 0, 0, 0, 0);
    FUNC_4(VAR_11);
    if (VAR_12 > VAR_1)
     VAR_1 = VAR_12;
   }
  }
 }
 return VAR_1;
}
