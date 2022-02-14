
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sd_iterargs {int signo; int setsdstate; int countproc; int activecount; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_6__ {int p_shutdownstate; scalar_t__ p_stat; int p_listflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_5(proc_t VAR_4, void * VAR_5)
{
 struct sd_iterargs * VAR_6 = (struct sd_iterargs *)VAR_5;
 int VAR_7 = VAR_6->signo;
 int VAR_8 = VAR_6->setsdstate;
 int VAR_9 = VAR_6->countproc;

 FUNC_2(VAR_4);
 VAR_4->p_shutdownstate = VAR_8;
 if (VAR_4->p_stat != VAR_2) {
  FUNC_3(VAR_4);
  if (VAR_9 != 0) {
   FUNC_0();
   VAR_4->p_listflag |= VAR_1;
   VAR_3++;
   FUNC_1();
  }

  FUNC_4(VAR_4, VAR_7);
  if (VAR_9 != 0)
   VAR_6->activecount++;
 } else {
  FUNC_3(VAR_4);
 }

 return VAR_0;
}
