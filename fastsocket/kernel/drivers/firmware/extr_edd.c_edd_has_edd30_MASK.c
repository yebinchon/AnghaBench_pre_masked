
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int key; int device_path_info_length; } ;
struct edd_info {TYPE_1__ params; } ;
struct edd_device {int dummy; } ;


 struct edd_info* FUNC_0 (struct edd_device*) ;

__attribute__((used)) static int
FUNC_1(struct edd_device *VAR_0)
{
 struct edd_info *VAR_1;
 int VAR_2;
 u8 VAR_3 = 0;

 if (!VAR_0)
  return 0;
 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return 0;

 if (!(VAR_1->params.key == 0xBEDD || VAR_1->params.key == 0xDDBE)) {
  return 0;
 }



 if (VAR_1->params.device_path_info_length != 44)
  return 0;

 for (VAR_2 = 30; VAR_2 < VAR_1->params.device_path_info_length + 30; VAR_2++)
  VAR_3 += *(((u8 *)&VAR_1->params) + VAR_2);

 if (VAR_3)
  return 0;

 return 1;
}
