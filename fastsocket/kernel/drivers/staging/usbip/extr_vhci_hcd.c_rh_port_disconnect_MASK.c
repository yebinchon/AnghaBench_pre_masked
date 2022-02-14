
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* port_status; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,int) ;

void FUNC_3(int VAR_3)
{
 unsigned long VAR_4;

 FUNC_2("rh_port_disconnect %d\n", VAR_3);

 FUNC_0(&VAR_2->lock, VAR_4);

 VAR_2->port_status[VAR_3] &= ~VAR_1;
 VAR_2->port_status[VAR_3] |=
     (1 << VAR_0);







 FUNC_1(&VAR_2->lock, VAR_4);
}
