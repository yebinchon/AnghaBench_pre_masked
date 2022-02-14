
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char const*,char*,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0)
{
 pid_t VAR_1;

 VAR_1 = FUNC_3();
 if (VAR_1 < 0) {
  FUNC_0("fork failed\n");
  return;
 } else if (VAR_1 == 0) {
  FUNC_1("/bin/modprobe", "modprobe", VAR_0, "-q", ((void*)0));
  FUNC_1("/sbin/modprobe", "modprobe", VAR_0, "-q", ((void*)0));
  FUNC_2(1);
 } else {
  FUNC_4(VAR_1, ((void*)0), 0);
 }
}
