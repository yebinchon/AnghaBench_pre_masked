
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dup_p_refs; scalar_t__ r_refs; scalar_t__ tail; scalar_t__ head; } ;
typedef TYPE_1__ ccv_nnc_tensor_block_t ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(ccv_nnc_tensor_block_t* const VAR_0, const int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  if (VAR_0[VAR_2].head)
   FUNC_1(VAR_0[VAR_2].head);
  if (VAR_0[VAR_2].tail)
   FUNC_1(VAR_0[VAR_2].tail);
  if (VAR_0[VAR_2].r_refs)
   FUNC_1(VAR_0[VAR_2].r_refs);
  if (VAR_0[VAR_2].dup_p_refs)
   FUNC_1(VAR_0[VAR_2].dup_p_refs);
 }
 FUNC_0(VAR_0);
}
