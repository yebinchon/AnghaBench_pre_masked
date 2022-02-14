
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priority_queue {int dummy; } ;
typedef scalar_t__ priority_queue_key_t ;
typedef int priority_queue_entry_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct priority_queue*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct priority_queue*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct priority_queue*,int ) ;
 scalar_t__ FUNC_3 (struct priority_queue*) ;

__attribute__((used)) static boolean_t
FUNC_4(struct priority_queue *VAR_2,
  priority_queue_entry_t VAR_3, priority_queue_key_t VAR_4)
{
 priority_queue_key_t VAR_5 = FUNC_3(VAR_2);

 if (FUNC_2(VAR_2, VAR_3) < VAR_4) {
  if (FUNC_1(VAR_2, VAR_3, VAR_4,
    VAR_1)) {
   return VAR_5 != FUNC_3(VAR_2);
  }
 } else if (FUNC_2(VAR_2, VAR_3) > VAR_4) {
  if (FUNC_0(VAR_2, VAR_3, VAR_4,
    VAR_1)) {
   return VAR_5 != FUNC_3(VAR_2);
  }
 }

 return VAR_0;
}
