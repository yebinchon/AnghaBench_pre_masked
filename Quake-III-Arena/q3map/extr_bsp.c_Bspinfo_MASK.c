
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;

void FUNC_8( int VAR_0, char **VAR_1 ) {
 int VAR_2;
 char VAR_3[1024];
 int VAR_4;
 FILE *VAR_5;

 if ( VAR_0 < 1 ) {
  FUNC_4( "No files to dump info for.\n");
  return;
 }

 for ( VAR_2 = 0 ; VAR_2 < VAR_0 ; VAR_2++ ) {
  FUNC_4 ("---------------------\n");
  FUNC_7 (VAR_3, VAR_1[ VAR_2 ] );
  FUNC_0 (VAR_3, ".bsp");
  VAR_5 = FUNC_6 (VAR_3, "rb");
  if (VAR_5)
  {
   VAR_4 = FUNC_3 (VAR_5);
   FUNC_5 (VAR_5);
  }
  else
   VAR_4 = 0;
  FUNC_4 ("%s: %i\n", VAR_3, VAR_4);

  FUNC_1 (VAR_3);
  FUNC_2 ();
  FUNC_4 ("---------------------\n");
 }
}
