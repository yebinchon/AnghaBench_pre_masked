
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_dev {int helper_pid; int telnetd_pid; } ;


 int FUNC_0 (int,int) ;

void FUNC_1(void *VAR_0)
{
 struct port_dev *VAR_1 = VAR_0;

 if (VAR_1->helper_pid != -1)
  FUNC_0(VAR_1->helper_pid, 0);
 if (VAR_1->telnetd_pid != -1)
  FUNC_0(VAR_1->telnetd_pid, 1);
 VAR_1->helper_pid = -1;
 VAR_1->telnetd_pid = -1;
}
