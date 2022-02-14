
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_6__ {int anim; } ;
struct TYPE_5__ {int waitingforkey; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void FUNC_2( void* VAR_6, int VAR_7 )
{
 if (VAR_7 == VAR_3)
 {
  FUNC_1( VAR_0 );
 }
 else if (VAR_7 == VAR_2)
 {
  FUNC_1( VAR_4[((menucommon_s*)VAR_6)->id].anim );
 }
 else if ((VAR_7 == VAR_1) && !VAR_5.waitingforkey)
 {
  VAR_5.waitingforkey = 1;
  FUNC_0();
 }
}
