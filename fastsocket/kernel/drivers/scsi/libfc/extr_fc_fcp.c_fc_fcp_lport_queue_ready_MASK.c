
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {scalar_t__ state; int qfull; scalar_t__ link_up; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct fc_lport *VAR_1)
{

 return (VAR_1->state == VAR_0) &&
  VAR_1->link_up && !VAR_1->qfull;
}
