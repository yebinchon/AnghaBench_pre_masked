
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_state {TYPE_1__* dev; int list; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct dev_state *VAR_1)
{
 return (!FUNC_0(&VAR_1->list) &&
   VAR_1->dev->state != VAR_0);
}
