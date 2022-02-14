
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,char*,char*,char*) ;

void FUNC_4( void ) {
 int VAR_3;
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];

 FUNC_2("^1name             model            aifile              funname\n");
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_1(VAR_4, FUNC_0( VAR_1[VAR_3], "name" ));
  if ( !*VAR_4 ) {
   FUNC_1(VAR_4, "UnnamedPlayer");
  }
  FUNC_1(VAR_5, FUNC_0( VAR_1[VAR_3], "funname" ));
  if ( !*VAR_5 ) {
   FUNC_1(VAR_5, "");
  }
  FUNC_1(VAR_6, FUNC_0( VAR_1[VAR_3], "model" ));
  if ( !*VAR_6 ) {
   FUNC_1(VAR_6, "visor/default");
  }
  FUNC_1(VAR_7, FUNC_0( VAR_1[VAR_3], "aifile"));
  if (!*VAR_7 ) {
   FUNC_1(VAR_7, "bots/default_c.c");
  }
  FUNC_2(FUNC_3("%-16s %-16s %-20s %-20s\n", VAR_4, VAR_6, VAR_7, VAR_5));
 }
}
