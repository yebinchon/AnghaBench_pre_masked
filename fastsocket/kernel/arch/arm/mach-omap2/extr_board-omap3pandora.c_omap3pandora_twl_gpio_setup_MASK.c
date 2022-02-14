
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {unsigned int gpio_cd; int dev; } ;


 TYPE_1__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_3,
  unsigned VAR_4, unsigned VAR_5)
{

 VAR_0[0].gpio_cd = VAR_4 + 0;
 VAR_0[1].gpio_cd = VAR_4 + 1;
 FUNC_0(VAR_0);


 VAR_1.dev = VAR_0[0].dev;
 VAR_2.dev = VAR_0[1].dev;

 return 0;
}
