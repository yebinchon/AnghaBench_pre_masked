
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileHandle_t ;
typedef int buffer ;


 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int *) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_6 (char*,char*,char const*) ;

void FUNC_7( const char *VAR_2 ) {
 fileHandle_t VAR_3;
 char VAR_4[33];
 char VAR_5[VAR_0];

 FUNC_6(VAR_5, "%s/q3key", VAR_2);

 FUNC_4( VAR_5, &VAR_3 );
 if ( !VAR_3 ) {
  FUNC_5( VAR_1, "                ", 17 );
  return;
 }

 FUNC_1( VAR_4, 0, sizeof(VAR_4) );

 FUNC_3( VAR_4, 16, VAR_3 );
 FUNC_2( VAR_3 );

 if (FUNC_0(VAR_4, ((void*)0))) {
  FUNC_5( VAR_1, VAR_4, 17 );
 } else {
  FUNC_5( VAR_1, "                ", 17 );
 }
}
