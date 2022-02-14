
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int voidfunc_f ;
typedef int uiMenuCommand_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;







 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;

void FUNC_7( uiMenuCommand_t VAR_2 ) {


 FUNC_1();

 switch ( VAR_2 ) {
 case 130:
  FUNC_3();
  return;
 case 132:
  FUNC_5();
  return;
 case 131:
  FUNC_2( "Insert the CD", (voidfunc_f)((void*)0), VAR_0 );
  return;
 case 134:
  FUNC_2( "Bad CD Key", (voidfunc_f)((void*)0), VAR_1 );
  return;
 case 133:





  FUNC_6( "cl_paused", "1" );
  FUNC_4();
  return;


 case 128:
 case 129:
 default:

   FUNC_0("UI_SetActiveMenu: bad enum %d\n", VAR_2 );

   break;
 }
}
