
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct task_struct {long exit_code; int exit_state; } ;
struct TYPE_2__ {int bpt_nsaved; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (struct task_struct*,long,unsigned long*,int,int ) ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 () ;
 long FUNC_4 (struct task_struct*,long,long) ;
 long FUNC_5 (struct task_struct*,long) ;
 int FUNC_6 (struct task_struct*) ;
 long FUNC_7 (struct task_struct*,long,long,long) ;
 long FUNC_8 (struct task_struct*,long,long) ;
 int FUNC_9 (struct task_struct*,int ) ;
 TYPE_1__* FUNC_10 (struct task_struct*) ;
 int FUNC_11 (long) ;
 int FUNC_12 (struct task_struct*) ;

long FUNC_13(struct task_struct *VAR_5, long VAR_6, long VAR_7, long VAR_8)
{
 unsigned long VAR_9;
 size_t VAR_10;
 long VAR_11;

 switch (VAR_6) {

 case 134:
 case 135:
  VAR_10 = FUNC_1(VAR_5, VAR_7, &VAR_9, sizeof(VAR_9), 0);
  VAR_11 = -VAR_1;
  if (VAR_10 != sizeof(VAR_9))
   break;

  FUNC_3();
  VAR_11 = VAR_9;
  break;


 case 133:
  FUNC_3();
  VAR_11 = FUNC_5(VAR_5, VAR_7);
  FUNC_0(VAR_0, ("peek $%ld->%#lx\n", VAR_7, VAR_11));
  break;


 case 131:
 case 132:
  VAR_11 = FUNC_4(VAR_5, VAR_7, VAR_8);
  break;

 case 130:
  FUNC_0(VAR_0, ("poke $%ld<-%#lx\n", VAR_7, VAR_8));
  VAR_11 = FUNC_8(VAR_5, VAR_7, VAR_8);
  break;

 case 128:

 case 137:
  VAR_11 = -VAR_1;
  if (!FUNC_11(VAR_8))
   break;
  if (VAR_6 == 128)
   FUNC_9(VAR_5, VAR_4);
  else
   FUNC_2(VAR_5, VAR_4);
  VAR_5->exit_code = VAR_8;

  FUNC_6(VAR_5);
  FUNC_12(VAR_5);
  VAR_11 = 0;
  break;






 case 136:
  VAR_11 = 0;
  if (VAR_5->exit_state == VAR_2)
   break;
  VAR_5->exit_code = VAR_3;

  FUNC_6(VAR_5);
  FUNC_12(VAR_5);
  break;

 case 129:
  VAR_11 = -VAR_1;
  if (!FUNC_11(VAR_8))
   break;

  FUNC_10(VAR_5)->bpt_nsaved = -1;
  FUNC_2(VAR_5, VAR_4);
  VAR_5->exit_code = VAR_8;
  FUNC_12(VAR_5);

  VAR_11 = 0;
  break;

 default:
  VAR_11 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8);
  break;
 }
 return VAR_11;
}
