
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {float* f32; } ;
struct TYPE_13__ {scalar_t__* dim; } ;
struct TYPE_12__ {TYPE_1__ data; TYPE_6__ info; } ;
typedef TYPE_2__ ccv_nnc_tensor_view_t ;


 int FUNC_0 (TYPE_2__* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__) ;
 int FUNC_3 (TYPE_2__* const,int*) ;
 int FUNC_4 (TYPE_2__* const,int*) ;
 int FUNC_5 (TYPE_2__* const,int*) ;

__attribute__((used)) static void FUNC_6(const float VAR_2, ccv_nnc_tensor_view_t* const VAR_3, ccv_nnc_tensor_view_t* const VAR_4, ccv_nnc_tensor_view_t* const VAR_5)
{

 int VAR_6[VAR_1];
 int VAR_7[VAR_1];
 int VAR_8[VAR_1];
 int VAR_9[VAR_1];
 if (VAR_3 == 0)
 {
  FUNC_1(VAR_4->info.dim[VAR_0 + 2] == 0);
  FUNC_1(VAR_5->info.dim[VAR_0 + 2] == 0);
  FUNC_4(VAR_4, VAR_6);
  FUNC_1(FUNC_3(VAR_5, VAR_6));
  int VAR_10;
  if (!FUNC_0(VAR_4) && !FUNC_0(VAR_5))
  {

   const int VAR_11 = FUNC_2(VAR_4->info);
   for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
    VAR_5->data.f32[VAR_10] = VAR_2 / VAR_4->data.f32[VAR_10];
   return;
  }
  FUNC_1(VAR_0 == 2);
  FUNC_5(VAR_4, VAR_8);
  FUNC_5(VAR_5, VAR_9);
  int VAR_12[VAR_0 + 2];
  float* VAR_13 = VAR_4->data.f32;
  float* VAR_14 = VAR_5->data.f32;
  const int VAR_15 = VAR_6[2] * VAR_6[3];
  if (VAR_8[3] == VAR_6[3] && VAR_9[3] == VAR_6[3])
  {

   for (VAR_12[0] = 0; VAR_12[0] < VAR_6[0]; VAR_12[0]++)
   {
    for (VAR_12[1] = 0; VAR_12[1] < VAR_6[1]; VAR_12[1]++)
    {
     for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++)
      VAR_14[VAR_10] = VAR_2 / VAR_13[VAR_10];
     VAR_13 += VAR_8[2] * VAR_8[3];
     VAR_14 += VAR_9[2] * VAR_9[3];
    }
    VAR_13 += (VAR_8[1] - VAR_6[1]) * VAR_8[2] * VAR_8[3];
    VAR_14 += (VAR_9[1] - VAR_6[1]) * VAR_9[2] * VAR_9[3];
   }
   return;
  }

  for (VAR_12[0] = 0; VAR_12[0] < VAR_6[0]; VAR_12[0]++)
  {
   for (VAR_12[1] = 0; VAR_12[1] < VAR_6[1]; VAR_12[1]++)
   {
    for (VAR_12[2] = 0; VAR_12[2] < VAR_6[2]; VAR_12[2]++)
    {
     for (VAR_10 = 0; VAR_10 < VAR_6[3]; VAR_10++)
      VAR_14[VAR_10] = VAR_2 / VAR_13[VAR_10];
     VAR_13 += VAR_8[3];
     VAR_14 += VAR_9[3];
    }
    VAR_13 += (VAR_8[2] - VAR_6[2]) * VAR_8[3];
    VAR_14 += (VAR_9[2] - VAR_6[2]) * VAR_9[3];
   }
   VAR_13 += (VAR_8[1] - VAR_6[1]) * VAR_8[2] * VAR_8[3];
   VAR_14 += (VAR_9[1] - VAR_6[1]) * VAR_9[2] * VAR_9[3];
  }
 } else {
  FUNC_1(VAR_3->info.dim[VAR_0 + 2] == 0);
  FUNC_1(VAR_4->info.dim[VAR_0 + 2] == 0);
  FUNC_1(VAR_5->info.dim[VAR_0 + 2] == 0);
  FUNC_4(VAR_3, VAR_6);
  FUNC_1(FUNC_3(VAR_4, VAR_6));
  FUNC_1(FUNC_3(VAR_5, VAR_6));
  int VAR_16;
  if (!FUNC_0(VAR_3) && !FUNC_0(VAR_4) && !FUNC_0(VAR_5))
  {

   const int VAR_17 = FUNC_2(VAR_3->info);
   for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
    VAR_5->data.f32[VAR_16] = VAR_2 * VAR_3->data.f32[VAR_16] / VAR_4->data.f32[VAR_16];
   return;
  }
  FUNC_1(VAR_0 == 2);
  FUNC_5(VAR_3, VAR_7);
  FUNC_5(VAR_4, VAR_8);
  FUNC_5(VAR_5, VAR_9);
  int VAR_18[VAR_0 + 2];
  float* VAR_19 = VAR_3->data.f32;
  float* VAR_20 = VAR_4->data.f32;
  float* VAR_21 = VAR_5->data.f32;
  const int VAR_22 = VAR_6[2] * VAR_6[3];
  if (VAR_7[3] == VAR_6[3] && VAR_8[3] == VAR_6[3] && VAR_9[3] == VAR_6[3])
  {

   for (VAR_18[0] = 0; VAR_18[0] < VAR_6[0]; VAR_18[0]++)
   {
    for (VAR_18[1] = 0; VAR_18[1] < VAR_6[1]; VAR_18[1]++)
    {
     for (VAR_16 = 0; VAR_16 < VAR_22; VAR_16++)
      VAR_21[VAR_16] = VAR_2 * VAR_19[VAR_16] / VAR_20[VAR_16];
     VAR_19 += VAR_7[2] * VAR_7[3];
     VAR_20 += VAR_8[2] * VAR_8[3];
     VAR_21 += VAR_9[2] * VAR_9[3];
    }
    VAR_19 += (VAR_7[1] - VAR_6[1]) * VAR_7[2] * VAR_7[3];
    VAR_20 += (VAR_8[1] - VAR_6[1]) * VAR_8[2] * VAR_8[3];
    VAR_21 += (VAR_9[1] - VAR_6[1]) * VAR_9[2] * VAR_9[3];
   }
   return;
  }

  for (VAR_18[0] = 0; VAR_18[0] < VAR_6[0]; VAR_18[0]++)
  {
   for (VAR_18[1] = 0; VAR_18[1] < VAR_6[1]; VAR_18[1]++)
   {
    for (VAR_18[2] = 0; VAR_18[2] < VAR_6[2]; VAR_18[2]++)
    {
     for (VAR_16 = 0; VAR_16 < VAR_6[3]; VAR_16++)
      VAR_21[VAR_16] = VAR_2 * VAR_19[VAR_16] / VAR_20[VAR_16];
     VAR_19 += VAR_7[3];
     VAR_20 += VAR_8[3];
     VAR_21 += VAR_9[3];
    }
    VAR_19 += (VAR_7[2] - VAR_6[2]) * VAR_7[3];
    VAR_20 += (VAR_8[2] - VAR_6[2]) * VAR_8[3];
    VAR_21 += (VAR_9[2] - VAR_6[2]) * VAR_9[3];
   }
   VAR_19 += (VAR_7[1] - VAR_6[1]) * VAR_7[2] * VAR_7[3];
   VAR_20 += (VAR_8[1] - VAR_6[1]) * VAR_8[2] * VAR_8[3];
   VAR_21 += (VAR_9[1] - VAR_6[1]) * VAR_9[2] * VAR_9[3];
  }
 }
}
