
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_faultinfo {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int ,struct ptrace_faultinfo*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 struct ptrace_faultinfo VAR_5;
 int VAR_6, VAR_7;

 FUNC_0("  - PTRACE_FAULTINFO...");
 VAR_6 = FUNC_3();

 VAR_7 = FUNC_2(VAR_1, VAR_6, 0, &VAR_5);
 if (VAR_7 < 0) {
  if (VAR_3 == VAR_0)
   FUNC_0("not found\n");
  else
   FUNC_1("not found");
 } else if (VAR_2)
  FUNC_0("found but disabled on command line\n");
 else {
  VAR_4 = 1;
  FUNC_0("found\n");
 }

 FUNC_4(VAR_6, 1, 1);
}
