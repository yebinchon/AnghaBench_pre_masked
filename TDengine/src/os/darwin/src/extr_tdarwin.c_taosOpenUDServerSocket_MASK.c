
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {scalar_t__ sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int serverAdd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,char*,char*,short) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;

int FUNC_11(char *VAR_3, short VAR_4) {
  struct sockaddr_un VAR_5;
  int VAR_6;
  char VAR_7[128];

  FUNC_4("open ud socket:%s", VAR_7);

  FUNC_6(VAR_7, "%s.%d", VAR_3, VAR_4);

  FUNC_1((char *)&VAR_5, sizeof(VAR_5));
  VAR_5.sun_family = VAR_0;
  FUNC_7(VAR_5.sun_path + 1, VAR_7);
  FUNC_10(VAR_7);

  if ((VAR_6 = FUNC_5(VAR_0, VAR_1, 0)) < 0) {
    FUNC_3("failed to open UD socket:%s, reason:%s", VAR_7, FUNC_8(VAR_2));
    return -1;
  }


  if (FUNC_0(VAR_6, (struct sockaddr *)&VAR_5, sizeof(VAR_5)) < 0) {
    FUNC_3("bind socket:%s failed, reason:%s", VAR_7, FUNC_8(VAR_2));
    FUNC_9(VAR_6);
    return -1;
  }

  if (FUNC_2(VAR_6, 10) < 0) {
    FUNC_3("listen socket:%s failed, reason:%s", VAR_7, FUNC_8(VAR_2));
    return -1;
  }

  return VAR_6;
}
