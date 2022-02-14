
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double* f32; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ ccv_dense_matrix_t ;
typedef int ccv_categorized_t ;
typedef int ccv_array_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 (int,int,int,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (unsigned char*,int,int,int *) ;
 int FUNC_10 (int *,int,float*,int *) ;

int FUNC_11(int VAR_2, char** VAR_3)
{
 FUNC_6();
 FUNC_0(VAR_2 == 5);
 int VAR_4 = FUNC_1(VAR_3[2]);
 int VAR_5 = FUNC_1(VAR_3[4]);
 FILE* VAR_6 = FUNC_8(VAR_3[1], "rb");
 FILE* VAR_7 = FUNC_8(VAR_3[3], "rb");
 if (VAR_6 && VAR_7)
 {
  int VAR_8, VAR_9, VAR_10;
  unsigned char VAR_11[32 * 32 + 1];
  double VAR_12[3] = {};
  ccv_array_t* VAR_13 = FUNC_2(sizeof(ccv_categorized_t), VAR_4, 0);
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  {
   FUNC_9(VAR_11, 32 * 32 + 1, 1, VAR_6);
   double VAR_14[3] = {};
   int VAR_15 = VAR_11[0];
   ccv_dense_matrix_t* VAR_16 = FUNC_5(32, 32, VAR_0 | VAR_1, 0, 0);
   for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
     VAR_14[0] += (VAR_16->data.f32[(VAR_9 + VAR_8 * 32) * 3] = VAR_11[VAR_9 + VAR_8 * 32 + 1] * 2. / 255.);
   FUNC_9(VAR_11, 32 * 32, 1, VAR_6);
   for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
     VAR_14[1] += (VAR_16->data.f32[(VAR_9 + VAR_8 * 32) * 3 + 1] = VAR_11[VAR_9 + VAR_8 * 32] * 2. / 255.);
   FUNC_9(VAR_11, 32 * 32, 1, VAR_6);
   for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
     VAR_14[2] += (VAR_16->data.f32[(VAR_9 + VAR_8 * 32) * 3 + 2] = VAR_11[VAR_9 + VAR_8 * 32] * 2. / 255.);
   ccv_categorized_t VAR_17 = FUNC_4(VAR_15, VAR_16, 0);
   FUNC_3(VAR_13, &VAR_17);
   VAR_12[0] += VAR_14[0] / (32 * 32);
   VAR_12[1] += VAR_14[1] / (32 * 32);
   VAR_12[2] += VAR_14[2] / (32 * 32);
  }
  float VAR_18[3];
  VAR_18[0] = VAR_12[0] / VAR_4;
  VAR_18[1] = VAR_12[1] / VAR_4;
  VAR_18[2] = VAR_12[2] / VAR_4;
  ccv_array_t* VAR_19 = FUNC_2(sizeof(ccv_categorized_t), VAR_5, 0);
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  {
   FUNC_9(VAR_11, 32 * 32 + 1, 1, VAR_7);
   int VAR_20 = VAR_11[0];
   ccv_dense_matrix_t* VAR_21 = FUNC_5(32, 32, VAR_0 | VAR_1, 0, 0);
   for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
     VAR_21->data.f32[(VAR_9 + VAR_8 * 32) * 3] = VAR_11[VAR_9 + VAR_8 * 32 + 1] * 2. / 255. - VAR_18[0];
   FUNC_9(VAR_11, 32 * 32, 1, VAR_7);
   for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
     VAR_21->data.f32[(VAR_9 + VAR_8 * 32) * 3 + 1] = VAR_11[VAR_9 + VAR_8 * 32] * 2. / 255. - VAR_18[1];
   FUNC_9(VAR_11, 32 * 32, 1, VAR_7);
   for (VAR_8 = 0; VAR_8 < 32; VAR_8++)
    for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
     VAR_21->data.f32[(VAR_9 + VAR_8 * 32) * 3 + 2] = VAR_11[VAR_9 + VAR_8 * 32] * 2. / 255. - VAR_18[2];
   ccv_categorized_t VAR_22 = FUNC_4(VAR_20, VAR_21, 0);
   FUNC_3(VAR_19, &VAR_22);
  }
  FUNC_10(VAR_13, 256, VAR_18, VAR_19);
 }
 if (VAR_6)
  FUNC_7(VAR_6);
 if (VAR_7)
  FUNC_7(VAR_7);
 return 0;
}
