
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int track; } ;
struct TYPE_3__ {int stretch; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13( int VAR_13 )
{
 FUNC_0(("do_fd_action\n"));

 if (VAR_11 && !VAR_0) {
 repeat:
     if (FUNC_1( VAR_13, VAR_6, VAR_7 )) {
  if (VAR_2 == VAR_1) {
      FUNC_4( FUNC_2(VAR_5), VAR_4 );
      if (++VAR_3 < FUNC_3(VAR_12)) {

   FUNC_12( VAR_13 );
   goto repeat;
      }
      else {

   FUNC_6(0);
   FUNC_11();
   return;
      }
  }
  else {


      FUNC_4( VAR_4, FUNC_2(VAR_5) );
  }
     }
 }

 if (VAR_8 != VAR_13)
  FUNC_9( VAR_13 );

 if (VAR_9.track == -1)
  FUNC_5();
 else if (VAR_9.track != VAR_7 << VAR_10->stretch)
  FUNC_8();
 else if (VAR_0)
  FUNC_10();
 else
  FUNC_7();
}
