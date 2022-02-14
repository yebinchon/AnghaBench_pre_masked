
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int track; int steprate; } ;
struct TYPE_5__ {int stretch; } ;
struct TYPE_4__ {scalar_t__ fdc_speed; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int (*) (int )) ;
 TYPE_3__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9( void )
{
 if (VAR_6.track == VAR_5 << VAR_7->stretch) {
  FUNC_5( 0 );
  return;
 }

 if (FUNC_0(VAR_3)) {
  VAR_8.fdc_speed = 0;
  FUNC_3();
 }

 FUNC_1(("fd_seek() to track %d\n",VAR_5));
 FUNC_2( VAR_2, VAR_5 << VAR_7->stretch);
 FUNC_8(25);
 FUNC_4( FUNC_5 );
 FUNC_2( VAR_1, VAR_0 | VAR_6.steprate );

 VAR_4 = 1;
 FUNC_6();
 FUNC_7();

}
