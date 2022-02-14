
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ipx {scalar_t__ sa_socket; int sa_nodenum; int sa_netnum; int sa_family; } ;
typedef int address ;
typedef int _true ;
typedef int SOCKET ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,void*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (short) ;
 scalar_t__ FUNC_6 (int,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (int,int ,int ,char*,int) ;
 int FUNC_9 (int ,int ,int ) ;

int FUNC_10( int VAR_10 ) {
 SOCKET VAR_11;
 struct sockaddr_ipx VAR_12;
 int VAR_13 = 1;
 int VAR_14;

 if( ( VAR_11 = FUNC_9( VAR_0, VAR_6, VAR_3 ) ) == VAR_2 ) {
  VAR_14 = FUNC_2();
  if (VAR_14 != VAR_9) {
   FUNC_0( "WARNING: IPX_Socket: socket: %s\n", FUNC_1() );
  }
  return 0;
 }


 if( FUNC_6( VAR_11, VAR_1, &VAR_13 ) == VAR_5 ) {
  FUNC_0( "WARNING: IPX_Socket: ioctl FIONBIO: %s\n", FUNC_1() );
  return 0;
 }


 if( FUNC_8( VAR_11, VAR_7, VAR_8, (char *)&VAR_13, sizeof( VAR_13 ) ) == VAR_5 ) {
  FUNC_0( "WARNING: IPX_Socket: setsockopt SO_BROADCAST: %s\n", FUNC_1() );
  return 0;
 }

 VAR_12.sa_family = VAR_0;
 FUNC_7( VAR_12.sa_netnum, 0, 4 );
 FUNC_7( VAR_12.sa_nodenum, 0, 6 );
 if( VAR_10 == VAR_4 ) {
  VAR_12.sa_socket = 0;
 }
 else {
  VAR_12.sa_socket = FUNC_5( (short)VAR_10 );
 }

 if( FUNC_3( VAR_11, (void *)&VAR_12, sizeof(VAR_12) ) == VAR_5 ) {
  FUNC_0( "WARNING: IPX_Socket: bind: %s\n", FUNC_1() );
  FUNC_4( VAR_11 );
  return 0;
 }

 return VAR_11;
}
