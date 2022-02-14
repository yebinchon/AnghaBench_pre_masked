
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ evPtr; } ;
typedef TYPE_1__ sysEvent_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2( sysEvent_t *VAR_6 ) {
 sysEvent_t *VAR_7;
 static int VAR_8 = 0;

 VAR_7 = &VAR_1[ VAR_2 & (VAR_0-1) ];

 if ( VAR_2 - VAR_3 >= VAR_0 ) {


  if ( !VAR_8 ) {
   VAR_8 = VAR_5;
   FUNC_0( "WARNING: Com_PushEvent overflow\n" );
  }

  if ( VAR_7->evPtr ) {
   FUNC_1( VAR_7->evPtr );
  }
  VAR_3++;
 } else {
  VAR_8 = VAR_4;
 }

 *VAR_7 = *VAR_6;
 VAR_2++;
}
