
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int cmd ;
struct TYPE_6__ {scalar_t__ demoplaying; } ;
struct TYPE_5__ {scalar_t__ state; int keyCatchers; } ;
struct TYPE_4__ {int repeats; char* binding; scalar_t__ down; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,char*,char*,int,unsigned int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (scalar_t__,int ,int,...) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_3__ VAR_21 ;
 TYPE_2__ VAR_22 ;
 TYPE_1__* VAR_23 ;
 scalar_t__ VAR_24 ;

void FUNC_15 (int VAR_25, qboolean VAR_26, unsigned VAR_27) {
 char *VAR_28;
 char VAR_29[1024];


 VAR_23[VAR_25].down = VAR_26;

 if (VAR_26) {
  VAR_23[VAR_25].repeats++;
  if ( VAR_23[VAR_25].repeats == 1) {
   VAR_19++;
  }
 } else {
  VAR_23[VAR_25].repeats = 0;
  VAR_19--;
  if (VAR_19 < 0) {
   VAR_19 = 0;
  }
 }


  if (VAR_25 == VAR_12)
  {
    if (VAR_26)
    {
      if (VAR_23[VAR_11].down)
      {
        FUNC_10();
        if (FUNC_9("r_fullscreen") == 0)
        {
          FUNC_4("Switching to fullscreen rendering\n");
          FUNC_8("r_fullscreen", "1");
        }
        else
        {
          FUNC_4("Switching to windowed rendering\n");
          FUNC_8("r_fullscreen", "0");
        }
        FUNC_3( VAR_6, "vid_restart\n");
        return;
      }
    }
  }



 if (VAR_25 == '`' || VAR_25 == '~') {
  if (!VAR_26) {
   return;
  }
    FUNC_6 ();
  return;
 }



 if ( VAR_26 && ( VAR_25 < 128 || VAR_25 == VAR_14 ) && ( VAR_21.demoplaying || VAR_22.state == VAR_1 ) && !VAR_22.keyCatchers) {

  if (FUNC_9 ("com_cameraMode") == 0) {
   FUNC_8 ("nextdemo","");
   VAR_25 = VAR_13;
  }
 }



 if ( VAR_25 == VAR_13 && VAR_26 ) {
  if ( VAR_22.keyCatchers & VAR_9 ) {

   FUNC_12( VAR_25 );
   return;
  }


  if (VAR_22.keyCatchers & VAR_7) {
   VAR_22.keyCatchers &= ~VAR_7;
   FUNC_14 (VAR_20, VAR_4, VAR_3);
   return;
  }

  if ( !( VAR_22.keyCatchers & VAR_10 ) ) {
   if ( VAR_22.state == VAR_0 && !VAR_21.demoplaying ) {
    FUNC_14( VAR_24, VAR_18, VAR_15 );
   }
   else {
    FUNC_1();
    FUNC_13();
    FUNC_14( VAR_24, VAR_18, VAR_16 );
   }
   return;
  }

  FUNC_14( VAR_24, VAR_17, VAR_25, VAR_26 );
  return;
 }







 if (!VAR_26) {
  VAR_28 = VAR_23[VAR_25].binding;

  FUNC_0( VAR_25, VAR_28 );

  if ( VAR_22.keyCatchers & VAR_10 && VAR_24 ) {
   FUNC_14( VAR_24, VAR_17, VAR_25, VAR_26 );
  } else if ( VAR_22.keyCatchers & VAR_7 && VAR_20 ) {
   FUNC_14( VAR_20, VAR_5, VAR_25, VAR_26 );
  }

  return;
 }



 if ( VAR_22.keyCatchers & VAR_8 ) {
  FUNC_7( VAR_25 );
 } else if ( VAR_22.keyCatchers & VAR_10 ) {
  if ( VAR_24 ) {
   FUNC_14( VAR_24, VAR_17, VAR_25, VAR_26 );
  }
 } else if ( VAR_22.keyCatchers & VAR_7 ) {
  if ( VAR_20 ) {
   FUNC_14( VAR_20, VAR_5, VAR_25, VAR_26 );
  }
 } else if ( VAR_22.keyCatchers & VAR_9 ) {
  FUNC_12( VAR_25 );
 } else if ( VAR_22.state == VAR_2 ) {
  FUNC_7( VAR_25 );
 } else {

  VAR_28 = VAR_23[VAR_25].binding;
  if ( !VAR_28 ) {
   if (VAR_25 >= 200) {
    FUNC_4 ("%s is unbound, use controls menu to set.\n"
     , FUNC_11( VAR_25 ) );
   }
  } else if (VAR_28[0] == '+') {
   int VAR_30;
   char VAR_31[1024], *VAR_32;
   VAR_32 = VAR_31;
   for ( VAR_30 = 0; ; VAR_30++ ) {
    if ( VAR_28[VAR_30] == ';' || !VAR_28[VAR_30] ) {
     *VAR_32 = '\0';
     if ( VAR_31[0] == '+') {


      FUNC_5 (VAR_29, sizeof(VAR_29), "%s %i %i\n", VAR_31, VAR_25, VAR_27);
      FUNC_2 (VAR_29);
     } else {

      FUNC_2 (VAR_31);
      FUNC_2 ("\n");
     }
     VAR_32 = VAR_31;
     while ( (VAR_28[VAR_30] <= ' ' || VAR_28[VAR_30] == ';') && VAR_28[VAR_30] != 0 ) {
      VAR_30++;
     }
    }
    *VAR_32++ = VAR_28[VAR_30];
    if ( !VAR_28[VAR_30] ) {
     break;
    }
   }
  } else {

   FUNC_2 (VAR_28);
   FUNC_2 ("\n");
  }
 }
}
