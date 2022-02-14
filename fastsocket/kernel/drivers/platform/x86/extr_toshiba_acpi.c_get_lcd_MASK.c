
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 FUNC_0(VAR_1, &VAR_6, &VAR_5);
 if (VAR_5 == VAR_3) {
  return (VAR_6 >> VAR_2);
 } else
  return -VAR_0;
}
