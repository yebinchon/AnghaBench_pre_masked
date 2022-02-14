
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ intr_mode; } ;
struct __vxge_hw_device {TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

u32 FUNC_0(struct __vxge_hw_device *VAR_4, u32 VAR_5)
{

 if ((VAR_5 != VAR_1) &&
    (VAR_5 != VAR_2) &&
    (VAR_5 != VAR_3) &&
    (VAR_5 != VAR_0))
  VAR_5 = VAR_1;

 VAR_4->config.intr_mode = VAR_5;
 return VAR_5;
}
