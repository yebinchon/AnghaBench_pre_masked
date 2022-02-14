
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3( int VAR_0, char* VAR_1[] ) {

  if ( VAR_0==2 )
  {
    if ( (!FUNC_2( VAR_1[1], "--version" ))
         || ( !FUNC_2( VAR_1[1], "-v" )) )
    {
      FUNC_1( VAR_1[0] );
      FUNC_0(0);
    }
  }
}
