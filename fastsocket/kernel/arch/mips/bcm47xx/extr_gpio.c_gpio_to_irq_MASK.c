
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ extif; TYPE_2__ chipco; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

int FUNC_3(unsigned VAR_2)
{
 if (FUNC_0(&VAR_1.chipco))
  return FUNC_2(VAR_1.chipco.dev) + 2;
 else if (FUNC_1(&VAR_1.extif))
  return FUNC_2(VAR_1.extif.dev) + 2;
 else
  return -VAR_0;
}
