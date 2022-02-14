
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* fb_owning_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_0(int VAR_3)
{
 int VAR_4 = 0;

 while ((VAR_4 < VAR_1) && (VAR_2.fb_owning_channel[VAR_4] != -1))
  VAR_4++;

 if (VAR_4 == VAR_1)
  return -VAR_0;
 else {
  VAR_2.fb_owning_channel[VAR_4] = VAR_3;
  return VAR_4;
 }
}
