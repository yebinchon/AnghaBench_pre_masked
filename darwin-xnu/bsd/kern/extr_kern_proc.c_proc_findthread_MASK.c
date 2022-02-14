
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct uthread {int uu_flag; scalar_t__ uu_proc; } ;
typedef scalar_t__ proc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct uthread* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;

proc_t
FUNC_5(thread_t VAR_2)
{
 proc_t VAR_3 = VAR_0;
 struct uthread *VAR_4;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 && (VAR_4->uu_flag & VAR_1))
  VAR_3 = VAR_4->uu_proc;
 else
  VAR_3 = (proc_t)(FUNC_1(VAR_2));
 VAR_3 = FUNC_4(VAR_3);
 FUNC_3();
 return(VAR_3);
}
