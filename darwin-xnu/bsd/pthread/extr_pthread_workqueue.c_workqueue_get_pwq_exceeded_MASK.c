
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_workqueueinfo {int pwq_state; } ;
typedef int * proc_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct proc_workqueueinfo*) ;

boolean_t
FUNC_2(void *VAR_5, boolean_t *VAR_6,
  boolean_t *VAR_7)
{
 proc_t VAR_8 = VAR_5;
 struct proc_workqueueinfo VAR_9;
 int VAR_10;

 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_7 != ((void*)0));

 VAR_10 = FUNC_1(VAR_8, &VAR_9);
 if (VAR_10) {
  return VAR_0;
 }
 if (!(VAR_9.pwq_state & VAR_4)) {
  return VAR_0;
 }

 *VAR_6 = (VAR_9.pwq_state & VAR_3);
 *VAR_7 = (VAR_9.pwq_state & VAR_2);

 return VAR_1;
}
