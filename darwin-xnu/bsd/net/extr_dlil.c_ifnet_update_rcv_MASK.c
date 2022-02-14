
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_eflags; int if_poll_update; } ;
typedef int cqev_t ;



 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct ifnet *VAR_2, cqev_t VAR_3)
{
 switch (VAR_3) {
 case 128:
  if (VAR_1 && (VAR_2->if_eflags & VAR_0))
   VAR_2->if_poll_update++;
  break;

 default:
  break;
 }
}
