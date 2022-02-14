
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* u8; } ;
struct TYPE_5__ {int type; int rows; int cols; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int*,int ,int) ;

int FUNC_4(ccv_dense_matrix_t* VAR_3, double* VAR_4, int VAR_5)
{
 FUNC_1((VAR_3->type & VAR_0) || (VAR_3->type & VAR_1));
 int* VAR_6 = (int*)FUNC_0(VAR_5 * sizeof(int));
 FUNC_3(VAR_6, 0, sizeof(int) * VAR_5);
 int VAR_7, VAR_8;
 unsigned char* VAR_9 = VAR_3->data.u8;







 FUNC_2(VAR_3->type, VAR_2);

 double VAR_10 = 0, VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_10 += VAR_7 * VAR_6[VAR_7];
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = VAR_3->rows * VAR_3->cols;
 double VAR_15 = 0;
 int VAR_16 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
  VAR_12 += VAR_6[VAR_7];
  if (VAR_12 == 0)
   continue;
  VAR_13 = VAR_14 - VAR_12;
  if (VAR_13 == 0)
   break;
  VAR_11 += VAR_7 * VAR_6[VAR_7];
  double VAR_17 = VAR_11 / VAR_12;
  double VAR_18 = (VAR_10 - VAR_11) / VAR_13;
  double VAR_19 = VAR_12 * VAR_13 * (VAR_17 - VAR_18) * (VAR_17 - VAR_18);
  if (VAR_19 > VAR_15)
  {
   VAR_15 = VAR_19;
   VAR_16 = VAR_7;
  }
 }
 if (VAR_4 != 0)
  *VAR_4 = VAR_15 / VAR_14 / VAR_14;
 return VAR_16;
}
