
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,int,int ,int ) ;
 int FUNC_7 (int,int*,int ) ;

__attribute__((used)) static int FUNC_8(int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;

 if (FUNC_6(VAR_0, VAR_1, 0, 0) < 0) {
  FUNC_5("stop_ptraced_child : ptrace failed");
  return -1;
 }
 FUNC_0(VAR_5 = FUNC_7(VAR_1, &VAR_4, 0));
 if (!FUNC_2(VAR_4) || (FUNC_1(VAR_4) != VAR_2)) {
  int VAR_7 = FUNC_1(VAR_4);
  if (VAR_7 == 2)
   FUNC_4("check_ptrace : child exited with status 2. "
      "\nDisabling SYSEMU support.\n");
  FUNC_4("check_ptrace : child exited with exitcode %d, while "
     "expecting %d; status 0x%x\n", VAR_7,
     VAR_2, VAR_4);
  if (VAR_3)
   FUNC_3(1);
  VAR_6 = -1;
 }

 return VAR_6;
}
