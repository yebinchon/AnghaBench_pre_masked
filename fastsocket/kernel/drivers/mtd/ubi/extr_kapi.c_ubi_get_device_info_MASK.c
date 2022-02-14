
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device_info {int dummy; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubi_device*,struct ubi_device_info*) ;
 struct ubi_device* FUNC_1 (int) ;
 int FUNC_2 (struct ubi_device*) ;

int FUNC_3(int VAR_3, struct ubi_device_info *VAR_4)
{
 struct ubi_device *VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_2)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5)
  return -VAR_1;
 FUNC_0(VAR_5, VAR_4);
 FUNC_2(VAR_5);
 return 0;
}
