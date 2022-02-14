
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int netadr_t ;
typedef int msg_t ;
struct TYPE_2__ {int integer; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;

void FUNC_3( netadr_t *VAR_1, msg_t *VAR_2 ) {
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = 0;

 if ( VAR_0->integer ) {
  VAR_3 = FUNC_2 ();
 }

 FUNC_1( *VAR_1, VAR_2 );

 if ( VAR_0->integer ) {
  VAR_4 = FUNC_2 ();
  VAR_5 = VAR_4 - VAR_3;
  if ( VAR_0->integer == 3 ) {
   FUNC_0( "SV_PacketEvent time: %i\n", VAR_5 );
  }
 }
}
