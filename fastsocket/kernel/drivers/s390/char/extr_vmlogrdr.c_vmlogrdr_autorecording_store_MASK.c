
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {int autorecording; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct vmlogrdr_priv_t* FUNC_0 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct vmlogrdr_priv_t *VAR_5 = FUNC_0(VAR_1);
 ssize_t VAR_6 = VAR_4;

 switch (VAR_3[0]) {
 case '0':
  VAR_5->autorecording=0;
  break;
 case '1':
  VAR_5->autorecording=1;
  break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
