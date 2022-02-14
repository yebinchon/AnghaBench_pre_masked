
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dev_t ;
struct TYPE_4__ {int t_dev; } ;
struct TYPE_3__ {int t_dev; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static dev_t
FUNC_0(void)
{
 if (VAR_0)
  return VAR_0->t_dev;
 else
  return VAR_1[0]->t_dev;
}
