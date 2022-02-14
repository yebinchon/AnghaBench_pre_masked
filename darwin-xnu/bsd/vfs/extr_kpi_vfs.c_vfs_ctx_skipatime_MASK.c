
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef scalar_t__ thread_t ;
struct uthread {int uu_flag; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_lflag; int p_vfs_iopolicy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct uthread* FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3 (vfs_context_t VAR_4) {
 struct uthread *VAR_5;
 proc_t VAR_6;
 thread_t VAR_7;

 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = FUNC_2 (VAR_4);


 if (VAR_7 && VAR_6) {
  VAR_5 = FUNC_0 (VAR_7);

  if (VAR_6->p_lflag & VAR_0) {
   return 1;
  }

  if (VAR_5) {
   if (VAR_5->uu_flag & (VAR_3 | VAR_2)) {
    return 1;
   }
  }

  if (VAR_6->p_vfs_iopolicy & VAR_1) {
   return 1;
  }
 }
 return 0;
}
