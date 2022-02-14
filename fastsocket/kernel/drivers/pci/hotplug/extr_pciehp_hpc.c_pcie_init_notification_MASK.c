
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int notification_enabled; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 int FUNC_1 (struct controller*) ;
 scalar_t__ FUNC_2 (struct controller*) ;

int FUNC_3(struct controller *VAR_0)
{
 if (FUNC_2(VAR_0))
  return -1;
 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_0);
  return -1;
 }
 VAR_0->notification_enabled = 1;
 return 0;
}
