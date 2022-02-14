
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_7__ {TYPE_1__ patch; } ;
typedef TYPE_2__ ccv_tld_t ;
struct TYPE_8__ {scalar_t__ width; scalar_t__ height; int x; int y; } ;
typedef TYPE_3__ ccv_rect_t ;
typedef int ccv_matrix_t ;
typedef int ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **,int,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int *,int **,int,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(ccv_tld_t* VAR_2, ccv_dense_matrix_t* VAR_3, ccv_dense_matrix_t** VAR_4, int VAR_5, ccv_rect_t VAR_6)
{
 if (VAR_6.width == VAR_2->patch.width && VAR_6.height == VAR_2->patch.height)
  FUNC_3(VAR_3, (ccv_matrix_t**)VAR_4, VAR_5, VAR_6.y, VAR_6.x, VAR_6.height, VAR_6.width);
 else {
  FUNC_0((VAR_6.width >= VAR_2->patch.width && VAR_6.height >= VAR_2->patch.height) ||
      (VAR_6.width <= VAR_2->patch.width && VAR_6.height <= VAR_2->patch.height));
  ccv_dense_matrix_t* VAR_7 = 0;
  FUNC_3(VAR_3, (ccv_matrix_t**)&VAR_7, VAR_5, VAR_6.y, VAR_6.x, VAR_6.height, VAR_6.width);
  FUNC_2(VAR_7, VAR_4, VAR_5, VAR_2->patch.height, VAR_2->patch.width, VAR_0 | VAR_1);
  FUNC_1(VAR_7);
 }
}
