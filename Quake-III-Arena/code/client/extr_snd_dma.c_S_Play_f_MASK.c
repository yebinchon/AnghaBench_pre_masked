
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sfxHandle_t ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,char) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_1 ;

void FUNC_7( void ) {
 int VAR_2;
 sfxHandle_t VAR_3;
 char VAR_4[256];

 VAR_2 = 1;
 while ( VAR_2<FUNC_0() ) {
  if ( !FUNC_4(FUNC_1(VAR_2), '.') ) {
   FUNC_2( VAR_4, sizeof(VAR_4), "%s.wav", FUNC_1(1) );
  } else {
   FUNC_3( VAR_4, FUNC_1(VAR_2), sizeof(VAR_4) );
  }
  VAR_3 = FUNC_5( VAR_4, VAR_1 );
  if( VAR_3 ) {
   FUNC_6( VAR_3, VAR_0 );
  }
  VAR_2++;
 }
}
