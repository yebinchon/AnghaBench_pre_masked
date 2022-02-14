
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,void**) ;
 int VAR_0 ;
 int FUNC_7 (char*,int ,int) ;

void FUNC_8( void ) {
 char *VAR_1;
 int VAR_2;
 char VAR_3[VAR_0];

 if (FUNC_2 () != 2) {
  FUNC_4 ("exec <filename> : execute a script file\n");
  return;
 }

 FUNC_7( VAR_3, FUNC_3(1), sizeof( VAR_3 ) );
 FUNC_0( VAR_3, sizeof( VAR_3 ), ".cfg" );
 VAR_2 = FUNC_6( VAR_3, (void **)&VAR_1);
 if (!VAR_1) {
  FUNC_4 ("couldn't exec %s\n",FUNC_3(1));
  return;
 }
 FUNC_4 ("execing %s\n",FUNC_3(1));

 FUNC_1 (VAR_1);

 FUNC_5 (VAR_1);
}
