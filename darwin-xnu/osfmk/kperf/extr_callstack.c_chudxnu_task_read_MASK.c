
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_map_t ;
typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ task_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int recover; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ,void*,int ) ;

__attribute__((used)) static kern_return_t
FUNC_6(
  task_t VAR_2,
  void *VAR_3,
  uint64_t VAR_4,
  vm_size_t VAR_5)
{

 kern_return_t VAR_6 = VAR_1;

 if (FUNC_4()) {
  return VAR_0;
 }

 if (FUNC_1() == VAR_2) {
  thread_t VAR_7 = FUNC_2();
  vm_offset_t VAR_8 = VAR_7->recover;

  if (FUNC_0(VAR_4, VAR_3, VAR_5)) {
   VAR_6 = VAR_0;
  }
  VAR_7->recover = VAR_8;
 } else {
  vm_map_t VAR_9 = FUNC_3(VAR_2);
  VAR_6 = FUNC_5(VAR_9, VAR_4, VAR_3, VAR_5);
 }

 return VAR_6;
}
