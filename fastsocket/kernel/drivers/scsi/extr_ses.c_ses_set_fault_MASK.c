
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {int dummy; } ;
struct enclosure_component {int dummy; } ;
typedef enum enclosure_component_setting { ____Placeholder_enclosure_component_setting } enclosure_component_setting ;


 int VAR_0 ;


 int FUNC_0 (struct enclosure_device*,struct enclosure_component*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct enclosure_device *VAR_1,
     struct enclosure_component *VAR_2,
    enum enclosure_component_setting VAR_3)
{
 unsigned char VAR_4[4] = {0 };

 switch (VAR_3) {
 case 129:

  break;
 case 128:
  VAR_4[2] = 0x02;
  break;
 default:

  return -VAR_0;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_4);
}
