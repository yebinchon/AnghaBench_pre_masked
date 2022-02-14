
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; } ;


 struct passwd* FUNC_0 (int ) ;
 int FUNC_1 () ;

char *FUNC_2( void )
{
 struct passwd *VAR_0;

 if ( (VAR_0 = FUNC_0( FUNC_1() )) == ((void*)0) ) {
  return "player";
 }
 return VAR_0->pw_name;
}
