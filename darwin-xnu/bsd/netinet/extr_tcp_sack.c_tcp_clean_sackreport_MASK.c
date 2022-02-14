
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int * sackblks; scalar_t__ rcv_numsacks; } ;
struct sackblk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

void
FUNC_1( struct tcpcb *VAR_1)
{

 VAR_1->rcv_numsacks = 0;
 FUNC_0(&VAR_1->sackblks[0], sizeof (struct sackblk) * VAR_0);
}
