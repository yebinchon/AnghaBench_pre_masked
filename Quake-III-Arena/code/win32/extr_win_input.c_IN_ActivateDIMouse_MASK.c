
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;

void FUNC_5( void ) {
 HRESULT VAR_1;

 if (!VAR_0) {
  return;
 }


 VAR_1 = FUNC_3( VAR_0 );
 if (FUNC_2(VAR_1)) {
  if ( !FUNC_4() ) {
   FUNC_0 ("Falling back to Win32 mouse support...\n");
   FUNC_1( "in_mouse", "-1" );
  }
 }
}
