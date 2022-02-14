
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* action; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_1(unsigned int VAR_2)
{

 if (VAR_2 == 7)
  FUNC_0(1);
 else




  if (VAR_1[VAR_2].action)
   VAR_1[VAR_2].action->flags |= VAR_0;
 return 0;
}
