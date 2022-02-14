
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {float* f32; } ;
struct TYPE_10__ {scalar_t__* dim; } ;
struct TYPE_12__ {TYPE_2__ data; TYPE_1__ info; } ;
typedef TYPE_3__ ccv_nnc_tensor_view_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__* const,int*) ;
 int FUNC_2 (TYPE_3__* const,int*) ;
 int FUNC_3 (TYPE_3__* const,int*) ;
 int FUNC_4 (TYPE_3__* const) ;

void FUNC_5(ccv_nnc_tensor_view_t* const VAR_2, ccv_nnc_tensor_view_t* const VAR_3)
{
 FUNC_0(VAR_2->info.dim[VAR_0 + 2] == 0);
 FUNC_0(VAR_3->info.dim[VAR_0 + 2] == 0);

 int VAR_4[VAR_1];
 int VAR_5[VAR_1];
 FUNC_2(VAR_2, VAR_4);
 FUNC_2(VAR_3, VAR_5);
 FUNC_0(FUNC_1(VAR_3, VAR_4));
 int VAR_6[VAR_1];
 int VAR_7[VAR_1];
 FUNC_0(VAR_0 == 2);
 FUNC_3(VAR_2, VAR_6);
 FUNC_3(VAR_3, VAR_7);
 int VAR_8[VAR_0 + 2];
 int VAR_9;
 FUNC_4(VAR_3);
 float* VAR_10 = VAR_2->data.f32;
 float* const VAR_11 = VAR_3->data.f32;

 for (VAR_8[0] = 0; VAR_8[0] < VAR_4[0]; VAR_8[0]++)
 {
  float* const VAR_12 = VAR_5[0] == 1 ? VAR_11 : VAR_11 + VAR_8[0] * VAR_7[1] * VAR_7[2] * VAR_7[3];
  for (VAR_8[1] = 0; VAR_8[1] < VAR_4[1]; VAR_8[1]++)
  {
   float* const VAR_13 = VAR_5[1] == 1 ? VAR_12 : VAR_12 + VAR_8[1] * VAR_7[2] * VAR_7[3];
   for (VAR_8[2] = 0; VAR_8[2] < VAR_4[2]; VAR_8[2]++)
   {
    float* const VAR_14 = VAR_5[2] == 1 ? VAR_13 : VAR_13 + VAR_8[2] * VAR_7[3];
    if (VAR_5[3] == 1)
     for (VAR_9 = 0; VAR_9 < VAR_4[3]; VAR_9++)
      VAR_14[0] += VAR_10[VAR_9];
    else
     for (VAR_9 = 0; VAR_9 < VAR_4[3]; VAR_9++)
      VAR_14[VAR_9] += VAR_10[VAR_9];
    VAR_10 += VAR_6[3];
   }
   VAR_10 += (VAR_6[2] - VAR_4[2]) * VAR_6[3];
  }
  VAR_10 += (VAR_6[1] - VAR_4[1]) * VAR_6[2] * VAR_6[3];
 }
}
