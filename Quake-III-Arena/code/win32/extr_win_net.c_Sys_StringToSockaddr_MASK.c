
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ipx {scalar_t__ sa_socket; int sa_family; } ;
struct sockaddr_in {int sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {scalar_t__* h_addr_list; } ;
typedef int qboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 struct hostent* FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct sockaddr*,int ,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (char const*) ;

qboolean FUNC_5( const char *VAR_6, struct sockaddr *VAR_7 ) {
 struct hostent *VAR_8;
 int VAR_9;
 char VAR_10[VAR_2];

 FUNC_3( VAR_7, 0, sizeof( *VAR_7 ) );


 if( ( FUNC_4( VAR_6 ) == 21 ) && ( VAR_6[8] == '.' ) ) {
  ((struct sockaddr_ipx *)VAR_7)->sa_family = VAR_1;
  ((struct sockaddr_ipx *)VAR_7)->sa_socket = 0;
  VAR_10[2] = 0;
  FUNC_0(0, VAR_4[0]);
  FUNC_0(2, VAR_4[1]);
  FUNC_0(4, VAR_4[2]);
  FUNC_0(6, VAR_4[3]);
  FUNC_0(9, VAR_5[0]);
  FUNC_0(11, VAR_5[1]);
  FUNC_0(13, VAR_5[2]);
  FUNC_0(15, VAR_5[3]);
  FUNC_0(17, VAR_5[4]);
  FUNC_0(19, VAR_5[5]);
 }
 else {
  ((struct sockaddr_in *)VAR_7)->sin_family = VAR_0;
  ((struct sockaddr_in *)VAR_7)->sin_port = 0;

  if( VAR_6[0] >= '0' && VAR_6[0] <= '9' ) {
   *(int *)&((struct sockaddr_in *)VAR_7)->sin_addr = FUNC_2(VAR_6);
  } else {
   if( ( VAR_8 = FUNC_1( VAR_6 ) ) == 0 ) {
    return 0;
   }
   *(int *)&((struct sockaddr_in *)VAR_7)->sin_addr = *(int *)VAR_8->h_addr_list[0];
  }
 }

 return VAR_3;
}
