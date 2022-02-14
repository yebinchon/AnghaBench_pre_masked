
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max17040_chip {scalar_t__ soc; int status; TYPE_1__* pdata; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* charger_enable ) () ;scalar_t__ (* charger_online ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct max17040_chip* FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_6)
{
 struct max17040_chip *VAR_7 = FUNC_0(VAR_6);

 if (!VAR_7->pdata->charger_online || !VAR_7->pdata->charger_enable) {
  VAR_7->status = VAR_5;
  return;
 }

 if (VAR_7->pdata->charger_online()) {
  if (VAR_7->pdata->charger_enable())
   VAR_7->status = VAR_1;
  else
   VAR_7->status = VAR_4;
 } else {
  VAR_7->status = VAR_2;
 }

 if (VAR_7->soc > VAR_0)
  VAR_7->status = VAR_3;
}
