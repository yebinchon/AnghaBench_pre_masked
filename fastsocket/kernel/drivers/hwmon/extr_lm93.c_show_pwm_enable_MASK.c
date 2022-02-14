
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int** block9; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 struct lm93_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,long) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = (FUNC_2(VAR_2))->index;
 struct lm93_data *VAR_5 = FUNC_0(VAR_1);
 u8 VAR_6;
 long VAR_7;

 VAR_6 = VAR_5->block9[VAR_4][VAR_0];
 if (VAR_6 & 0x01)
  VAR_7 = ((VAR_6 & 0xF0) == 0xF0) ? 0 : 1;
 else
  VAR_7 = 2;
 return FUNC_1(VAR_3,"%ld\n",VAR_7);
}
