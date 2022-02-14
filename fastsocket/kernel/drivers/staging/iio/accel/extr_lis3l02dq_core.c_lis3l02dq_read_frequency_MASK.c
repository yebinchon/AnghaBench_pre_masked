
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct device*,int ,int *) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 s8 VAR_7;
 VAR_5 = FUNC_0(VAR_2,
           VAR_1,
           (u8 *)&VAR_7);
 if (VAR_5)
  return VAR_5;
 VAR_7 &= VAR_0;
 switch (VAR_7) {
 case 131:
  VAR_6 = FUNC_1(VAR_4, "280\n");
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_4, "560\n");
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_4, "1120\n");
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_4, "4480\n");
  break;
 }
 return VAR_6;
}
