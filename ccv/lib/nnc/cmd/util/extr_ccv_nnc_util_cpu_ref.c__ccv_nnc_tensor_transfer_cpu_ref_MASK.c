
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {float* u8; float* f32; } ;
struct TYPE_12__ {scalar_t__ datatype; } ;
struct TYPE_11__ {TYPE_1__ data; TYPE_6__ info; } ;
typedef TYPE_2__ const ccv_nnc_tensor_view_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__ const* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__) ;
 int FUNC_4 (TYPE_2__ const* const,int*) ;
 int FUNC_5 (TYPE_2__ const* const,int*) ;
 int FUNC_6 (TYPE_2__ const* const,int*) ;
 int FUNC_7 (float*,float*,int) ;

void FUNC_8(const ccv_nnc_tensor_view_t* const VAR_2, ccv_nnc_tensor_view_t* const VAR_3)
{

 FUNC_2(VAR_2->info.datatype == VAR_3->info.datatype);
 if (!FUNC_1(VAR_2) && !FUNC_1(VAR_3))
 {

  FUNC_7(VAR_3->data.u8, VAR_2->data.u8, FUNC_3(VAR_2->info) * FUNC_0(VAR_2->info.datatype));
  return;
 }
 int VAR_4[VAR_1];
 int VAR_5[VAR_1];
 int VAR_6[VAR_1];
 FUNC_5(VAR_2, VAR_4);
 FUNC_2(FUNC_4(VAR_3, VAR_4));
 FUNC_6(VAR_2, VAR_5);
 FUNC_6(VAR_3, VAR_6);
 FUNC_2(VAR_0 == 2);
 int VAR_7[VAR_0 + 2];
 float* VAR_8 = VAR_2->data.f32;
 float* VAR_9 = VAR_3->data.f32;
 if (VAR_5[3] == VAR_4[3] && VAR_6[3] == VAR_4[3])
 {

  for (VAR_7[0] = 0; VAR_7[0] < VAR_4[0]; VAR_7[0]++)
  {
   for (VAR_7[1] = 0; VAR_7[1] < VAR_4[1]; VAR_7[1]++)
   {
    FUNC_7(VAR_9, VAR_8, VAR_4[2] * VAR_4[3] * sizeof(float));
    VAR_8 += VAR_5[2] * VAR_5[3];
    VAR_9 += VAR_6[2] * VAR_6[3];
   }
   VAR_8 += (VAR_5[1] - VAR_4[1]) * VAR_5[2] * VAR_5[3];
   VAR_9 += (VAR_6[1] - VAR_4[1]) * VAR_6[2] * VAR_6[3];
  }
  return;
 }

 for (VAR_7[0] = 0; VAR_7[0] < VAR_4[0]; VAR_7[0]++)
 {
  for (VAR_7[1] = 0; VAR_7[1] < VAR_4[1]; VAR_7[1]++)
  {
   for (VAR_7[2] = 0; VAR_7[2] < VAR_4[2]; VAR_7[2]++)
   {
    FUNC_7(VAR_9, VAR_8, VAR_4[3] * sizeof(float));
    VAR_8 += VAR_5[3];
    VAR_9 += VAR_6[3];
   }
   VAR_8 += (VAR_5[2] - VAR_4[2]) * VAR_5[3];
   VAR_9 += (VAR_6[2] - VAR_4[2]) * VAR_6[3];
  }
  VAR_8 += (VAR_5[1] - VAR_4[1]) * VAR_5[2] * VAR_5[3];
  VAR_9 += (VAR_6[1] - VAR_4[1]) * VAR_6[2] * VAR_6[3];
 }
}
