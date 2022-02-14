
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ cursize; scalar_t__ readcount; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {scalar_t__ reliableAcknowledge; scalar_t__ reliableSequence; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;





 char** VAR_5 ;

void FUNC_10( msg_t *VAR_6 ) {
 int VAR_7;

 if ( VAR_2->integer == 1 ) {
  FUNC_5 ("%i ",VAR_6->cursize);
 } else if ( VAR_2->integer >= 2 ) {
  FUNC_5 ("------------------\n");
 }

 FUNC_6(VAR_6);


 VAR_3.reliableAcknowledge = FUNC_8( VAR_6 );

 if ( VAR_3.reliableAcknowledge < VAR_3.reliableSequence - VAR_1 ) {
  VAR_3.reliableAcknowledge = VAR_3.reliableSequence;
 }




 while ( 1 ) {
  if ( VAR_6->readcount > VAR_6->cursize ) {
   FUNC_4 (VAR_0,"CL_ParseServerMessage: read past end of server message");
   break;
  }

  VAR_7 = FUNC_7( VAR_6 );

  if ( VAR_7 == VAR_4) {
   FUNC_9( VAR_6, "END OF MESSAGE" );
   break;
  }

  if ( VAR_2->integer >= 2 ) {
   if ( !VAR_5[VAR_7] ) {
    FUNC_5( "%3i:BAD CMD %i\n", VAR_6->readcount-1, VAR_7 );
   } else {
    FUNC_9( VAR_6, VAR_5[VAR_7] );
   }
  }


  switch ( VAR_7 ) {
  default:
   FUNC_4 (VAR_0,"CL_ParseServerMessage: Illegible server message\n");
   break;
  case 130:
   break;
  case 129:
   FUNC_0( VAR_6 );
   break;
  case 131:
   FUNC_2( VAR_6 );
   break;
  case 128:
   FUNC_3( VAR_6 );
   break;
  case 132:
   FUNC_1( VAR_6 );
   break;
  }
 }
}
