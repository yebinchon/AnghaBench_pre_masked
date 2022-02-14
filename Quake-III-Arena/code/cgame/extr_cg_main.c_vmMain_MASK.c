
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cursory; int cursorx; } ;
struct TYPE_3__ {int cursorY; int cursorX; } ;




 int FUNC_0 () ;
 int FUNC_1 () ;

 int FUNC_2 (int,int,int) ;

 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;

 int FUNC_5 (int,int,int) ;

 int FUNC_6 (int,int) ;

 int FUNC_7 () ;

 int FUNC_8 (int,int) ;

 int FUNC_9 () ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

int FUNC_10( int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14 ) {

 switch ( VAR_2 ) {
 case 132:
  FUNC_5( VAR_3, VAR_4, VAR_5 );
  return 0;
 case 128:
  FUNC_9();
  return 0;
 case 136:
  return FUNC_0();
 case 134:
  FUNC_2( VAR_3, VAR_4, VAR_5 );
  return 0;
 case 135:
  return FUNC_1();
 case 130:
  return FUNC_7();
 case 131:
  FUNC_6(VAR_3, VAR_4);
  return 0;
 case 129:




  FUNC_8(VAR_3, VAR_4);
  return 0;
 case 133:
  FUNC_4(VAR_3);
  return 0;
 default:
  FUNC_3( "vmMain: unknown command %i", VAR_2 );
  break;
 }
 return -1;
}
