
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int const unfoldable_except_ref; scalar_t__ type; scalar_t__* p_refs; int pin_mem; int ref; TYPE_2__* tail; TYPE_2__* head; scalar_t__ size; scalar_t__ r_refs; } ;
typedef TYPE_1__ ccv_nnc_tensor_block_t ;
struct TYPE_13__ {int rnum; } ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (TYPE_1__,int) ;
 int FUNC_6 (TYPE_1__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,int const) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_11 (int,int ,int ) ;

__attribute__((used)) static int FUNC_12(ccv_nnc_tensor_block_t* const VAR_0, const int VAR_1, const int VAR_2)
{

 if (!FUNC_2(VAR_0[VAR_1]) &&
  (!FUNC_3(VAR_0[VAR_2]) || VAR_0[VAR_2].unfoldable_except_ref == VAR_1 + 1) &&
  VAR_0[VAR_1].tail->rnum == 1 &&
  VAR_0[VAR_2].head->rnum == 1 &&
  VAR_0[VAR_1].type == VAR_0[VAR_2].type &&
  *(int*)FUNC_10(VAR_0[VAR_1].tail, 0) == *(int*)FUNC_10(VAR_0[VAR_2].head, 0))
 {

  FUNC_7(FUNC_0(VAR_0[VAR_1]));
  FUNC_7(FUNC_0(VAR_0[VAR_2]));
  FUNC_9(VAR_0[VAR_1].tail);
  VAR_0[VAR_1].tail = VAR_0[VAR_2].tail;
  if (VAR_0[VAR_2].p_refs[0])
  {
   FUNC_7(VAR_0[VAR_2].p_refs[1] == 0);
   if (!VAR_0[VAR_1].p_refs[0])
    VAR_0[VAR_1].p_refs[0] = VAR_0[VAR_2].p_refs[0];
   else
    VAR_0[VAR_1].p_refs[1] = VAR_0[VAR_2].p_refs[0];
  }
  VAR_0[VAR_1].pin_mem = VAR_0[VAR_1].pin_mem || VAR_0[VAR_2].pin_mem;
  FUNC_5(VAR_0[VAR_1], FUNC_4(VAR_0[VAR_1]) | FUNC_4(VAR_0[VAR_2]));
  FUNC_9(VAR_0[VAR_2].head);
  if (FUNC_2(VAR_0[VAR_2]))
   FUNC_6(VAR_0[VAR_1]);

  FUNC_1(VAR_0[VAR_2]);
  VAR_0[VAR_2].ref = VAR_1 + 1;
  if (!VAR_0[VAR_1].r_refs)
   VAR_0[VAR_1].r_refs = FUNC_11(sizeof(int), 0, 0);
  FUNC_8(VAR_0[VAR_1].r_refs, VAR_2 + 1);
  VAR_0[VAR_2].size = 0;
  VAR_0[VAR_2].head = 0;
  VAR_0[VAR_2].tail = 0;
  return 1;
 }
 return 0;
}
