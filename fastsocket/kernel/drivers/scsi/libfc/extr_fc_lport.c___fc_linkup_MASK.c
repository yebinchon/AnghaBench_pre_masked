
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int link_up; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fc_lport*) ;

void FUNC_1(struct fc_lport *VAR_1)
{
 if (!VAR_1->link_up) {
  VAR_1->link_up = 1;

  if (VAR_1->state == VAR_0)
   FUNC_0(VAR_1);
 }
}
