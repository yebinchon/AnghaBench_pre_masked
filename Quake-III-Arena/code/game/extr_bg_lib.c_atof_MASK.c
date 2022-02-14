
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
double FUNC_0( const char *VAR_0 ) {
 float VAR_1;
 float VAR_2;
 int VAR_3;



 while ( *VAR_0 <= ' ' ) {
  if ( !*VAR_0 ) {
   return 0;
  }
  VAR_0++;
 }


 switch ( *VAR_0 ) {
 case '+':
  VAR_0++;
  VAR_1 = 1;
  break;
 case '-':
  VAR_0++;
  VAR_1 = -1;
  break;
 default:
  VAR_1 = 1;
  break;
 }


 VAR_2 = 0;
 VAR_3 = VAR_0[0];
 if ( VAR_3 != '.' ) {
  do {
   VAR_3 = *VAR_0++;
   if ( VAR_3 < '0' || VAR_3 > '9' ) {
    break;
   }
   VAR_3 -= '0';
   VAR_2 = VAR_2 * 10 + VAR_3;
  } while ( 1 );
 } else {
  VAR_0++;
 }


 if ( VAR_3 == '.' ) {
  double VAR_4;

  VAR_4 = 0.1;
  do {
   VAR_3 = *VAR_0++;
   if ( VAR_3 < '0' || VAR_3 > '9' ) {
    break;
   }
   VAR_3 -= '0';
   VAR_2 += VAR_3 * VAR_4;
   VAR_4 *= 0.1;
  } while ( 1 );

 }



 return VAR_2 * VAR_1;
}
