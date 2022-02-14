
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_5__ {int value; } ;
struct TYPE_4__ {int (* Cvar_Set ) (char*,char*) ;} ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (char*,char*) ;
 int VAR_7 ;

void FUNC_2( void )
{
  if (!VAR_4 || !VAR_0 || !VAR_7)
    return;

  if (!VAR_3)
  {
  if (!VAR_2->value)
      FUNC_0();
  else if (VAR_1->value)
   VAR_6.Cvar_Set("in_dgamouse", "0");
    VAR_3 = VAR_5;
  }
}
