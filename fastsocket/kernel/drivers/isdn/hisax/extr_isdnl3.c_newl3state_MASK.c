
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l3_process {int debug; int callref; int state; int st; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;

void
FUNC_1(struct l3_process *VAR_1, int VAR_2)
{
 if (VAR_1->debug & VAR_0)
  FUNC_0(VAR_1->st, "newstate cr %d %d --> %d",
    VAR_1->callref & 0x7F,
    VAR_1->state, VAR_2);
 VAR_1->state = VAR_2;
}
