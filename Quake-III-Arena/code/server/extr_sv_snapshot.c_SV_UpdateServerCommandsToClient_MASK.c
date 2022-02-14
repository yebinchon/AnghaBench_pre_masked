
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg_t ;
struct TYPE_3__ {int reliableAcknowledge; int reliableSequence; int reliableSent; int * reliableCommands; } ;
typedef TYPE_1__ client_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;

void FUNC_3( client_t *VAR_2, msg_t *VAR_3 ) {
 int VAR_4;


 for ( VAR_4 = VAR_2->reliableAcknowledge + 1 ; VAR_4 <= VAR_2->reliableSequence ; VAR_4++ ) {
  FUNC_0( VAR_3, VAR_1 );
  FUNC_1( VAR_3, VAR_4 );
  FUNC_2( VAR_3, VAR_2->reliableCommands[ VAR_4 & (VAR_0-1) ] );
 }
 VAR_2->reliableSent = VAR_2->reliableSequence;
}
