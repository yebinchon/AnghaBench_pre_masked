
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


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,struct sockaddr*) ;
 int FUNC_4 (int,void*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (short) ;
 int FUNC_7 (int,int ,int *) ;
 int VAR_9 ;
 int FUNC_8 (int,int ,int ,char*,int) ;
 int FUNC_9 (int ,int ,int ) ;

int FUNC_10 (char *VAR_10, int VAR_11)
{
 int VAR_12;
 struct sockaddr_in VAR_13;
 qboolean VAR_14 = VAR_9;
 int VAR_15 = 1;

 if ( VAR_10 ) {
  FUNC_0("Opening IP socket: %s:%i\n", VAR_10, VAR_11 );
 } else {
  FUNC_0("Opening IP socket: localhost:%i\n", VAR_11 );
 }

 if ((VAR_12 = FUNC_9 (VAR_4, VAR_6, VAR_3)) == -1)
 {
  FUNC_0 ("ERROR: UDP_OpenSocket: socket: %s", FUNC_1());
  return 0;
 }


 if (FUNC_7 (VAR_12, VAR_1, &VAR_14) == -1)
 {
  FUNC_0 ("ERROR: UDP_OpenSocket: ioctl FIONBIO:%s\n", FUNC_1());
  return 0;
 }


 if (FUNC_8(VAR_12, VAR_7, VAR_8, (char *)&VAR_15, sizeof(VAR_15)) == -1)
 {
  FUNC_0 ("ERROR: UDP_OpenSocket: setsockopt SO_BROADCAST:%s\n", FUNC_1());
  return 0;
 }

 if (!VAR_10 || !VAR_10[0] || !FUNC_2(VAR_10, "localhost"))
  VAR_13.sin_addr.s_addr = VAR_2;
 else
  FUNC_3 (VAR_10, (struct sockaddr *)&VAR_13);

 if (VAR_11 == VAR_5)
  VAR_13.sin_port = 0;
 else
  VAR_13.sin_port = FUNC_6((short)VAR_11);

 VAR_13.sin_family = VAR_0;

 if( FUNC_4 (VAR_12, (void *)&VAR_13, sizeof(VAR_13)) == -1)
 {
  FUNC_0 ("ERROR: UDP_OpenSocket: bind: %s\n", FUNC_1());
  FUNC_5 (VAR_12);
  return 0;
 }

 return VAR_12;
}
