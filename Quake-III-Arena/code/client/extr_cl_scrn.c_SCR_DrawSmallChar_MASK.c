
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int charSetShader; } ;
struct TYPE_3__ {int (* DrawStretchPic ) (int,int,int ,int,float,float,float,float,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int,int,int ,int,float,float,float,float,int ) ;

void FUNC_1( int VAR_4, int VAR_5, int VAR_6 ) {
 int VAR_7, VAR_8;
 float VAR_9, VAR_10;
 float VAR_11;

 VAR_6 &= 255;

 if ( VAR_6 == ' ' ) {
  return;
 }

 if ( VAR_5 < -VAR_0 ) {
  return;
 }

 VAR_7 = VAR_6>>4;
 VAR_8 = VAR_6&15;

 VAR_9 = VAR_7*0.0625;
 VAR_10 = VAR_8*0.0625;
 VAR_11 = 0.0625;

 VAR_3.DrawStretchPic( VAR_4, VAR_5, VAR_1, VAR_0,
        VAR_10, VAR_9,
        VAR_10 + VAR_11, VAR_9 + VAR_11,
        VAR_2.charSetShader );
}
