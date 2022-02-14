
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* u8; } ;
struct TYPE_5__ {int step; int rows; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(ccv_dense_matrix_t* VAR_0)
{
 int VAR_1;
 unsigned char* VAR_2 = (unsigned char*)FUNC_0(VAR_0->step);
 unsigned char* VAR_3 = VAR_0->data.u8;
 unsigned char* VAR_4 = VAR_0->data.u8 + (VAR_0->rows - 1) * VAR_0->step;
 for (VAR_1 = 0; VAR_1 < VAR_0->rows / 2; VAR_1++)
 {
  FUNC_1(VAR_2, VAR_3, VAR_0->step);
  FUNC_1(VAR_3, VAR_4, VAR_0->step);
  FUNC_1(VAR_4, VAR_2, VAR_0->step);
  VAR_3 += VAR_0->step;
  VAR_4 -= VAR_0->step;
 }
}
