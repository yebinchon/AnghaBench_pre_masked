
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec4_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int,int,char const*,scalar_t__*) ;
 int VAR_3 ;


 scalar_t__** VAR_4 ;

void FUNC_1( int VAR_5, int VAR_6, const char* VAR_7, int VAR_8, vec4_t VAR_9 ) {
 const char * VAR_10;
 int VAR_11;
 int VAR_12;
 vec4_t VAR_13;


 VAR_10 = VAR_7;
 VAR_12 = 0;
 while ( *VAR_10 ) {
  VAR_11 = *VAR_10;
  if ( VAR_11 == ' ' ) {
   VAR_12 += VAR_1;
  }
  else if ( VAR_11 >= 'A' && VAR_11 <= 'Z' ) {
   VAR_12 += VAR_4[VAR_11 - 'A'][2] + VAR_0;
  }
  VAR_10++;
 }
 VAR_12 -= VAR_0;

 switch( VAR_8 & VAR_3 ) {
  case 130:
   VAR_5 -= VAR_12 / 2;
   break;

  case 128:
   VAR_5 -= VAR_12;
   break;

  case 129:
  default:
   break;
 }

 if ( VAR_8 & VAR_2 ) {
  VAR_13[0] = VAR_13[1] = VAR_13[2] = 0;
  VAR_13[3] = VAR_9[3];
  FUNC_0( VAR_5+2, VAR_6+2, VAR_7, VAR_13 );
 }

 FUNC_0( VAR_5, VAR_6, VAR_7, VAR_9 );
}
