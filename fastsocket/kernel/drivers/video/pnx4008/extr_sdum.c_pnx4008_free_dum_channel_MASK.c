
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* fb_owning_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_3 ;

int FUNC_1(int VAR_4, int VAR_5)
{
 if (VAR_4 < 0 || VAR_4 > VAR_2)
  return -VAR_1;
 else if (VAR_3.fb_owning_channel[VAR_4] != VAR_5)
  return -VAR_0;
 else {
  FUNC_0(VAR_4);
  VAR_3.fb_owning_channel[VAR_4] = -1;
 }

 return 0;
}
