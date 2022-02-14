
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int string; int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;

void FUNC_4( void ) {
 cvar_t *VAR_10;
 int VAR_11;
 char *VAR_12;

 if ( FUNC_0() > 1 ) {
  VAR_12 = FUNC_1( 1 );
 } else {
  VAR_12 = ((void*)0);
 }

 VAR_11 = 0;
 for (VAR_10 = VAR_8 ; VAR_10 ; VAR_10 = VAR_10->next, VAR_11++)
 {
  if (VAR_12 && !FUNC_2(VAR_12, VAR_10->name, VAR_9)) continue;

  if (VAR_10->flags & VAR_5) {
   FUNC_3("S");
  } else {
   FUNC_3(" ");
  }
  if (VAR_10->flags & VAR_6) {
   FUNC_3("U");
  } else {
   FUNC_3(" ");
  }
  if (VAR_10->flags & VAR_4) {
   FUNC_3("R");
  } else {
   FUNC_3(" ");
  }
  if (VAR_10->flags & VAR_2) {
   FUNC_3("I");
  } else {
   FUNC_3(" ");
  }
  if (VAR_10->flags & VAR_0) {
   FUNC_3("A");
  } else {
   FUNC_3(" ");
  }
  if (VAR_10->flags & VAR_3) {
   FUNC_3("L");
  } else {
   FUNC_3(" ");
  }
  if (VAR_10->flags & VAR_1) {
   FUNC_3("C");
  } else {
   FUNC_3(" ");
  }

  FUNC_3 (" %s \"%s\"\n", VAR_10->name, VAR_10->string);
 }

 FUNC_3 ("\n%i total cvars\n", VAR_11);
 FUNC_3 ("%i cvar indexes\n", VAR_7);
}
