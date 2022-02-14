
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {float* f32; } ;
struct TYPE_7__ {int* dim; } ;
struct TYPE_9__ {TYPE_2__ data; TYPE_1__ info; } ;
typedef TYPE_3__ const ccv_nnc_tensor_view_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_3__ const*,int*) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_tensor_view_t* VAR_1, ccv_nnc_tensor_view_t* VAR_2)
{

 int VAR_3[VAR_0 + 2];
 int VAR_4[VAR_0 + 2];
 int VAR_5;

 const int VAR_6 = FUNC_1(VAR_1->info.dim);
 const int VAR_7 = FUNC_1(VAR_2->info.dim);
 const int VAR_8 = VAR_0 + 2 - VAR_6;
 FUNC_0(VAR_8 == 0 || VAR_8 == 1);
 const int VAR_9 = VAR_0 + 2 - VAR_7;
 FUNC_0(VAR_9 == 0 || VAR_9 == 1);
 FUNC_2(VAR_1, VAR_3);
 FUNC_2(VAR_2, VAR_4);

 FUNC_0((VAR_8 == 0 ? VAR_1->info.dim[0] : 1) == (VAR_9 == 0 ? VAR_2->info.dim[0] : 1));
 const int VAR_10 = (VAR_8 == 0 ? VAR_1->info.dim[0] : 1);

 FUNC_0(VAR_1->info.dim[VAR_6 - 1] == VAR_2->info.dim[1 - VAR_9]);
 const int VAR_11 = VAR_1->info.dim[VAR_6 - 1];

 int VAR_12[VAR_0];
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
  FUNC_0(VAR_1->info.dim[VAR_5 + 1 - VAR_8] == VAR_2->info.dim[VAR_5 + 2 - VAR_9]);
  VAR_12[VAR_5] = VAR_1->info.dim[VAR_5 + 1 - VAR_8];
 }
 FUNC_0(VAR_0 == 2);
 int VAR_13[VAR_0 + 2];
 float* VAR_14 = VAR_1->data.f32;
 float* VAR_15 = VAR_2->data.f32;

 for (VAR_13[0] = 0; VAR_13[0] < VAR_10; VAR_13[0]++)
 {
  for (VAR_13[3] = 0; VAR_13[3] < VAR_11; VAR_13[3]++)
  {
   float* VAR_16 = VAR_14 + VAR_13[3];
   for (VAR_13[1] = 0; VAR_13[1] < VAR_12[0]; VAR_13[1]++)
   {
    for (VAR_13[2] = 0; VAR_13[2] < VAR_12[1]; VAR_13[2]++)
     VAR_15[VAR_13[2]] = VAR_16[VAR_13[2] * VAR_3[3]];
    VAR_16 += VAR_3[2] * VAR_3[3];
    VAR_15 += VAR_4[3];
   }
   VAR_15 += (VAR_4[2] - VAR_12[0]) * VAR_4[3];
  }
  VAR_14 += VAR_3[1] * VAR_3[2] * VAR_3[3];
  VAR_15 += (VAR_4[1] - VAR_11) * VAR_4[2] * VAR_4[3];
 }
}
