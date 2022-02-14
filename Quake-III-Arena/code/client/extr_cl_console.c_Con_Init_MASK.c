
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* widthInChars; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_8 ;
 void* VAR_9 ;
 TYPE_1__ VAR_10 ;
 void* VAR_11 ;
 TYPE_1__* VAR_12 ;

void FUNC_3 (void) {
 int VAR_13;

 VAR_9 = FUNC_1 ("con_notifytime", "3", 0);
 VAR_8 = FUNC_1 ("scr_conspeed", "3", 0);

 FUNC_2( &VAR_10 );
 VAR_10.widthInChars = VAR_11;
 for ( VAR_13 = 0 ; VAR_13 < VAR_0 ; VAR_13++ ) {
  FUNC_2( &VAR_12[VAR_13] );
  VAR_12[VAR_13].widthInChars = VAR_11;
 }

 FUNC_0 ("toggleconsole", VAR_7);
 FUNC_0 ("messagemode", VAR_6);
 FUNC_0 ("messagemode2", VAR_3);
 FUNC_0 ("messagemode3", VAR_4);
 FUNC_0 ("messagemode4", VAR_5);
 FUNC_0 ("clear", VAR_1);
 FUNC_0 ("condump", VAR_2);
}
