
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ track; int steprate; } ;
struct TYPE_3__ {scalar_t__ fdc_speed; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int (*) (int )) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6( void )
{
 if (VAR_5.track >= 0) {
  FUNC_4( 0 );
  return;
 }

 if (FUNC_0(VAR_2))
  VAR_6.fdc_speed = 0; ;
 FUNC_1(("fd_calibrate\n"));
 FUNC_3( FUNC_4 );

 FUNC_2( VAR_1, VAR_0 | VAR_5.steprate );

 VAR_4 = 1;
 VAR_3 = 1;
 FUNC_5();

}
