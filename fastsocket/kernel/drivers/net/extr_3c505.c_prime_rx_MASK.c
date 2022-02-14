
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ rx_active; int itx_pcb; } ;
typedef TYPE_1__ elp_device ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_1)
{
 elp_device *VAR_2 = FUNC_0(VAR_1);
 while (VAR_2->rx_active < VAR_0 && FUNC_1(VAR_1)) {
  if (!FUNC_2(VAR_1, &VAR_2->itx_pcb))
   break;
 }
}
