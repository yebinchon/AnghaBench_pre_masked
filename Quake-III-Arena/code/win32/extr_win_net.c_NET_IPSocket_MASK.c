
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int qboolean ;
typedef int i ;
typedef int address ;
typedef int SOCKET ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,struct sockaddr*) ;
 int VAR_10 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,void*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (short) ;
 scalar_t__ FUNC_8 (int,int ,int *) ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (int,int ,int ,char*,int) ;
 int FUNC_10 (int ,int ,int ) ;

int FUNC_11( char *VAR_12, int VAR_13 ) {
 SOCKET VAR_14;
 struct sockaddr_in VAR_15;
 qboolean VAR_16 = VAR_11;
 int VAR_17 = 1;
 int VAR_18;

 if( VAR_12 ) {
  FUNC_0( "Opening IP socket: %s:%i\n", VAR_12, VAR_13 );
 }
 else {
  FUNC_0( "Opening IP socket: localhost:%i\n", VAR_13 );
 }

 if( ( VAR_14 = FUNC_10( VAR_0, VAR_7, VAR_4 ) ) == VAR_3 ) {
  VAR_18 = FUNC_4();
  if( VAR_18 != VAR_10 ) {
   FUNC_0( "WARNING: UDP_OpenSocket: socket: %s\n", FUNC_1() );
  }
  return 0;
 }


 if( FUNC_8( VAR_14, VAR_1, &VAR_16 ) == VAR_6 ) {
  FUNC_0( "WARNING: UDP_OpenSocket: ioctl FIONBIO: %s\n", FUNC_1() );
  return 0;
 }


 if( FUNC_9( VAR_14, VAR_8, VAR_9, (char *)&VAR_17, sizeof(VAR_17) ) == VAR_6 ) {
  FUNC_0( "WARNING: UDP_OpenSocket: setsockopt SO_BROADCAST: %s\n", FUNC_1() );
  return 0;
 }

 if( !VAR_12 || !VAR_12[0] || !FUNC_2(VAR_12, "localhost") ) {
  VAR_15.sin_addr.s_addr = VAR_2;
 }
 else {
  FUNC_3( VAR_12, (struct sockaddr *)&VAR_15 );
 }

 if( VAR_13 == VAR_5 ) {
  VAR_15.sin_port = 0;
 }
 else {
  VAR_15.sin_port = FUNC_7( (short)VAR_13 );
 }

 VAR_15.sin_family = VAR_0;

 if( FUNC_5( VAR_14, (void *)&VAR_15, sizeof(VAR_15) ) == VAR_6 ) {
  FUNC_0( "WARNING: UDP_OpenSocket: bind: %s\n", FUNC_1() );
  FUNC_6( VAR_14 );
  return 0;
 }

 return VAR_14;
}
