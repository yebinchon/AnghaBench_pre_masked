
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct radeon_connector_atom_dig {TYPE_2__* dp_i2c_bus; } ;
struct TYPE_4__ {scalar_t__ ddc_valid; } ;
struct radeon_connector {TYPE_3__* ddc_bus; struct radeon_connector_atom_dig* con_priv; TYPE_1__ router; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct TYPE_6__ {int adapter; } ;
struct TYPE_5__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 int FUNC_2 (struct radeon_connector*) ;

bool FUNC_3(struct radeon_connector *VAR_2, bool VAR_3)
{
 u8 VAR_4 = 0x0;
 u8 VAR_5[8];
 int VAR_6;
 struct i2c_msg VAR_7[] = {
  {
   .addr = VAR_0,
   .flags = 0,
   .len = 1,
   .buf = &VAR_4,
  },
  {
   .addr = VAR_0,
   .flags = VAR_1,
   .len = 8,
   .buf = VAR_5,
  }
 };


 if (VAR_2->router.ddc_valid)
  FUNC_2(VAR_2);

 if (VAR_3) {
  struct radeon_connector_atom_dig *VAR_8 = VAR_2->con_priv;
  VAR_6 = FUNC_1(&VAR_8->dp_i2c_bus->adapter, VAR_7, 2);
 } else {
  VAR_6 = FUNC_1(&VAR_2->ddc_bus->adapter, VAR_7, 2);
 }

 if (VAR_6 != 2)

  return 0;





 if (FUNC_0(VAR_5) < 6) {


  return 0;
 }
 return 1;
}
