
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int smpActive; } ;
struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {int (* Printf ) (int ,char*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4( void ) {
 VAR_2.smpActive = VAR_3;
 if ( VAR_5->integer ) {
  VAR_6.Printf( VAR_0, "Trying SMP acceleration...\n" );
  if ( FUNC_0( VAR_1 ) ) {
   VAR_6.Printf( VAR_0, "...succeeded.\n" );
   VAR_2.smpActive = VAR_4;
  } else {
   VAR_6.Printf( VAR_0, "...failed.\n" );
  }
 }
}
