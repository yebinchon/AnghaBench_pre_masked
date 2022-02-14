
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vfs_context_t ;
struct sd_iterargs {int setsdstate; int activecount; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_6__ {int p_shutdownstate; scalar_t__ p_stat; int p_pid; int p_comm; scalar_t__ exit_thread; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(proc_t VAR_6, void * VAR_7)
{
 struct sd_iterargs * VAR_8 = (struct sd_iterargs *)VAR_7;
 vfs_context_t VAR_9 = FUNC_9();

 int VAR_10 = VAR_8->setsdstate;

 FUNC_5(VAR_6);
 VAR_6->p_shutdownstate = VAR_10;
 if (VAR_6->p_stat != VAR_4) {







  if (VAR_6->exit_thread) {
   FUNC_6(VAR_6);

   FUNC_8(VAR_5);
  } else {
   VAR_6->exit_thread = FUNC_2();
   FUNC_4(".");

   FUNC_7(VAR_9, "%s[%d] had to be forced closed with exit1().\n", VAR_6->p_comm, VAR_6->p_pid);

   FUNC_6(VAR_6);
   FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_2,
           VAR_6->p_pid, 0, 1, 0, 0);
   VAR_8->activecount++;
   FUNC_3(VAR_6, 1, (int *)((void*)0));
  }
 } else {
  FUNC_6(VAR_6);
 }

 return VAR_3;
}
