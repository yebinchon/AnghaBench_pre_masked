
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netup_card_info {TYPE_1__* port; void* rev; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {void** mac; } ;


 void* FUNC_0 (struct i2c_adapter*,int) ;

void FUNC_1(struct i2c_adapter *VAR_0,
    struct netup_card_info *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_1->rev = FUNC_0(VAR_0, 63);

 for (VAR_2 = 64, VAR_3 = 0; VAR_2 < 70; VAR_2++, VAR_3++)
  VAR_1->port[0].mac[VAR_3] = FUNC_0(VAR_0, VAR_2);

 for (VAR_2 = 70, VAR_3 = 0; VAR_2 < 76; VAR_2++, VAR_3++)
  VAR_1->port[1].mac[VAR_3] = FUNC_0(VAR_0, VAR_2);
}
