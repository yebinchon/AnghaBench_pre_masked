
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int structs; } ;
typedef TYPE_1__ ccv_ferns_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_11__ {int rect; } ;
typedef TYPE_2__ ccv_comp_t ;
struct TYPE_12__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 double FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_2__,int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 float FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static float FUNC_5(ccv_ferns_t* VAR_0, float VAR_1, ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t* VAR_3, ccv_dense_matrix_t* VAR_4, double VAR_5, ccv_array_t* VAR_6, int VAR_7)
{
 int VAR_8;
 uint32_t* VAR_9 = (uint32_t*)FUNC_2(sizeof(uint32_t) * VAR_0->structs);
 for (VAR_8 = VAR_7; VAR_8 < VAR_6->rnum; VAR_8++)
 {
  ccv_comp_t* VAR_10 = (ccv_comp_t*)FUNC_3(VAR_6, VAR_8);
  if (FUNC_0(VAR_3, VAR_4, VAR_10->rect) > VAR_5)
  {
   FUNC_1(VAR_0, VAR_2, *VAR_10, VAR_9, 0, 0, 0, 0);
   float VAR_11 = FUNC_4(VAR_0, VAR_9);
   if (VAR_11 > VAR_1)
    VAR_1 = VAR_11;
  }
 }
 return VAR_1;
}
