
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chsc_sei_area {int rs; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct chsc_sei_area *VAR_0)
{
 int VAR_1;

 FUNC_0(4, "chsc: scm change notification\n");
 if (VAR_0->rs != 7)
  return;

 VAR_1 = FUNC_1();
 if (VAR_1)
  FUNC_0(0, "chsc: updating change notification"
         " failed (rc=%d).\n", VAR_1);
}
