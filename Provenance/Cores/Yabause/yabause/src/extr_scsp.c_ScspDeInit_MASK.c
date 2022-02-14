
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* DeInit ) () ;} ;
struct TYPE_3__ {int * data32; } ;


 TYPE_2__* VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 () ;

void
FUNC_4 (void)
{
  if (VAR_2[0].data32)
    FUNC_1(VAR_2[0].data32);
  VAR_2[0].data32 = ((void*)0);

  if (VAR_2[1].data32)
    FUNC_1(VAR_2[1].data32);
  VAR_2[1].data32 = ((void*)0);

  if (VAR_0)
    VAR_0->DeInit();
  VAR_0 = ((void*)0);

  FUNC_2();

  if (VAR_1)
    FUNC_0 (VAR_1);
  VAR_1 = ((void*)0);
}
