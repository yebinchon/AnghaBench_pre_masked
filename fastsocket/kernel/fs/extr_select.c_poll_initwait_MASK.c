
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_wqueues {scalar_t__ inline_index; int * table; scalar_t__ error; scalar_t__ triggered; int polling_task; int pt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct poll_wqueues *VAR_2)
{
 FUNC_0(&VAR_2->pt, VAR_0);
 VAR_2->polling_task = VAR_1;
 VAR_2->triggered = 0;
 VAR_2->error = 0;
 VAR_2->table = ((void*)0);
 VAR_2->inline_index = 0;
}
