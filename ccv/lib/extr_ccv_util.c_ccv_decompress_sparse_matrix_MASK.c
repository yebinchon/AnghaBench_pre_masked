
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ major; int cols; int rows; } ;
typedef TYPE_2__ ccv_sparse_matrix_t ;
struct TYPE_8__ {scalar_t__ u8; } ;
struct TYPE_10__ {int type; int* offset; int* index; TYPE_1__ data; int cols; int rows; } ;
typedef TYPE_3__ ccv_compressed_sparse_matrix_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,int,int,scalar_t__) ;
 TYPE_2__* FUNC_2 (int ,int ,int,scalar_t__,int ) ;

void FUNC_3(const ccv_compressed_sparse_matrix_t* VAR_4, ccv_sparse_matrix_t** VAR_5)
{
 ccv_sparse_matrix_t* VAR_6 = *VAR_5 = FUNC_2(VAR_4->rows, VAR_4->cols, VAR_4->type & ~VAR_1 & ~VAR_0, (VAR_4->type & VAR_1) ? VAR_3 : VAR_2, 0);
 int VAR_7, VAR_8;
 for (VAR_7 = 0; VAR_7 < ((VAR_6->major == VAR_2) ? VAR_6->cols : VAR_6->rows); VAR_7++)
  for (VAR_8 = VAR_4->offset[VAR_7]; VAR_8 < VAR_4->offset[VAR_7 + 1]; VAR_8++)
   if (VAR_6->major == VAR_2)
    FUNC_1(VAR_6, VAR_4->index[VAR_8], VAR_7, VAR_4->data.u8 + FUNC_0(VAR_4->type) * VAR_8);
   else
    FUNC_1(VAR_6, VAR_7, VAR_4->index[VAR_8], VAR_4->data.u8 + FUNC_0(VAR_4->type) * VAR_8);
}
