
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ccv_sparse_matrix_t ;
struct TYPE_9__ {scalar_t__* i32; } ;
typedef TYPE_1__ ccv_numeric_data_t ;
struct TYPE_10__ {TYPE_3__* tail; TYPE_3__* head; } ;
typedef TYPE_2__ ccv_nnc_tensor_block_t ;
struct TYPE_11__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int const*) ;
 TYPE_1__ FUNC_3 (int const* const,int const,int const) ;

__attribute__((used)) static void FUNC_4(const ccv_sparse_matrix_t* const VAR_0, const int VAR_1, ccv_nnc_tensor_block_t VAR_2)
{
 int VAR_3, VAR_4 = 0;

 ccv_array_t* VAR_5 = VAR_2.head;
 FUNC_0(VAR_5);
 for (VAR_3 = 0; VAR_3 < VAR_5->rnum;)
 {
  const int VAR_6 = *(int*)FUNC_1(VAR_5, VAR_3);
  if (VAR_6 == VAR_1)
  {
   VAR_4 = 1;
   break;
  }
  ccv_numeric_data_t VAR_7 = FUNC_3(VAR_0, VAR_6, VAR_1);
  if (VAR_7.i32 && VAR_7.i32[0] > 0)
  {


   if (!VAR_4)
   {
    VAR_4 = 1;
    *(int*)FUNC_1(VAR_5, VAR_3) = VAR_1;
   } else {

    if (VAR_3 < VAR_5->rnum - 1)
     *(int*)FUNC_1(VAR_5, VAR_3) = *(int*)FUNC_1(VAR_5, VAR_5->rnum - 1);
    --VAR_5->rnum;
    continue;
   }
  } else {

   VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_6);
   if (VAR_7.i32 && VAR_7.i32[0] > 0)
   {
    VAR_4 = 1;
    break;
   }
  }

  ++VAR_3;
 }

 if (!VAR_4)
  FUNC_2(VAR_5, &VAR_1);

 VAR_4 = 0;
 ccv_array_t* VAR_8 = VAR_2.tail;
 FUNC_0(VAR_8);
 for (VAR_3 = 0; VAR_3 < VAR_8->rnum;)
 {
  const int VAR_9 = *(int*)FUNC_1(VAR_8, VAR_3);
  if (VAR_9 == VAR_1)
  {
   VAR_4 = 1;
   break;
  }
  ccv_numeric_data_t VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_9);
  if (VAR_10.i32 && VAR_10.i32[0] > 0)
  {


   if (!VAR_4)
   {
    VAR_4 = 1;
    *(int*)FUNC_1(VAR_8, VAR_3) = VAR_1;
   } else {

    *(int*)FUNC_1(VAR_8, VAR_3) = *(int*)FUNC_1(VAR_8, VAR_8->rnum - 1);
    --VAR_8->rnum;
    continue;
   }
  } else {

   VAR_10 = FUNC_3(VAR_0, VAR_9, VAR_1);
   if (VAR_10.i32 && VAR_10.i32[0] > 0)
   {
    VAR_4 = 1;
    break;
   }
  }

  ++VAR_3;
 }

 if (!VAR_4)
  FUNC_2(VAR_8, &VAR_1);
}
