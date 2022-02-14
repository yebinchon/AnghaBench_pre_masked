
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float* f32; } ;
struct TYPE_8__ {TYPE_1__ data; int info; } ;
typedef TYPE_2__ ccv_nnc_tensor_view_t ;


 int FUNC_0 (TYPE_2__* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__* const,int*) ;
 int FUNC_4 (TYPE_2__* const,int*) ;

void FUNC_5(ccv_nnc_tensor_view_t* const VAR_2, const float VAR_3)
{

 int VAR_4[VAR_1];
 int VAR_5[VAR_1];
 int VAR_6;
 if (!FUNC_0(VAR_2))
 {

  const int VAR_7 = FUNC_2(VAR_2->info);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   VAR_2->data.f32[VAR_6] = VAR_3;
  return;
 }
 FUNC_1(VAR_0 == 2);
 FUNC_3(VAR_2, VAR_4);
 FUNC_4(VAR_2, VAR_5);
 int VAR_8[VAR_0 + 2];
 float* VAR_9 = VAR_2->data.f32;
 const int VAR_10 = VAR_4[2] * VAR_4[3];
 if (VAR_5[3] == VAR_4[3])
 {

  for (VAR_8[0] = 0; VAR_8[0] < VAR_4[0]; VAR_8[0]++)
  {
   for (VAR_8[1] = 0; VAR_8[1] < VAR_4[1]; VAR_8[1]++)
   {
    for (VAR_6 = 0; VAR_6 < VAR_10; VAR_6++)
     VAR_9[VAR_6] = VAR_3;
    VAR_9 += VAR_5[2] * VAR_5[3];
   }
   VAR_9 += (VAR_5[1] - VAR_4[1]) * VAR_5[2] * VAR_5[3];
  }
  return;
 }

 for (VAR_8[0] = 0; VAR_8[0] < VAR_4[0]; VAR_8[0]++)
 {
  for (VAR_8[1] = 0; VAR_8[1] < VAR_4[1]; VAR_8[1]++)
  {
   for (VAR_8[2] = 0; VAR_8[2] < VAR_4[2]; VAR_8[2]++)
   {
    for (VAR_6 = 0; VAR_6 < VAR_4[3]; VAR_6++)
     VAR_9[VAR_6] = VAR_3;
    VAR_9 += VAR_5[3];
   }
   VAR_9 += (VAR_5[2] - VAR_4[2]) * VAR_5[3];
  }
  VAR_9 += (VAR_5[1] - VAR_4[1]) * VAR_5[2] * VAR_5[3];
 }
}
