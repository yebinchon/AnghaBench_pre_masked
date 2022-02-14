
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* u8; } ;
struct TYPE_5__ {int rows; int cols; int step; TYPE_1__ data; int type; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_4(ccv_dense_matrix_t* VAR_0)
{
 int VAR_1, VAR_2;
 int VAR_3 = FUNC_1(VAR_0->type) * FUNC_0(VAR_0->type);
 unsigned char* VAR_4 = (unsigned char*)FUNC_2(VAR_3);
 unsigned char* VAR_5 = VAR_0->data.u8;
 for (VAR_1 = 0; VAR_1 < VAR_0->rows; VAR_1++)
 {
  for (VAR_2 = 0; VAR_2 < VAR_0->cols / 2; VAR_2++)
  {
   FUNC_3(VAR_4, VAR_5 + VAR_2 * VAR_3, VAR_3);
   FUNC_3(VAR_5 + VAR_2 * VAR_3, VAR_5 + (VAR_0->cols - 1 - VAR_2) * VAR_3, VAR_3);
   FUNC_3(VAR_5 + (VAR_0->cols - 1 - VAR_2) * VAR_3, VAR_4, VAR_3);
  }
  VAR_5 += VAR_0->step;
 }
}
