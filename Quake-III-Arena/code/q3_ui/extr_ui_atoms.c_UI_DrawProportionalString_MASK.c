
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_2__ {int realtime; int charsetProp; int charsetPropGlow; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int,int,char const*,double*,float,int ) ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 float FUNC_1 (int) ;
 float FUNC_2 (char const*) ;

 double FUNC_3 (int) ;
 TYPE_1__ VAR_5 ;

void FUNC_4( int VAR_6, int VAR_7, const char* VAR_8, int VAR_9, vec4_t VAR_10 ) {
 vec4_t VAR_11;
 int VAR_12;
 float VAR_13;

 VAR_13 = FUNC_1( VAR_9 );

 switch( VAR_9 & VAR_2 ) {
  case 130:
   VAR_12 = FUNC_2( VAR_8 ) * VAR_13;
   VAR_6 -= VAR_12 / 2;
   break;

  case 128:
   VAR_12 = FUNC_2( VAR_8 ) * VAR_13;
   VAR_6 -= VAR_12;
   break;

  case 129:
  default:
   break;
 }

 if ( VAR_9 & VAR_1 ) {
  VAR_11[0] = VAR_11[1] = VAR_11[2] = 0;
  VAR_11[3] = VAR_10[3];
  FUNC_0( VAR_6+2, VAR_7+2, VAR_8, VAR_11, VAR_13, VAR_5.charsetProp );
 }

 if ( VAR_9 & VAR_3 ) {
  VAR_11[0] = VAR_10[0] * 0.7;
  VAR_11[1] = VAR_10[1] * 0.7;
  VAR_11[2] = VAR_10[2] * 0.7;
  VAR_11[3] = VAR_10[3];
  FUNC_0( VAR_6, VAR_7, VAR_8, VAR_11, VAR_13, VAR_5.charsetProp );
  return;
 }

 if ( VAR_9 & VAR_4 ) {
  VAR_11[0] = VAR_10[0] * 0.7;
  VAR_11[1] = VAR_10[1] * 0.7;
  VAR_11[2] = VAR_10[2] * 0.7;
  VAR_11[3] = VAR_10[3];
  FUNC_0( VAR_6, VAR_7, VAR_8, VAR_10, VAR_13, VAR_5.charsetProp );

  VAR_11[0] = VAR_10[0];
  VAR_11[1] = VAR_10[1];
  VAR_11[2] = VAR_10[2];
  VAR_11[3] = 0.5 + 0.5 * FUNC_3( VAR_5.realtime / VAR_0 );
  FUNC_0( VAR_6, VAR_7, VAR_8, VAR_11, VAR_13, VAR_5.charsetPropGlow );
  return;
 }

 FUNC_0( VAR_6, VAR_7, VAR_8, VAR_10, VAR_13, VAR_5.charsetProp );
}
