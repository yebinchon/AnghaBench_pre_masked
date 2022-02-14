
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {long* gr; } ;


 long VAR_0 ;


 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 long FUNC_0 (struct task_struct*,long,long,long) ;
 long FUNC_1 (unsigned long,unsigned long*) ;
 TYPE_1__* FUNC_2 (struct task_struct*) ;

long FUNC_3(struct task_struct *VAR_10, long VAR_11, long VAR_12, long VAR_13)
{
 unsigned long VAR_14;
 long VAR_15 = -VAR_0;

 switch (VAR_11) {



 case 129:
  if ((VAR_12 & (sizeof(long)-1)) ||
      (unsigned long) VAR_12 >= sizeof(struct pt_regs))
   break;
  VAR_14 = *(unsigned long *) ((char *) FUNC_2(VAR_10) + VAR_12);
  VAR_15 = FUNC_1(VAR_14, (unsigned long *) VAR_13);
  break;







 case 128:




  if (VAR_12 == VAR_7) {





   VAR_13 &= VAR_9;
   FUNC_2(VAR_10)->gr[0] &= ~VAR_9;
   FUNC_2(VAR_10)->gr[0] |= VAR_13;
   VAR_15 = 0;
   break;
  }

  if ((VAR_12 & (sizeof(long)-1)) ||
      (unsigned long) VAR_12 >= sizeof(struct pt_regs))
   break;
  if ((VAR_12 >= VAR_3 && VAR_12 <= VAR_4) ||
    VAR_12 == VAR_5 || VAR_12 == VAR_6 ||
    (VAR_12 >= VAR_1 && VAR_12 <= VAR_2 + 4) ||
    VAR_12 == VAR_8) {
   *(unsigned long *) ((char *) FUNC_2(VAR_10) + VAR_12) = VAR_13;
   VAR_15 = 0;
  }
  break;

 default:
  VAR_15 = FUNC_0(VAR_10, VAR_11, VAR_12, VAR_13);
  break;
 }

 return VAR_15;
}
