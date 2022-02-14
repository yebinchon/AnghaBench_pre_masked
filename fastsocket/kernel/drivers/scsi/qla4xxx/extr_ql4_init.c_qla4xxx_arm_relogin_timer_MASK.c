
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddb_entry {scalar_t__ default_time2wait; int retry_relogin_timer; int relogin_timer; } ;


 int FUNC_0 (int *,scalar_t__) ;

void FUNC_1(struct ddb_entry *VAR_0)
{
 FUNC_0(&VAR_0->relogin_timer, 0);
 FUNC_0(&VAR_0->retry_relogin_timer,
     VAR_0->default_time2wait + 4);

}
