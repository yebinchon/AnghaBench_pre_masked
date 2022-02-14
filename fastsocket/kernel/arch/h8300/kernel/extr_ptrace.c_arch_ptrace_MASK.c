
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user {int dummy; } ;
struct task_struct {long exit_code; int exit_state; TYPE_1__* mm; } ;
struct TYPE_2__ {unsigned long start_code; unsigned long start_data; unsigned long end_code; unsigned long end_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,long,long) ;
 int FUNC_2 (unsigned long,unsigned long*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 unsigned long FUNC_5 (struct task_struct*,int) ;
 int FUNC_6 (struct task_struct*,int,unsigned long) ;
 int FUNC_7 (struct task_struct*,long) ;
 int FUNC_8 (unsigned long,unsigned long*) ;
 int FUNC_9 (struct task_struct*,long,unsigned long*) ;
 int FUNC_10 (struct task_struct*,int ) ;
 int FUNC_11 (long) ;
 int FUNC_12 (struct task_struct*) ;

long FUNC_13(struct task_struct *VAR_7, long VAR_8, long VAR_9, long VAR_10)
{
 int VAR_11;

 switch (VAR_8) {
  case 135:
  case 136: {
   unsigned long VAR_12;

   VAR_11 = FUNC_9(VAR_7, VAR_9, &VAR_12);
   if (VAR_11 < 0)
    break ;
   VAR_11 = FUNC_8(VAR_12, (unsigned long *) VAR_10);
   break ;
  }


  case 134: {
   unsigned long VAR_13 = 0;

   if ((VAR_9 & 3) || VAR_9 < 0 || VAR_9 >= sizeof(struct user)) {
    VAR_11 = -VAR_1;
    break ;
   }

          VAR_11 = 0;
   VAR_9 = VAR_9 >> 2;

   if (VAR_9 < VAR_3)
    VAR_13 = FUNC_5(VAR_7, VAR_9);
   else {
    switch(VAR_9) {
    case 49:
     VAR_13 = VAR_7->mm->start_code;
     break ;
    case 50:
     VAR_13 = VAR_7->mm->start_data;
     break ;
    case 51:
     VAR_13 = VAR_7->mm->end_code;
     break ;
    case 52:
     VAR_13 = VAR_7->mm->end_data;
     break ;
    default:
     VAR_11 = -VAR_1;
    }
   }
   if (!VAR_11)
    VAR_11 = FUNC_8(VAR_13,(unsigned long *) VAR_10);
   break ;
  }


  case 132:
  case 133:
   VAR_11 = FUNC_1(VAR_7, VAR_9, VAR_10);
   break;

  case 131:
   if ((VAR_9 & 3) || VAR_9 < 0 || VAR_9 >= sizeof(struct user)) {
    VAR_11 = -VAR_1;
    break ;
   }
   VAR_9 = VAR_9 >> 2;

   if (VAR_9 == VAR_4) {
    VAR_11 = -VAR_1;
    break ;
   }
   if (VAR_9 < VAR_3) {
    VAR_11 = FUNC_6(VAR_7, VAR_9, VAR_10);
    break ;
   }
   VAR_11 = -VAR_1;
   break ;
  case 128:
  case 140: {
   VAR_11 = -VAR_1;
   if (!FUNC_11(VAR_10))
    break ;
   if (VAR_8 == 128)
    FUNC_10(VAR_7, VAR_6);
   else
    FUNC_0(VAR_7, VAR_6);
   VAR_7->exit_code = VAR_10;
   FUNC_12(VAR_7);

   FUNC_3(VAR_7);
   VAR_11 = 0;
  }






  case 137: {

   VAR_11 = 0;
   if (VAR_7->exit_state == VAR_2)
    break;
   VAR_7->exit_code = VAR_5;
   FUNC_3(VAR_7);
   FUNC_12(VAR_7);
   break;
  }

  case 129: {
   VAR_11 = -VAR_1;
   if (!FUNC_11(VAR_10))
    break;
   FUNC_0(VAR_7, VAR_6);
   VAR_7->exit_code = VAR_10;
   FUNC_4(VAR_7);
   FUNC_12(VAR_7);
   VAR_11 = 0;
   break;
  }

  case 139:
   VAR_11 = FUNC_7(VAR_7, VAR_10);
   break;

  case 138: {
     int VAR_14;
   unsigned long VAR_15;
   for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
       VAR_15 = FUNC_5(VAR_7, VAR_14);
       if (FUNC_8(VAR_15, (unsigned long *) VAR_10)) {
    VAR_11 = -VAR_0;
    break;
       }
       VAR_10 += sizeof(long);
   }
   VAR_11 = 0;
   break;
  }

  case 130: {
   int VAR_16;
   unsigned long VAR_17;
   for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
       if (FUNC_2(VAR_17, (unsigned long *) VAR_10)) {
    VAR_11 = -VAR_0;
    break;
       }
       FUNC_6(VAR_7, VAR_16, VAR_17);
       VAR_10 += sizeof(long);
   }
   VAR_11 = 0;
   break;
  }

  default:
   VAR_11 = -VAR_1;
   break;
 }
 return VAR_11;
}
