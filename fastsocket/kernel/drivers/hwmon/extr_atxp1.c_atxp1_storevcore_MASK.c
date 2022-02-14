
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int vid; int cpu_vid; } ;
struct atxp1_data {scalar_t__ valid; TYPE_1__ reg; int vrm; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atxp1_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,unsigned int,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 unsigned int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 int FUNC_6 (unsigned int,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3, struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct atxp1_data *VAR_7;
 struct i2c_client *VAR_8;
 int VAR_9, VAR_10;
 unsigned int VAR_11;

 VAR_8 = FUNC_5(VAR_3);
 VAR_7 = FUNC_0(VAR_3);

 VAR_11 = FUNC_4(VAR_5, ((void*)0), 10);
 VAR_11 /= 25;
 VAR_11 *= 25;


 VAR_9 = FUNC_6(VAR_11, VAR_7->vrm);

 if (VAR_9 < 0) {
  FUNC_2(VAR_3, "VID calculation failed.\n");
  return -1;
 }


 if (VAR_7->reg.vid & VAR_1)
  VAR_10 = VAR_7->reg.vid & VAR_2;
 else
  VAR_10 = VAR_7->reg.cpu_vid;


 if (VAR_9 == VAR_10)
  return VAR_6;

 FUNC_1(VAR_3, "Setting VCore to %d mV (0x%02x)\n", VAR_11, VAR_9);


 if (VAR_10 > VAR_9) {
  for (; VAR_10 >= VAR_9; VAR_10--) {
          FUNC_3(VAR_8, VAR_0, VAR_10 | VAR_1);
  }
 }
 else {
  for (; VAR_10 <= VAR_9; VAR_10++) {
          FUNC_3(VAR_8, VAR_0, VAR_10 | VAR_1);
  }
 }

 VAR_7->valid = 0;

 return VAR_6;
}
