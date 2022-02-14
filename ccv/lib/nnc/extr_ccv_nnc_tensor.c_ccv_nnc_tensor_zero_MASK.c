
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int* dim; int datatype; } ;
struct TYPE_5__ {int * u8; } ;
struct TYPE_6__ {int* inc; TYPE_3__ info; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_nnc_tensor_view_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 size_t const FUNC_4 (TYPE_3__) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int *,int ,size_t const) ;

void FUNC_7(void* const VAR_1)
{
 ccv_nnc_tensor_view_t* VAR_2 = (ccv_nnc_tensor_view_t*)VAR_1;
 const size_t VAR_3 = FUNC_0(VAR_2->info.datatype);
 if (!FUNC_1(VAR_2))
 {
  FUNC_6(VAR_2->data.u8, 0, VAR_3 * FUNC_4(VAR_2->info));
  return;
 }
 const int VAR_4 = FUNC_5(VAR_2->info.dim);
 FUNC_2(VAR_4 >= 1);
 const int* const VAR_5 = VAR_2->inc;

 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 1;
 int VAR_10[VAR_0 - 3];
 size_t VAR_11[VAR_0 - 2];
 const size_t VAR_12 = VAR_4 > 2 ? VAR_3 * VAR_5[VAR_4 - 3] * VAR_5[VAR_4 - 2] * VAR_5[VAR_4 - 1] : VAR_3;
 if (VAR_4 > 2)
  VAR_11[VAR_4 - 3] = VAR_12;
 for (VAR_6 = VAR_4 - 4; VAR_6 >= 0; VAR_6--)
 {

  VAR_10[VAR_6] = VAR_6 == VAR_4 - 4 ? VAR_2->info.dim[VAR_6] : VAR_10[VAR_6 + 1] * VAR_2->info.dim[VAR_6];
  VAR_11[VAR_6] = VAR_11[VAR_6 + 1] * VAR_5[VAR_6];
  VAR_9 *= VAR_2->info.dim[VAR_6];
 }
 for (VAR_6 = 0; VAR_6 < VAR_4 - 3; VAR_6++)
  VAR_11[VAR_6] = VAR_11[VAR_6 + 1] * (VAR_5[VAR_6] - VAR_2->info.dim[VAR_6]);
 uint8_t* VAR_13 = VAR_2->data.u8;
 const size_t VAR_14 = VAR_3 * VAR_5[VAR_4 - 1];
 const size_t VAR_15 = VAR_14 * (VAR_4 >= 2 ? VAR_5[VAR_4 - 2] : 1);
 const size_t VAR_16 = VAR_3 * VAR_2->info.dim[VAR_4 - 1];
 const int VAR_17 = FUNC_3(1, VAR_4 >= 3 ? VAR_2->info.dim[VAR_4 - 3] : 1);
 const int VAR_18 = FUNC_3(1, VAR_4 >= 2 ? VAR_2->info.dim[VAR_4 - 2] : 1);
 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
 {
  for (VAR_8 = 0; VAR_8 < VAR_17; VAR_8++)
  {
   uint8_t* VAR_19 = VAR_13 + VAR_8 * VAR_15;
   for (VAR_7 = 0; VAR_7 < VAR_18; VAR_7++)
   {
    FUNC_6(VAR_19, 0, VAR_16);
    VAR_19 += VAR_14;
   }
  }
  VAR_13 += VAR_12;
  for (VAR_8 = VAR_4 - 4; VAR_8 >= 0; VAR_8--)
   if ((VAR_6 + 1) % VAR_10[VAR_8] != 0)
    break;
   else
    VAR_13 += VAR_11[VAR_8];
 }
}
