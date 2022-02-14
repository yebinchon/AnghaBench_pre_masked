
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int row_count; int* shuffled_idx; int sfmt; scalar_t__ rng; } ;
typedef TYPE_1__ ccv_cnnp_dataframe_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 int FUNC_6 (int *,int*,int,int) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(ccv_cnnp_dataframe_t* const VAR_1)
{
 FUNC_0(VAR_1->row_count);
 int VAR_2;
 if (!VAR_1->shuffled_idx)
 {
  VAR_1->shuffled_idx = (int*)FUNC_1(sizeof(int) * VAR_1->row_count);
  for (VAR_2 = 0; VAR_2 < VAR_1->row_count; VAR_2++)
   VAR_1->shuffled_idx[VAR_2] = VAR_2;






  FUNC_7(&VAR_1->sfmt, (uint32_t)VAR_1);

 }



 FUNC_6(&VAR_1->sfmt, VAR_1->shuffled_idx, VAR_1->row_count, sizeof(int));

}
