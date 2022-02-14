
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct percpu_struct {unsigned long flags; } ;
struct halt_info {scalar_t__ mode; int restart_cmd; } ;
struct TYPE_4__ {int (* kill_arch ) (scalar_t__) ;} ;
struct TYPE_3__ {int processor_size; scalar_t__ processor_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_14(void *VAR_9)
{
 struct halt_info *VAR_10 = (struct halt_info *)VAR_9;
 struct percpu_struct *VAR_11;
 unsigned long *VAR_12, VAR_13;
 int VAR_14 = FUNC_10();


 FUNC_5();

 VAR_11 = (struct percpu_struct *)
   ((unsigned long)VAR_7 + VAR_7->processor_offset
    + VAR_7->processor_size * VAR_14);
 VAR_12 = &VAR_11->flags;
 VAR_13 = *VAR_12;


 VAR_13 &= ~0x00ff0001UL;
 if (VAR_10->mode == VAR_0) {
  if (!VAR_10->restart_cmd) {
   VAR_13 |= 0x00020000UL;
  } else {
   VAR_13 |= 0x00030000UL;
  }
 } else {
  VAR_13 |= 0x00040000UL;
 }
 *VAR_12 = VAR_13;
 if (VAR_3) {
  FUNC_6();
  FUNC_9(VAR_8);
 }

 if (VAR_2.kill_arch)
  VAR_2.kill_arch(VAR_10->mode);

 if (! VAR_3 && VAR_10->mode != VAR_0) {



  return;
 }

 if (VAR_3)
  FUNC_11();

 FUNC_2();
}
