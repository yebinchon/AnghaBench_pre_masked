
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(u32 VAR_2, v4l2_std_id VAR_3)
{
 if (VAR_3 == VAR_1) {
  if (VAR_2 == 352 || VAR_2 == 720)
   return 1;
  else
   return 0;
 }

 if (VAR_3 == VAR_0) {
  if (VAR_2 == 320 || VAR_2 == 352 || VAR_2 == 720)
   return 1;
  else
   return 0;
 }
 return 0;
}
