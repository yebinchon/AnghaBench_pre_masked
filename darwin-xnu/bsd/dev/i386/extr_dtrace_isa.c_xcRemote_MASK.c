
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cpu; int arg; int (* f ) (int ) ;} ;
typedef TYPE_1__ xcArg_t ;
struct TYPE_4__ {scalar_t__ cpu_id; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1( void *VAR_2 )
{
 xcArg_t *VAR_3 = (xcArg_t *)VAR_2;

 if ( VAR_3->cpu == VAR_0->cpu_id || VAR_3->cpu == VAR_1 ) {
  (VAR_3->f)(VAR_3->arg);
 }
}
