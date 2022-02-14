
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {float height; float width; } ;
typedef TYPE_1__ ccv_size_t ;
typedef int ccv_matrix_t ;
struct TYPE_10__ {float rows; float cols; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (float,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__**,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int **,int ,int ,int ) ;

void FUNC_3(ccv_size_t VAR_3, ccv_dense_matrix_t* VAR_4, ccv_dense_matrix_t** VAR_5)
{
 if (VAR_4->rows > VAR_3.height && VAR_4->cols > VAR_3.width)
  FUNC_1(VAR_4, VAR_5, VAR_0, FUNC_0(VAR_3.height, (int)(VAR_4->rows * (float)VAR_3.height / VAR_4->cols + 0.5)), FUNC_0(VAR_3.width, (int)(VAR_4->cols * (float)VAR_3.width / VAR_4->rows + 0.5)), VAR_1);
 else if (VAR_4->rows < VAR_3.height || VAR_4->cols < VAR_3.width)
  FUNC_1(VAR_4, VAR_5, VAR_0, FUNC_0(VAR_3.height, (int)(VAR_4->rows * (float)VAR_3.height / VAR_4->cols + 0.5)), FUNC_0(VAR_3.width, (int)(VAR_4->cols * (float)VAR_3.width / VAR_4->rows + 0.5)), VAR_2);
 else
  FUNC_2(VAR_4, (ccv_matrix_t**)VAR_5, VAR_0, 0, 0);
}
