
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ enable_paprd; } ;
struct TYPE_3__ {int hw_caps; } ;
struct ath_hw {TYPE_2__ config; TYPE_1__ caps; } ;


 int VAR_0 ;

bool FUNC_0(struct ath_hw *VAR_1)
{
 if ((VAR_1->caps.hw_caps & VAR_0) && VAR_1->config.enable_paprd)
  return 1;

 return 0;
}
