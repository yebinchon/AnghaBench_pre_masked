
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dibx000_i2c_master {scalar_t__ device_rev; int selected_interface; scalar_t__ base_reg; } ;
typedef enum dibx000_i2c_interface { ____Placeholder_dibx000_i2c_interface } dibx000_i2c_interface ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dibx000_i2c_master*,scalar_t__,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dibx000_i2c_master *VAR_1,
     enum dibx000_i2c_interface VAR_2)
{
 if (VAR_1->device_rev > VAR_0 && VAR_1->selected_interface != VAR_2) {
  FUNC_1("selecting interface: %d", VAR_2);
  VAR_1->selected_interface = VAR_2;
  return FUNC_0(VAR_1, VAR_1->base_reg + 4, VAR_2);
 }
 return 0;
}
