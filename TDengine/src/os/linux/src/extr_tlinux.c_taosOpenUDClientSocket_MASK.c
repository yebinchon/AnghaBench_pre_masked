
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {scalar_t__ sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int serverAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,char*,char*,short) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int ) ;

int FUNC_7(char *VAR_3, short VAR_4) {
  int VAR_5 = 0;
  struct sockaddr_un VAR_6;
  int VAR_7;
  char VAR_8[128];
  FUNC_4(VAR_8, "%s.%d", VAR_3, VAR_4);

  VAR_5 = FUNC_3(VAR_0, VAR_1, 0);

  if (VAR_5 < 0) {
    FUNC_2("failed to open the UD socket:%s, reason:%s", VAR_8, FUNC_6(VAR_2));
    return -1;
  }

  FUNC_1((char *)&VAR_6, 0, sizeof(VAR_6));
  VAR_6.sun_family = VAR_0;
  FUNC_5(VAR_6.sun_path + 1, VAR_8);

  VAR_7 = FUNC_0(VAR_5, (struct sockaddr *)&VAR_6, sizeof(VAR_6));

  if (VAR_7 != 0) {
    FUNC_2("failed to connect UD socket, name:%d, reason: %s", VAR_8, FUNC_6(VAR_2));
    VAR_5 = -1;
  }

  return VAR_5;
}
