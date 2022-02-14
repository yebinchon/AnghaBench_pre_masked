
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int serverAddr ;
typedef int clientAddr ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (char*,char*,short) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

int FUNC_11(char *VAR_5, short VAR_6, char *VAR_7) {
  int VAR_8 = 0;
  struct sockaddr_in VAR_9, VAR_10;
  int VAR_11;

  FUNC_7("open tcp client socket:%s:%d", VAR_5, VAR_6);


  VAR_8 = (int)FUNC_8(VAR_2, VAR_3, VAR_1);

  if (VAR_8 < 0) {
    FUNC_6("failed to open the socket: %d (%s)", VAR_4, FUNC_9(VAR_4));
    return -1;
  }

  if (VAR_7 && VAR_7[0] && VAR_7[0] != '0') {
    FUNC_5((char *)&VAR_10, 0, sizeof(VAR_10));
    VAR_10.sin_family = VAR_0;
    VAR_10.sin_addr.s_addr = FUNC_4(VAR_7);
    VAR_10.sin_port = 0;


    if (FUNC_0(VAR_8, (struct sockaddr *)&VAR_10, sizeof(VAR_10)) < 0) {
      FUNC_6("bind tcp client socket failed, client(%s:0), dest(%s:%d), reason:%d(%s)",
             VAR_7, VAR_5, VAR_6, VAR_4, FUNC_9(VAR_4));
      FUNC_1(VAR_8);
      return -1;
    }
  }

  FUNC_5((char *)&VAR_9, 0, sizeof(VAR_9));
  VAR_9.sin_family = VAR_0;
  VAR_9.sin_addr.s_addr = FUNC_4(VAR_5);
  VAR_9.sin_port = (uint16_t)FUNC_3((uint16_t)VAR_6);

  VAR_11 = FUNC_2(VAR_8, (struct sockaddr *)&VAR_9, sizeof(VAR_9));

  if (VAR_11 != 0) {
    FUNC_6("failed to connect socket, ip:%s, port:%d, reason: %s", VAR_5, VAR_6, FUNC_9(VAR_4));
    FUNC_10(VAR_8);
    VAR_8 = -1;
  }

  return VAR_8;
}
