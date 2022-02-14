
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int thread_t ;
typedef scalar_t__ thread_continue_t ;
struct uthread {char const* uu_wmesg; int (* uu_continuation ) (int) ;int uu_pri; int uu_timo; int uu_flag; int * uu_wchan; int * uu_mtx; } ;
struct proc {int p_priority; TYPE_3__* p_sigacts; TYPE_2__* p_stats; } ;
typedef int lck_mtx_t ;
typedef int * caddr_t ;
struct TYPE_6__ {int ps_sigintr; } ;
struct TYPE_4__ {int ru_nvcsw; } ;
struct TYPE_5__ {TYPE_1__ p_ru; } ;


 int FUNC_0 (struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct proc*,struct uthread*) ;
 int VAR_11 ;

 scalar_t__ VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 struct proc* FUNC_6 () ;
 int FUNC_7 () ;
 struct uthread* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int *,int) ;
 int FUNC_12 (int *,int,int *,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(
 caddr_t VAR_18,
 int VAR_19,
 const char *VAR_20,
 u_int64_t VAR_21,
 int (*VAR_22)(int),
        lck_mtx_t *VAR_23)
{
 struct proc *VAR_24;
 thread_t VAR_25 = FUNC_7();
 struct uthread * VAR_26;
 int VAR_27, VAR_28;
 int VAR_29 = VAR_19 & VAR_8;
 int VAR_30 = VAR_19 & VAR_10;
 int VAR_31;
 int VAR_32 = 0;

 VAR_26 = FUNC_8(VAR_25);

 VAR_24 = FUNC_6();
 VAR_24->p_priority = VAR_19 & VAR_9;

 if (VAR_24->p_stats != ((void*)0))
  FUNC_1(&VAR_24->p_stats->p_ru.ru_nvcsw);

 if (VAR_19 & VAR_7)
  VAR_28 = VAR_11;
 else
  VAR_28 = VAR_13;


 VAR_26->uu_wchan = VAR_18;
 VAR_26->uu_wmesg = VAR_20 ? VAR_20 : "unknown";

 if (VAR_23 != ((void*)0) && VAR_18 != ((void*)0) && (thread_continue_t)VAR_22 == VAR_12) {
  int VAR_33;

  if (VAR_29)
   VAR_33 = VAR_6;
  else
   VAR_33 = VAR_4;

  if (VAR_30)
   VAR_33 |= VAR_5;

  if (VAR_21)
   VAR_31 = FUNC_12(VAR_23, VAR_33, VAR_18, VAR_28, VAR_21);
  else
   VAR_31 = FUNC_11(VAR_23, VAR_33, VAR_18, VAR_28);
 }
 else {
  if (VAR_18 != ((void*)0))
   FUNC_4(VAR_18, VAR_28, VAR_21);
  if (VAR_23)
   FUNC_13(VAR_23);

  if (VAR_28 == VAR_11) {
   if (FUNC_2(VAR_24,VAR_26)) {
    if ((VAR_27 = FUNC_0(VAR_24)) != 0) {
     if (FUNC_5(VAR_25, 130) == VAR_3)
      goto block;
     if (VAR_24->p_sigacts->ps_sigintr & FUNC_14(VAR_27))
      VAR_32 = VAR_0;
     else
      VAR_32 = VAR_1;
     if (VAR_23 && !VAR_29) {
      if (VAR_30)
       FUNC_10(VAR_23);
      else
       FUNC_9(VAR_23);
     }
     goto out;
    }
   }
   if (FUNC_16(VAR_25)) {
    if (FUNC_5(VAR_25, 130) == VAR_3)
     goto block;
    VAR_32 = VAR_0;

    if (VAR_23 && !VAR_29) {
     if (VAR_30)
      FUNC_10(VAR_23);
     else
      FUNC_9(VAR_23);
    }
    goto out;
   }
  }


block:
  if ((thread_continue_t)VAR_22 != VAR_12) {
          VAR_26->uu_continuation = VAR_22;
   VAR_26->uu_pri = VAR_19;
   VAR_26->uu_timo = VAR_21? 1: 0;
   VAR_26->uu_mtx = VAR_23;
   (void) FUNC_15(VAR_17);

  }

  VAR_31 = FUNC_15(VAR_12);

  if (VAR_23 && !VAR_29) {
   if (VAR_30)
    FUNC_10(VAR_23);
   else
    FUNC_9(VAR_23);
  }
 }

 switch (VAR_31) {
  case 128:
   VAR_32 = VAR_2;
   break;
  case 131:
  case 129:





   if (VAR_28 != VAR_11)
    break;

  case 130:
   if (VAR_28 == VAR_11) {
    if (FUNC_16(VAR_25)) {
     VAR_32 = VAR_0;
    } else if (FUNC_2(VAR_24, VAR_26)) {
     if ((VAR_27 = FUNC_0(VAR_24)) != 0) {
      if (VAR_24->p_sigacts->ps_sigintr & FUNC_14(VAR_27))
       VAR_32 = VAR_0;
      else
       VAR_32 = VAR_1;
     }
     if (FUNC_16(VAR_25)) {
      VAR_32 = VAR_0;
     }
    } else if( (VAR_26->uu_flag & ( VAR_15 | VAR_14 | VAR_16)) == VAR_14) {

                                        VAR_32 = VAR_0;
                                }
   } else
    VAR_32 = VAR_0;
   break;
 }
out:
 if (VAR_32 == VAR_0 || VAR_32 == VAR_1)
  FUNC_3(VAR_25);
 VAR_26->uu_wchan = ((void*)0);
 VAR_26->uu_wmesg = ((void*)0);

 return (VAR_32);
}
