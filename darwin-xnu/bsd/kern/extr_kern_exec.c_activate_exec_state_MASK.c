
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int thread_t ;
typedef int thread_state_t ;
typedef int task_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_6__ {scalar_t__ threadstate_sz; int entry_point; scalar_t__* threadstate; scalar_t__ is_64bit_addr; int is_64bit_data; } ;
typedef TYPE_2__ load_result_t ;
struct TYPE_5__ {int p_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(task_t VAR_3, proc_t VAR_4, thread_t VAR_5, load_result_t *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_3, VAR_1, 0);
 FUNC_2(VAR_3, VAR_6->is_64bit_addr, VAR_6->is_64bit_data);
 if (VAR_6->is_64bit_addr) {
  FUNC_1(VAR_2, &VAR_4->p_flag);
 } else {
  FUNC_0(~((uint32_t)VAR_2), &VAR_4->p_flag);
 }

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7 != VAR_0) {
  return VAR_7;
 }

 if (VAR_6->threadstate) {
  uint32_t *VAR_8 = VAR_6->threadstate;
  uint32_t VAR_9 = VAR_6->threadstate_sz;

  while (VAR_9 > 0) {
   uint32_t VAR_10 = *VAR_8++;
   uint32_t VAR_11 = *VAR_8++;

   VAR_7 = FUNC_5(VAR_5, VAR_10, (thread_state_t)VAR_8, VAR_11);
   if (VAR_7) {
    return VAR_7;
   }
   VAR_8 += VAR_11;
   VAR_9 -= (VAR_11 + 2) * sizeof(uint32_t);
  }
 }

 FUNC_4(VAR_5, VAR_6->entry_point);

 return VAR_0;
}
