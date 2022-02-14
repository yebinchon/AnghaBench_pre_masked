
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {unsigned long ksp; scalar_t__ new_child; } ;
struct task_struct {int dummy; } ;
struct reg_window {unsigned long* locals; unsigned long* ins; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ VAR_16 ;
 size_t VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long* FUNC_0 (struct thread_info*) ;
 struct thread_info* FUNC_1 (struct task_struct*) ;

void FUNC_2(unsigned long *VAR_20, struct task_struct *VAR_21)
{
 struct thread_info *VAR_22 = FUNC_1(VAR_21);
 extern unsigned int VAR_23;
 extern unsigned int VAR_24;
 struct reg_window *VAR_25;
 unsigned long VAR_26, VAR_27;
 int VAR_28;

 for (VAR_28 = VAR_4; VAR_28 < VAR_5; VAR_28++)
  VAR_20[VAR_28] = 0;
 VAR_20[VAR_5] = (unsigned long) VAR_22;
 VAR_20[VAR_6] = (unsigned long) VAR_21;
 for (VAR_28 = VAR_10; VAR_28 < VAR_13; VAR_28++)
  VAR_20[VAR_28] = 0;
 VAR_20[VAR_13] = VAR_22->ksp;
 VAR_20[VAR_11] = 0;

 VAR_25 = (struct reg_window *) (VAR_22->ksp + VAR_16);
 for (VAR_28 = 0; VAR_28 < 8; VAR_28++)
  VAR_20[VAR_8 + VAR_28] = VAR_25->locals[VAR_28];
 for (VAR_28 = 0; VAR_28 < 8; VAR_28++)
  VAR_20[VAR_7 + VAR_28] = VAR_25->ins[VAR_28];

 for (VAR_28 = VAR_0; VAR_28 <= VAR_1; VAR_28++)
  VAR_20[VAR_28] = 0;

 if (VAR_22->new_child)
  VAR_26 = (unsigned long) &VAR_24;
 else
  VAR_26 = (unsigned long) &VAR_23;

 VAR_20[VAR_12] = VAR_26;
 VAR_20[VAR_9] = VAR_26 + 4;

 VAR_27 = FUNC_0(VAR_22)[VAR_17];

 VAR_20[VAR_14] = (VAR_19 | VAR_18 | VAR_27);
 VAR_20[VAR_3] = 0;
 VAR_20[VAR_2] = 0;
 VAR_20[VAR_15] = 0;
}
