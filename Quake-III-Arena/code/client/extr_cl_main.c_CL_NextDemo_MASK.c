
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ,int) ;

void FUNC_6( void ) {
 char VAR_1[VAR_0];

 FUNC_5( VAR_1, FUNC_4 ("nextdemo"), sizeof(VAR_1) );
 VAR_1[VAR_0-1] = 0;
 FUNC_2("CL_NextDemo: %s\n", VAR_1 );
 if (!VAR_1[0]) {
  return;
 }

 FUNC_3 ("nextdemo","");
 FUNC_0 (VAR_1);
 FUNC_0 ("\n");
 FUNC_1();
}
