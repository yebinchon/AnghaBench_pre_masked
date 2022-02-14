
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_5__ {scalar_t__ p_ppid; int p_lflag; scalar_t__ p_oppid; int p_xstat; int p_csflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;



 int VAR_15 ;




 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(proc_t VAR_19, uint64_t VAR_20, uint32_t *VAR_21)
{
 uint32_t VAR_22 = 0;
 uint32_t VAR_23 = (uint32_t)VAR_20;

 FUNC_0(VAR_19);





 do {
  pid_t VAR_24 = FUNC_1();

  if (VAR_19->p_ppid == VAR_24)
   break;

  if ((VAR_19->p_lflag & VAR_18) != 0 &&
      (VAR_19->p_oppid == VAR_24))
   break;

  FUNC_2(VAR_19);
  return (VAR_1);
 } while (0);

 if ((VAR_23 & VAR_2) != 0) {

  VAR_22 |= (VAR_19->p_xstat & VAR_14);
 }

 if ((VAR_23 & VAR_5) != 0) {

  if ((VAR_19->p_lflag & VAR_16) != 0) {
   VAR_22 |= VAR_4;
  }

  if ((VAR_19->p_lflag & VAR_17) != 0) {
   VAR_22 |= VAR_6;

   switch (VAR_19->p_lflag & VAR_15) {
   case 130:
    VAR_22 |= VAR_11;
    break;
   case 129:
    VAR_22 |= VAR_12;
    break;
   case 134:
    VAR_22 |= VAR_7;
    break;
   case 128:
    VAR_22 |= VAR_13;
    break;
   case 133:
    VAR_22 |= VAR_8;
    break;
   case 131:
    VAR_22 |= VAR_10;
    break;
   case 132:
    VAR_22 |= VAR_9;
    break;
   }
  }

  if ((VAR_19->p_csflags & VAR_0) != 0) {
   VAR_22 |= VAR_3;
  }
 }

 FUNC_2(VAR_19);

 *VAR_21 = VAR_22;

 return (0);
}
