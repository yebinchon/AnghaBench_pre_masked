
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {struct acpi_smbus_cmi* algo_data; } ;
struct acpi_smbus_cmi {int cap_read; int cap_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static u32 FUNC_0(struct i2c_adapter *VAR_9)
{
 struct acpi_smbus_cmi *VAR_10 = VAR_9->algo_data;
 u32 VAR_11;

 VAR_11 = VAR_10->cap_read | VAR_10->cap_write ?
  VAR_0 : 0;

 VAR_11 |= VAR_10->cap_read ?
  (VAR_2 |
  VAR_3 |
  VAR_4 |
  VAR_1) : 0;

 VAR_11 |= VAR_10->cap_write ?
  (VAR_6 |
  VAR_7 |
  VAR_8 |
  VAR_5) : 0;

 return VAR_11;
}
