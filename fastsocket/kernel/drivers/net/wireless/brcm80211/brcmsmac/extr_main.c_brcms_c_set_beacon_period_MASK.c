
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct brcms_c_info {TYPE_1__* default_bss; } ;
struct TYPE_2__ {scalar_t__ beacon_period; } ;


 int VAR_0 ;

int FUNC_0(struct brcms_c_info *VAR_1, u16 VAR_2)
{
 if (VAR_2 == 0)
  return -VAR_0;

 VAR_1->default_bss->beacon_period = VAR_2;
 return 0;
}
