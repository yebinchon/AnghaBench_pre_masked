
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {int credits; int oplocks; int req_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct TCP_Server_Info *VAR_1, const int VAR_2)
{
 FUNC_0(&VAR_1->req_lock);
 VAR_1->credits = VAR_2;
 VAR_1->oplocks = VAR_2 > 1 ? VAR_0 : 0;
 FUNC_1(&VAR_1->req_lock);
}
