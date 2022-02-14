
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {long r8; long r1; int cr_iip; int r15; scalar_t__ r10; } ;
struct sigscratch {TYPE_2__ pt; } ;
struct TYPE_8__ {int sa_flags; } ;
struct k_sigaction {TYPE_1__ sa; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
struct TYPE_11__ {int saved_sigmask; int blocked; } ;
struct TYPE_10__ {int status; } ;


 int VAR_0 ;




 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (int *,struct k_sigaction*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (int,struct k_sigaction*,int *,int *,struct sigscratch*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (long) ;
 int FUNC_8 (TYPE_2__*) ;

void
FUNC_9 (struct sigscratch *VAR_6, long VAR_7)
{
 struct k_sigaction VAR_8;
 sigset_t *VAR_9;
 siginfo_t VAR_10;
 long VAR_11 = VAR_7;
 long VAR_12 = VAR_6->pt.r8;







 if (!FUNC_8(&VAR_6->pt))
  return;

 if (FUNC_2()->status & VAR_3)
  VAR_9 = &VAR_5->saved_sigmask;
 else
  VAR_9 = &VAR_5->blocked;





 while (1) {
  int VAR_13 = FUNC_3(&VAR_10, &VAR_8, &VAR_6->pt, ((void*)0));







  if (FUNC_1(&VAR_6->pt)) {
   if (VAR_7) {
    if (VAR_12 >= 0)
     VAR_11 = 0;
    else
     VAR_12 = -VAR_12;
   }
  } else if ((long) VAR_6->pt.r10 != -1)






   VAR_11 = 0;

  if (VAR_13 <= 0)
   break;

  if (FUNC_7(VAR_11)) {
   switch (VAR_12) {
         case 128:
         case 131:
    VAR_6->pt.r8 = (FUNC_1(&VAR_6->pt) ? -(VAR_0) : (VAR_0));

    break;

         case 129:
    if ((VAR_8.sa.sa_flags & VAR_1) == 0) {
     VAR_6->pt.r8 = (FUNC_1(&VAR_6->pt) ? -(VAR_0) : (VAR_0));

     break;
    }
         case 130:
    if (FUNC_1(&VAR_6->pt)) {
     VAR_6->pt.r8 = VAR_6->pt.r1;
     VAR_6->pt.cr_iip -= 2;
    } else
     FUNC_5(&VAR_6->pt);
    VAR_11 = 0;
   }
  }





  if (FUNC_4(VAR_13, &VAR_8, &VAR_10, VAR_9, VAR_6)) {






   FUNC_2()->status &= ~VAR_3;
   return;
  }
 }


 if (VAR_11) {

  if (VAR_12 == 131 || VAR_12 == 129 || VAR_12 == 130
      || VAR_12 == 128)
  {
   if (FUNC_1(&VAR_6->pt)) {
    VAR_6->pt.r8 = VAR_6->pt.r1;
    VAR_6->pt.cr_iip -= 2;
    if (VAR_12 == 128)
     VAR_6->pt.r8 = 0;
   } else {





    FUNC_5(&VAR_6->pt);
    if (VAR_12 == 128)
     VAR_6->pt.r15 = VAR_4;
   }
  }
 }



 if (FUNC_2()->status & VAR_3) {
  FUNC_2()->status &= ~VAR_3;
  FUNC_6(VAR_2, &VAR_5->saved_sigmask, ((void*)0));
 }
}
