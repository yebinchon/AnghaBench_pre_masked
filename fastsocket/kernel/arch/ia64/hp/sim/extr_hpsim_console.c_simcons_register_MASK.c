
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(void)
{
 if (!FUNC_0("hpsim"))
  return 1;

 if (VAR_1.flags & VAR_0)
  return 1;

 FUNC_1(&VAR_1);
 return 0;
}
