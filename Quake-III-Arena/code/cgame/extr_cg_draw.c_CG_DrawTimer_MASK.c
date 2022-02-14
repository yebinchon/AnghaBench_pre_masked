
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int time; } ;
struct TYPE_3__ {int levelStartTime; } ;


 float VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,float,char*,float) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 char* FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static float FUNC_3( float VAR_4 ) {
 char *VAR_5;
 int VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = VAR_2.time - VAR_3.levelStartTime;

 VAR_8 = VAR_10 / 1000;
 VAR_7 = VAR_8 / 60;
 VAR_8 -= VAR_7 * 60;
 VAR_9 = VAR_8 / 10;
 VAR_8 -= VAR_9 * 10;

 VAR_5 = FUNC_2( "%i:%i%i", VAR_7, VAR_9, VAR_8 );
 VAR_6 = FUNC_1( VAR_5 ) * VAR_1;

 FUNC_0( 635 - VAR_6, VAR_4 + 2, VAR_5, 1.0F);

 return VAR_4 + VAR_0 + 4;
}
