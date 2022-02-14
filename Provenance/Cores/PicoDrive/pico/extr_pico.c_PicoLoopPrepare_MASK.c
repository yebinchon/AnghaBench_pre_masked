
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pal; int dirtyPal; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(void)
{
  if (VAR_1)

    VAR_0.m.pal = (VAR_1 == 2 || VAR_1 == 8) ? 1 : 0;


  VAR_3 = VAR_0.m.pal ? 312 : 262;

  VAR_0.m.dirtyPal = 1;
  VAR_2 = -1;
}
