
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct c_slot {int dummy; } ;
typedef TYPE_1__* c_segment_t ;
struct TYPE_3__ {scalar_t__ c_nextslot; scalar_t__ c_slot_var_array_len; int c_lock; struct c_slot* c_slot_var_array; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct c_slot*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(c_segment_t VAR_2)
{
 struct c_slot *VAR_3 = ((void*)0);
 struct c_slot *VAR_4 = ((void*)0);
 int VAR_5;
 int VAR_6;

 if (VAR_2->c_nextslot < VAR_1)
  return;

 if ((VAR_2->c_nextslot - VAR_1) >= VAR_2->c_slot_var_array_len) {

  VAR_6 = VAR_2->c_slot_var_array_len;
  VAR_3 = VAR_2->c_slot_var_array;

  if (VAR_6 == 0)
   VAR_5 = VAR_0;
  else
   VAR_5 = VAR_6 * 2;

  VAR_4 = (struct c_slot *)FUNC_0(sizeof(struct c_slot) * VAR_5);

  FUNC_2(&VAR_2->c_lock);

  if (VAR_3)
   FUNC_4((char *)VAR_4, (char *)VAR_3, sizeof(struct c_slot) * VAR_6);

  VAR_2->c_slot_var_array_len = VAR_5;
  VAR_2->c_slot_var_array = VAR_4;

  FUNC_3(&VAR_2->c_lock);

  if (VAR_3)
   FUNC_1(VAR_3, sizeof(struct c_slot) * VAR_6);
 }
}
