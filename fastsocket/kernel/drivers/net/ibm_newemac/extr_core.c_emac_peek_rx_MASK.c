
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emac_instance {size_t rx_slot; TYPE_1__* rx_desc; } ;
struct TYPE_2__ {int ctrl; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1)
{
 struct emac_instance *VAR_2 = VAR_1;

 return !(VAR_2->rx_desc[VAR_2->rx_slot].ctrl & VAR_0);
}
