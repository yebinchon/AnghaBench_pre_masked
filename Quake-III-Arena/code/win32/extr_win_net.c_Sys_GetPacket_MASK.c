
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr_in {int sin_zero; } ;
struct sockaddr {int dummy; } ;
typedef int qboolean ;
struct TYPE_7__ {int* ip; short port; int type; } ;
typedef TYPE_1__ netadr_t ;
struct TYPE_8__ {int* data; int maxsize; int readcount; int cursize; } ;
typedef TYPE_2__ msg_t ;
typedef int from ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (struct sockaddr*,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct sockaddr*,int *,int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int,int*,int,int ,struct sockaddr*,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

qboolean FUNC_8( netadr_t *VAR_11, msg_t *VAR_12 ) {
 int VAR_13;
 struct sockaddr VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 for( VAR_17 = 0 ; VAR_17 < 2 ; VAR_17++ ) {
  if( VAR_17 == 0 ) {
   VAR_16 = VAR_4;
  }
  else {
   VAR_16 = VAR_5;
  }

  if( !VAR_16 ) {
   continue;
  }

  VAR_15 = sizeof(VAR_14);
  VAR_8++;
  VAR_13 = FUNC_7( VAR_16, VAR_12->data, VAR_12->maxsize, 0, (struct sockaddr *)&VAR_14, &VAR_15 );
  if (VAR_13 == VAR_1)
  {
   VAR_18 = FUNC_4();

   if( VAR_18 == VAR_3 || VAR_18 == VAR_2 ) {
    continue;
   }
   FUNC_0( "NET_GetPacket: %s\n", FUNC_2() );
   continue;
  }

  if ( VAR_16 == VAR_4 ) {
   FUNC_6( ((struct sockaddr_in *)&VAR_14)->sin_zero, 0, 8 );
  }

  if ( VAR_10 && VAR_16 == VAR_4 && FUNC_5( &VAR_14, &VAR_9, VAR_15 ) == 0 ) {
   if ( VAR_13 < 10 || VAR_12->data[0] != 0 || VAR_12->data[1] != 0 || VAR_12->data[2] != 0 || VAR_12->data[3] != 1 ) {
    continue;
   }
   VAR_11->type = VAR_0;
   VAR_11->ip[0] = VAR_12->data[4];
   VAR_11->ip[1] = VAR_12->data[5];
   VAR_11->ip[2] = VAR_12->data[6];
   VAR_11->ip[3] = VAR_12->data[7];
   VAR_11->port = *(short *)&VAR_12->data[8];
   VAR_12->readcount = 10;
  }
  else {
   FUNC_3( &VAR_14, VAR_11 );
   VAR_12->readcount = 0;
  }

  if( VAR_13 == VAR_12->maxsize ) {
   FUNC_0( "Oversize packet from %s\n", FUNC_1 (*VAR_11) );
   continue;
  }

  VAR_12->cursize = VAR_13;
  return VAR_7;
 }

 return VAR_6;
}
