
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct proc {int p_vfs_iopolicy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_2(struct proc *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  FUNC_1((uint16_t)VAR_1, &VAR_2->p_vfs_iopolicy);
 } else {
  FUNC_0(~((uint16_t)VAR_1), &VAR_2->p_vfs_iopolicy);
 }
}
