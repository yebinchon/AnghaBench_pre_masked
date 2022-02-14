
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int** block9; long* pwm_override; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 long FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct lm93_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,long) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4, struct device_attribute *VAR_5,
   char *VAR_6)
{
 int VAR_7 = (FUNC_3(VAR_5))->index;
 struct lm93_data *VAR_8 = FUNC_1(VAR_4);
 u8 VAR_9, VAR_10;
 long VAR_11;

 VAR_9 = VAR_8->block9[VAR_7][VAR_0];
 VAR_10 = VAR_8->block9[VAR_7][VAR_1];
 if (VAR_9 & 0x01)
  VAR_11 = VAR_8->pwm_override[VAR_7];
 else
  VAR_11 = FUNC_0(VAR_9 >> 4, (VAR_10 & 0x07) ?
   VAR_3 : VAR_2);
 return FUNC_2(VAR_6,"%ld\n",VAR_11);
}
