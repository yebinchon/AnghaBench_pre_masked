
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
double FUNC_0( const char **VAR_0 ) {
 const char *VAR_1;
 float VAR_2;
 float VAR_3;
 int VAR_4 = '0';

 VAR_1 = *VAR_0;


 while ( *VAR_1 <= ' ' ) {
  if ( !*VAR_1 ) {
   *VAR_0 = VAR_1;
   return 0;
  }
  VAR_1++;
 }


 switch ( *VAR_1 ) {
 case '+':
  VAR_1++;
  VAR_2 = 1;
  break;
 case '-':
  VAR_1++;
  VAR_2 = -1;
  break;
 default:
  VAR_2 = 1;
  break;
 }


 VAR_3 = 0;
 if ( VAR_1[0] != '.' ) {
  do {
   VAR_4 = *VAR_1++;
   if ( VAR_4 < '0' || VAR_4 > '9' ) {
    break;
   }
   VAR_4 -= '0';
   VAR_3 = VAR_3 * 10 + VAR_4;
  } while ( 1 );
 }


 if ( VAR_4 == '.' ) {
  double VAR_5;

  VAR_5 = 0.1;
  do {
   VAR_4 = *VAR_1++;
   if ( VAR_4 < '0' || VAR_4 > '9' ) {
    break;
   }
   VAR_4 -= '0';
   VAR_3 += VAR_4 * VAR_5;
   VAR_5 *= 0.1;
  } while ( 1 );

 }


 *VAR_0 = VAR_1;

 return VAR_3 * VAR_2;
}
