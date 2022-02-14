
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_m68kfp_struct {int dummy; } ;
struct TYPE_2__ {unsigned long* fp; } ;
struct task_struct {long exit_code; TYPE_1__ thread; int exit_state; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (long**,void*,int) ;
 int FUNC_2 (void*,long**,int) ;
 int FUNC_3 (struct task_struct*,long,long) ;
 int FUNC_4 (struct task_struct*,long,long) ;
 long FUNC_5 (struct task_struct*,long) ;
 int FUNC_6 (unsigned long,unsigned long*) ;
 int FUNC_7 (struct task_struct*,long,long,long) ;
 int FUNC_8 (struct task_struct*,int,unsigned long) ;
 int FUNC_9 (unsigned long,unsigned long*) ;
 int FUNC_10 (struct task_struct*,int ) ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (long) ;
 int FUNC_13 (struct task_struct*) ;

long FUNC_14(struct task_struct *VAR_10, long VAR_11, long VAR_12, long VAR_13)
{
 unsigned long VAR_14;
 int VAR_15, VAR_16 = 0;

 switch (VAR_11) {

 case 136:
 case 137:
  VAR_16 = FUNC_3(VAR_10, VAR_12, VAR_13);
  break;


 case 135:
  if (VAR_12 & 3)
   goto out_eio;
  VAR_12 >>= 2;

  if (VAR_12 >= 0 && VAR_12 < 19) {
   VAR_14 = FUNC_5(VAR_10, VAR_12);
   if (VAR_12 == VAR_4)
    VAR_14 >>= 16;
  } else if (VAR_12 >= 21 && VAR_12 < 49) {
   VAR_14 = VAR_10->thread.fp[VAR_12 - 21];



   if (VAR_3 && (VAR_12 < 45) && !(VAR_12 % 3))
    VAR_14 = ((VAR_14 & 0xffff0000) << 15) |
          ((VAR_14 & 0x0000ffff) << 16);
  } else
   break;
  VAR_16 = FUNC_9(VAR_14, (unsigned long *)VAR_13);
  break;


 case 133:
 case 134:
  VAR_16 = FUNC_4(VAR_10, VAR_12, VAR_13);
  break;

 case 132:
  if (VAR_12 & 3)
   goto out_eio;
  VAR_12 >>= 2;

  if (VAR_12 == VAR_4) {
   VAR_13 &= VAR_6;
   VAR_13 <<= 16;
   VAR_13 |= FUNC_5(VAR_10, VAR_4) & ~(VAR_6 << 16);
  } else if (VAR_12 >= 0 && VAR_12 < 19) {
   if (FUNC_8(VAR_10, VAR_12, VAR_13))
    goto out_eio;
  } else if (VAR_12 >= 21 && VAR_12 < 48) {



   if (VAR_3 && (VAR_12 < 45) && !(VAR_12 % 3)) {
    VAR_13 = (unsigned long)VAR_13 << 15;
    VAR_13 = (VAR_13 & 0xffff0000) |
           ((VAR_13 & 0x0000ffff) >> 1);
   }
   VAR_10->thread.fp[VAR_12 - 21] = VAR_13;
  } else
   goto out_eio;
  break;

 case 128:
 case 141:
  if (!FUNC_12(VAR_13))
   goto out_eio;

  if (VAR_11 == 128)
   FUNC_10(VAR_10, VAR_8);
  else
   FUNC_0(VAR_10, VAR_8);
  VAR_10->exit_code = VAR_13;
  FUNC_11(VAR_10);
  FUNC_13(VAR_10);
  break;






 case 138:
  if (VAR_10->exit_state == VAR_2)
   break;
  VAR_10->exit_code = VAR_5;
  FUNC_11(VAR_10);
  FUNC_13(VAR_10);
  break;

 case 129:
  if (!FUNC_12(VAR_13))
   goto out_eio;

  FUNC_0(VAR_10, VAR_8);
  VAR_14 = FUNC_5(VAR_10, VAR_4) | (VAR_9 << 16);
  FUNC_8(VAR_10, VAR_4, VAR_14);
  FUNC_10(VAR_10, VAR_7);

  VAR_10->exit_code = VAR_13;

  FUNC_13(VAR_10);
  break;

 case 139:
  for (VAR_15 = 0; VAR_15 < 19; VAR_15++) {
   VAR_14 = FUNC_5(VAR_10, VAR_15);
   if (VAR_15 == VAR_4)
    VAR_14 >>= 16;
   VAR_16 = FUNC_9(VAR_14, (unsigned long *)VAR_13);
   if (VAR_16)
    break;
   VAR_13 += sizeof(long);
  }
  break;

 case 130:
  for (VAR_15 = 0; VAR_15 < 19; VAR_15++) {
   VAR_16 = FUNC_6(VAR_14, (unsigned long *)VAR_13);
   if (VAR_16)
    break;
   if (VAR_15 == VAR_4) {
    VAR_14 &= VAR_6;
    VAR_14 <<= 16;
    VAR_14 |= FUNC_5(VAR_10, VAR_4) & ~(VAR_6 << 16);
   }
   FUNC_8(VAR_10, VAR_15, VAR_14);
   VAR_13 += sizeof(long);
  }
  break;

 case 140:
  if (FUNC_2((void *)VAR_13, &VAR_10->thread.fp,
     sizeof(struct user_m68kfp_struct)))
   VAR_16 = -VAR_0;
  break;

 case 131:
  if (FUNC_1(&VAR_10->thread.fp, (void *)VAR_13,
       sizeof(struct user_m68kfp_struct)))
   VAR_16 = -VAR_0;
  break;

 default:
  VAR_16 = FUNC_7(VAR_10, VAR_11, VAR_12, VAR_13);
  break;
 }

 return VAR_16;
out_eio:
 return -VAR_1;
}
