
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,scalar_t__*,int,char*,int) ;
 int FUNC_1 (char*,scalar_t__,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_4, struct kobject *VAR_5,
  struct bin_attribute *VAR_6, char *VAR_7, loff_t VAR_8, size_t VAR_9)
{
 uint8_t VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_8 >= VAR_1)
  return 0;
 if (VAR_8 + VAR_9 > VAR_1)
  VAR_9 = VAR_1 - VAR_8;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_10 = VAR_2 + VAR_8 + VAR_12;
  VAR_11 = FUNC_0(VAR_0, &VAR_10, 1, &VAR_7[VAR_12], 1);
  if (VAR_11) {
   FUNC_1("olpc-battery: "
          "EC_BAT_EEPROM cmd @ 0x%x failed - %d!\n",
          VAR_10, VAR_11);
   return -VAR_3;
  }
 }

 return VAR_9;
}
