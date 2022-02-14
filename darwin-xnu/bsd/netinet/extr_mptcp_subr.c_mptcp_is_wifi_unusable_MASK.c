
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mptses {int mpte_flags; } ;
struct TYPE_2__ {int sa_wifi_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

int
FUNC_0(struct mptses *VAR_3)
{
 if (VAR_3->mpte_flags & VAR_0) {
  if (VAR_2.sa_wifi_status)
   return ((VAR_2.sa_wifi_status & VAR_1) ? 1 : 0);





  return (-1);
 }

 return ((VAR_2.sa_wifi_status & VAR_1) ? 1 : 0);
}
