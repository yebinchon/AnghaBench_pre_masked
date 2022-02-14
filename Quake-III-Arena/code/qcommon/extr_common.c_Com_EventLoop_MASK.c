
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int evType; int evTime; scalar_t__ evPtr; int evPtrLength; int evValue2; int evValue; } ;
typedef TYPE_1__ sysEvent_t ;
typedef int netadr_t ;
struct TYPE_11__ {unsigned int maxsize; int cursize; int data; } ;
typedef TYPE_2__ msg_t ;
typedef int evFrom ;
typedef int byte ;
typedef int bufData ;
struct TYPE_13__ {int value; } ;
struct TYPE_12__ {scalar_t__ integer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int) ;
 TYPE_1__ FUNC_7 () ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_12 (int ,int *,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (int*) ;







 int FUNC_14 (scalar_t__) ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;

int FUNC_15( void ) {
 sysEvent_t VAR_6;
 netadr_t VAR_7;
 byte VAR_8[VAR_1];
 msg_t VAR_9;

 FUNC_11( &VAR_9, VAR_8, sizeof( VAR_8 ) );

 while ( 1 ) {
  VAR_6 = FUNC_7();


  if ( VAR_6.evType == 129 ) {

   while ( FUNC_12( VAR_2, &VAR_7, &VAR_9 ) ) {
    FUNC_4( VAR_7, &VAR_9 );
   }

   while ( FUNC_12( VAR_3, &VAR_7, &VAR_9 ) ) {

    if ( VAR_5->integer ) {
     FUNC_10( &VAR_7, &VAR_9 );
    }
   }

   return VAR_6.evTime;
  }


  switch ( VAR_6.evType ) {
  default:

   FUNC_6( VAR_0, "Com_EventLoop: bad event type %i", VAR_6.evType );
   break;
        case 129:
            break;
  case 131:
   FUNC_2( VAR_6.evValue, VAR_6.evValue2, VAR_6.evTime );
   break;
  case 134:
   FUNC_0( VAR_6.evValue );
   break;
  case 130:
   FUNC_3( VAR_6.evValue, VAR_6.evValue2, VAR_6.evTime );
   break;
  case 132:
   FUNC_1( VAR_6.evValue, VAR_6.evValue2, VAR_6.evTime );
   break;
  case 133:
   FUNC_5( (char *)VAR_6.evPtr );
   FUNC_5( "\n" );
   break;
  case 128:



   if ( VAR_4->value > 0 ) {
    static int VAR_10;

    if ( FUNC_13( &VAR_10 ) < VAR_4->value ) {
     break;
    }
   }

   VAR_7 = *(netadr_t *)VAR_6.evPtr;
   VAR_9.cursize = VAR_6.evPtrLength - sizeof( VAR_7 );





   if ( (unsigned)VAR_9.cursize > VAR_9.maxsize ) {
    FUNC_9("Com_EventLoop: oversize packet\n");
    continue;
   }
   FUNC_8( VAR_9.data, (byte *)((netadr_t *)VAR_6.evPtr + 1), VAR_9.cursize );
   if ( VAR_5->integer ) {
    FUNC_10( &VAR_7, &VAR_9 );
   } else {
    FUNC_4( VAR_7, &VAR_9 );
   }
   break;
  }


  if ( VAR_6.evPtr ) {
   FUNC_14( VAR_6.evPtr );
  }
 }

 return 0;
}
