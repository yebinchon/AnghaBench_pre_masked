
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sys_device {int dummy; } ;
struct TYPE_3__ {int fclk; int hclk; int pclk; } ;
struct TYPE_4__ {char* name; TYPE_1__ max; } ;


 int FUNC_0 (struct sys_device*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct sys_device *VAR_1)
{




 VAR_0.max.fclk = 266000000;
 VAR_0.max.hclk = 133000000;
 VAR_0.max.pclk = 66500000;
 VAR_0.name = "s3c2410a";

 return FUNC_0(VAR_1);
}
