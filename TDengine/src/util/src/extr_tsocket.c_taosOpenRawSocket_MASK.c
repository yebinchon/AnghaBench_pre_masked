
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int rawAdd ;
typedef int hold ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int,int ,int ,void*,int) ;

int FUNC_9(char *VAR_6) {
  int VAR_7, VAR_8;
  struct sockaddr_in VAR_9;

  FUNC_5("open udp raw socket:%s", VAR_6);


  VAR_7 = (int)FUNC_6(VAR_0, VAR_4, VAR_2);
  if (VAR_7 < 0) {
    FUNC_4("failed to open raw socket: %d (%s)", VAR_5, FUNC_7(VAR_5));
    return -1;
  }

  VAR_8 = 1;
  if (FUNC_8(VAR_7, VAR_1, VAR_3, (void *)&VAR_8, sizeof(VAR_8)) < 0) {
    FUNC_4("failed to set hold option: %d (%s)", VAR_5, FUNC_7(VAR_5));
    FUNC_2(VAR_7);
    return -1;
  }

  FUNC_1((char *)&VAR_9, sizeof(VAR_9));
  VAR_9.sin_family = VAR_0;
  VAR_9.sin_addr.s_addr = FUNC_3(VAR_6);

  if (FUNC_0(VAR_7, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0) {
    FUNC_4("failed to bind RAW socket: %d (%s)", VAR_5, FUNC_7(VAR_5));
    FUNC_2(VAR_7);
    return -1;
  }

  return VAR_7;
}
