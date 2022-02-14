
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct emac_instance {int rx_slot; TYPE_1__* rx_desc; } ;
struct TYPE_2__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(void *VAR_3)
{
 struct emac_instance *VAR_4 = VAR_3;

 int VAR_5 = VAR_4->rx_slot;
 while (1) {
  u16 VAR_6 = VAR_4->rx_desc[VAR_5].ctrl;
  if (VAR_6 & VAR_0)
   return 0;
  else if (VAR_6 & VAR_1)
   return 1;

  VAR_5 = (VAR_5 + 1) % VAR_2;


  if (FUNC_0(VAR_5 == VAR_4->rx_slot))
   return 0;
 }
}
