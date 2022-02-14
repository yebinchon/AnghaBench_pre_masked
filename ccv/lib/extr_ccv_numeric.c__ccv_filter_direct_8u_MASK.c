
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned char* u8; } ;
struct TYPE_10__ {int rows; int cols; int step; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (int,int ,int) ;
 TYPE_2__* FUNC_3 (int,int,int,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int,int,int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t* VAR_3, ccv_dense_matrix_t* VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = VAR_3->rows * VAR_3->cols;
 int* VAR_12 = (int*)FUNC_1(VAR_11 * sizeof(int));
 int* VAR_13 = (int*)FUNC_1(VAR_11 * sizeof(int));
 int* VAR_14 = (int*)FUNC_1(VAR_11 * sizeof(int));
 int VAR_15 = 1 << 14;
 VAR_11 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3->rows; VAR_6++)
  for (VAR_7 = 0; VAR_7 < VAR_3->cols; VAR_7++)
  {
   VAR_12[VAR_11] = (int)(FUNC_4(VAR_3, VAR_6, VAR_7, 0) * VAR_15 + 0.5);
   if (VAR_12[VAR_11] == 0)
    continue;
   VAR_14[VAR_11] = VAR_6;
   VAR_13[VAR_11] = VAR_7;
   VAR_11++;
  }
 ccv_dense_matrix_t* VAR_16 = FUNC_3(VAR_2->rows + VAR_3->rows / 2 * 2, VAR_2->cols + VAR_3->cols / 2 * 2, VAR_0 | VAR_1, 0, 0);

 for (VAR_6 = 0; VAR_6 < VAR_16->rows; VAR_6++)
  for (VAR_7 = 0; VAR_7 < VAR_16->cols; VAR_7++)
   VAR_16->data.u8[VAR_6 * VAR_16->step + VAR_7] = VAR_2->data.u8[FUNC_2(VAR_6 - VAR_3->rows / 2, 0, VAR_2->rows - 1) * VAR_2->step + FUNC_2(VAR_7 - VAR_3->cols / 2, 0, VAR_2->cols - 1)];
 unsigned char* VAR_17 = VAR_4->data.u8;
 unsigned char* VAR_18 = VAR_16->data.u8;

 if (VAR_11 < VAR_3->rows * VAR_3->cols * 0.75)
 {
  for (VAR_6 = 0; VAR_6 < VAR_4->rows; VAR_6++)
  {
   for (VAR_7 = 0; VAR_7 < VAR_4->cols; VAR_7++)
   {
    int VAR_19 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
     VAR_19 += VAR_18[VAR_14[VAR_10] * VAR_16->step + VAR_7 + VAR_13[VAR_10]] * VAR_12[VAR_10];
    VAR_17[VAR_7] = FUNC_2(VAR_19 >> 14, 0, 255);
   }
   VAR_17 += VAR_4->step;
   VAR_18 += VAR_16->step;
  }
 } else {
  VAR_10 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_3->rows; VAR_6++)
   for (VAR_7 = 0; VAR_7 < VAR_3->cols; VAR_7++)
   {
    VAR_12[VAR_10] = (int)(FUNC_4(VAR_3, VAR_6, VAR_7, 0) * VAR_15 + 0.5);
    VAR_10++;
   }
  for (VAR_6 = 0; VAR_6 < VAR_4->rows; VAR_6++)
  {
   for (VAR_7 = 0; VAR_7 < VAR_4->cols; VAR_7++)
   {
    int* VAR_20 = VAR_12;
    int VAR_21 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_3->rows; VAR_8++)
    {
     int VAR_22 = VAR_8 * VAR_16->step;
     for (VAR_9 = 0; VAR_9 < VAR_3->cols; VAR_9++)
     {
      VAR_21 += VAR_18[VAR_22 + VAR_7 + VAR_9] * VAR_20[0];
      VAR_20++;
     }
    }
    VAR_17[VAR_7] = FUNC_2(VAR_21 >> 14, 0, 255);
   }
   VAR_17 += VAR_4->step;
   VAR_18 += VAR_16->step;
  }
 }
 FUNC_5(VAR_16);
 FUNC_0(VAR_12);
 FUNC_0(VAR_13);
 FUNC_0(VAR_14);
}
