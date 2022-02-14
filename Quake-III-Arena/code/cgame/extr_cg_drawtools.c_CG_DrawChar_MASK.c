
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int charsetShader; } ;
struct TYPE_4__ {TYPE_1__ media; } ;


 int FUNC_0 (float*,float*,float*,float*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (float,float,float,float,float,float,float,float,int ) ;

void FUNC_2( int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5 ) {
 int VAR_6, VAR_7;
 float VAR_8, VAR_9;
 float VAR_10;
 float VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_5 &= 255;

 if ( VAR_5 == ' ' ) {
  return;
 }

 VAR_11 = VAR_1;
 VAR_12 = VAR_2;
 VAR_13 = VAR_3;
 VAR_14 = VAR_4;
 FUNC_0( &VAR_11, &VAR_12, &VAR_13, &VAR_14 );

 VAR_6 = VAR_5>>4;
 VAR_7 = VAR_5&15;

 VAR_8 = VAR_6*0.0625;
 VAR_9 = VAR_7*0.0625;
 VAR_10 = 0.0625;

 FUNC_1( VAR_11, VAR_12, VAR_13, VAR_14,
        VAR_9, VAR_8,
        VAR_9 + VAR_10, VAR_8 + VAR_10,
        VAR_0.media.charsetShader );
}
