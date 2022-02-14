
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int shader2 ;
typedef int shader1 ;
typedef int qboolean ;
struct TYPE_3__ {int frameTime; int realTime; } ;
struct TYPE_4__ {TYPE_1__ uiDC; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*,char*) ;
 TYPE_2__ VAR_3 ;

qboolean FUNC_10( int VAR_4 ) {
 char *VAR_5;

 VAR_3.uiDC.frameTime = VAR_4 - VAR_3.uiDC.realTime;
 VAR_3.uiDC.realTime = VAR_4;

 VAR_5 = FUNC_2( 0 );




 if ( FUNC_0 (VAR_5, "ui_test") == 0 ) {
  FUNC_7(VAR_2);
 }

 if ( FUNC_0 (VAR_5, "ui_report") == 0 ) {
  FUNC_6();
  return VAR_2;
 }

 if ( FUNC_0 (VAR_5, "ui_load") == 0 ) {
  FUNC_5();
  return VAR_2;
 }

 if ( FUNC_0 (VAR_5, "remapShader") == 0 ) {
  if (FUNC_8() == 4) {
   char VAR_6[VAR_0];
   char VAR_7[VAR_0];
   FUNC_1(VAR_6, FUNC_2(1), sizeof(VAR_6));
   FUNC_1(VAR_7, FUNC_2(2), sizeof(VAR_7));
   FUNC_9(VAR_6, VAR_7, FUNC_2(3));
   return VAR_2;
  }
 }

 if ( FUNC_0 (VAR_5, "postgame") == 0 ) {
  FUNC_4();
  return VAR_2;
 }

 if ( FUNC_0 (VAR_5, "ui_cache") == 0 ) {
  FUNC_3();
  return VAR_2;
 }

 if ( FUNC_0 (VAR_5, "ui_teamOrders") == 0 ) {

  return VAR_2;
 }


 if ( FUNC_0 (VAR_5, "ui_cdkey") == 0 ) {

  return VAR_2;
 }

 return VAR_1;
}
