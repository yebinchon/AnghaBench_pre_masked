
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83627ehf_data {int* fan_min; int* fan_div; int* fan; int update_lock; int last_updated; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int ,int ) ;
 struct w83627ehf_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int,unsigned int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct w83627ehf_data*,int) ;
 int FUNC_11 (struct w83627ehf_data*,int ,unsigned int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct w83627ehf_data *VAR_6 = FUNC_1(VAR_2);
 struct sensor_device_attribute *VAR_7 = FUNC_9(VAR_3);
 int VAR_8 = VAR_7->index;
 unsigned int VAR_9 = FUNC_8(VAR_4, ((void*)0), 10);
 unsigned int VAR_10;
 u8 VAR_11;

 FUNC_6(&VAR_6->update_lock);
 if (!VAR_9) {

  VAR_6->fan_min[VAR_8] = 255;
  VAR_11 = VAR_6->fan_div[VAR_8];
  FUNC_2(VAR_2, "fan%u low limit and alarm disabled\n", VAR_8 + 1);
 } else if ((VAR_10 = 1350000U / VAR_9) >= 128 * 255) {


  VAR_6->fan_min[VAR_8] = 254;
  VAR_11 = 7;
  FUNC_3(VAR_2, "fan%u low limit %u below minimum %u, set to "
    "minimum\n", VAR_8 + 1, VAR_9, FUNC_5(254, 128));
 } else if (!VAR_10) {


  VAR_6->fan_min[VAR_8] = 1;
  VAR_11 = 0;
  FUNC_3(VAR_2, "fan%u low limit %u above maximum %u, set to "
    "maximum\n", VAR_8 + 1, VAR_9, FUNC_5(1, 1));
 } else {



  VAR_11 = 0;
  while (VAR_10 > 192 && VAR_11 < 7) {
   VAR_10 >>= 1;
   VAR_11++;
  }
  VAR_6->fan_min[VAR_8] = VAR_10;
 }



 if (VAR_11 != VAR_6->fan_div[VAR_8]) {

  if (VAR_6->fan[VAR_8] != 0xff) {
   if (VAR_11 > VAR_6->fan_div[VAR_8])
    VAR_6->fan[VAR_8] >>= VAR_11 - VAR_6->fan_div[VAR_8];
   else if (VAR_6->fan[VAR_8] & 0x80)
    VAR_6->fan[VAR_8] = 0xff;
   else
    VAR_6->fan[VAR_8] <<= VAR_6->fan_div[VAR_8] - VAR_11;
  }

  FUNC_0(VAR_2, "fan%u clock divider changed from %u to %u\n",
   VAR_8 + 1, FUNC_4(VAR_6->fan_div[VAR_8]),
   FUNC_4(VAR_11));
  VAR_6->fan_div[VAR_8] = VAR_11;
  FUNC_10(VAR_6, VAR_8);

  VAR_6->last_updated = VAR_1;
 }
 FUNC_11(VAR_6, VAR_0[VAR_8],
         VAR_6->fan_min[VAR_8]);
 FUNC_7(&VAR_6->update_lock);

 return VAR_5;
}
