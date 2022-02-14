
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int s_sid; } ;
struct getsid_args {scalar_t__ pid; } ;
typedef int proc_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct session* FUNC_2 (int ) ;
 int FUNC_3 (struct session*) ;

int
FUNC_4(proc_t VAR_1, struct getsid_args *VAR_2, int32_t *VAR_3)
{
 proc_t VAR_4;
 int VAR_5 = 0;
 struct session * VAR_6;

 VAR_4 = VAR_1;
 if (VAR_2->pid == 0)
  goto found;

 if ((VAR_4 = FUNC_0(VAR_2->pid)) == 0)
  return (VAR_0);
 VAR_5 = 1;
found:
 VAR_6 = FUNC_2(VAR_4);
 *VAR_3 = VAR_6->s_sid;
 FUNC_3(VAR_6);

 if (VAR_5 != 0)
  FUNC_1(VAR_4);
 return (0);
}
