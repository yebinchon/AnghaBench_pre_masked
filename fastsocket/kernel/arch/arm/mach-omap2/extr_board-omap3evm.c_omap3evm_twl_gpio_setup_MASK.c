
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_5__ {unsigned int gpio; } ;
struct TYPE_4__ {unsigned int gpio_cd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5,
  unsigned VAR_6, unsigned VAR_7)
{

 FUNC_0(VAR_0);
 VAR_4[0].gpio_cd = VAR_6 + 0;
 FUNC_2(VAR_4);







 VAR_2[2].gpio = VAR_6 + VAR_1 + 1;

 FUNC_1(&VAR_3);

 return 0;
}
