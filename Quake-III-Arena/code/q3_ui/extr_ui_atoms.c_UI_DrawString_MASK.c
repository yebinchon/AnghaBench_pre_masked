
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_2__ {int realtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int FUNC_0 (int,int,char const*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (double*,double*,double*,double) ;
 int VAR_12 ;

 int VAR_13 ;
 double FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 TYPE_1__ VAR_14 ;

void FUNC_4( int VAR_15, int VAR_16, const char* VAR_17, int VAR_18, vec4_t VAR_19 )
{
 int VAR_20;
 int VAR_21;
 int VAR_22;
 vec4_t VAR_23;
 vec4_t VAR_24;
 float *VAR_25;
 vec4_t VAR_26;

 if( !VAR_17 ) {
  return;
 }

 if ((VAR_18 & VAR_8) && ((VAR_14.realtime/VAR_2) & 1))
  return;

 if (VAR_18 & VAR_13)
 {
  VAR_21 = VAR_7;
  VAR_22 = VAR_6;
 }
 else if (VAR_18 & VAR_11)
 {
  VAR_21 = VAR_4;
  VAR_22 = VAR_3;
 }
 else
 {
  VAR_21 = VAR_1;
  VAR_22 = VAR_0;
 }

 if (VAR_18 & VAR_12)
 {
  VAR_24[0] = 0.8*VAR_19[0];
  VAR_24[1] = 0.8*VAR_19[1];
  VAR_24[2] = 0.8*VAR_19[2];
  VAR_24[3] = 0.8*VAR_19[3];
  FUNC_1(VAR_19,VAR_24,VAR_23,0.5+0.5*FUNC_2(VAR_14.realtime/VAR_5));
  VAR_25 = VAR_23;
 }
 else
  VAR_25 = VAR_19;

 switch (VAR_18 & VAR_10)
 {
  case 129:

   VAR_20 = FUNC_3(VAR_17);
   VAR_15 = VAR_15 - VAR_20*VAR_21/2;
   break;

  case 128:

   VAR_20 = FUNC_3(VAR_17);
   VAR_15 = VAR_15 - VAR_20*VAR_21;
   break;

  default:

   break;
 }

 if ( VAR_18 & VAR_9 )
 {
  VAR_26[0] = VAR_26[1] = VAR_26[2] = 0;
  VAR_26[3] = VAR_25[3];
  FUNC_0(VAR_15+2,VAR_16+2,VAR_17,VAR_26,VAR_21,VAR_22);
 }

 FUNC_0(VAR_15,VAR_16,VAR_17,VAR_25,VAR_21,VAR_22);
}
