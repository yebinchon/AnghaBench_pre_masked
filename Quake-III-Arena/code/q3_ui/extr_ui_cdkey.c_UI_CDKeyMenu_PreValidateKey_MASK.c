
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1( const char *VAR_0 ) {
 char VAR_1;

 if( FUNC_0( VAR_0 ) != 16 ) {
  return 1;
 }

 while( ( VAR_1 = *VAR_0++ ) ) {
  switch( VAR_1 ) {
  case '2':
  case '3':
  case '7':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'g':
  case 'h':
  case 'j':
  case 'l':
  case 'p':
  case 'r':
  case 's':
  case 't':
  case 'w':
   continue;
  default:
   return -1;
  }
 }

 return 0;
}
