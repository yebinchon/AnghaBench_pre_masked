
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ uint32_t ;
struct thread_snapshot {int dummy; } ;
struct task_snapshot {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;

uint32_t
FUNC_1(uint32_t VAR_5)
{
 vm_size_t VAR_6;
 vm_size_t VAR_7;
 uint32_t VAR_8;

 VAR_6 = (VAR_4 * sizeof(struct thread_snapshot));
 VAR_7 = (VAR_3 * (sizeof(struct task_snapshot) + VAR_2));

 VAR_8 = (uint32_t) FUNC_0((VAR_6 + VAR_7 + VAR_1), VAR_0);
 if (VAR_8 < VAR_5) {
  VAR_8 = (uint32_t) FUNC_0(VAR_5, VAR_0);
 }

 return VAR_8;
}
