
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct linger {int member_1; int member_0; } ;
typedef int ling ;
typedef int flags ;
struct TYPE_6__ {int port; } ;
typedef TYPE_2__ ebb_server ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (struct sockaddr_in*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int ,int ,void*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,char*,int const) ;

int
FUNC_10(ebb_server *VAR_9, const int VAR_10)
{
  int VAR_11 = -1;
  struct linger VAR_12 = {0, 0};
  struct sockaddr_in VAR_13;
  int VAR_14 = 1;

  if ((VAR_11 = FUNC_8(VAR_0, VAR_3, 0)) == -1) {
    FUNC_6("socket()");
    goto error;
  }

  VAR_14 = 1;
  FUNC_7(VAR_11, VAR_4, VAR_7, (void *)&VAR_14, sizeof(VAR_14));
  FUNC_7(VAR_11, VAR_4, VAR_5, (void *)&VAR_14, sizeof(VAR_14));
  FUNC_7(VAR_11, VAR_4, VAR_6, (void *)&VAR_12, sizeof(VAR_12));




  FUNC_7(VAR_11, VAR_2, VAR_8, (void *)&VAR_14, sizeof(VAR_14));




  FUNC_5(&VAR_13, 0, sizeof(VAR_13));

  VAR_13.sin_family = VAR_0;
  VAR_13.sin_port = FUNC_4(VAR_10);
  VAR_13.sin_addr.s_addr = FUNC_3(VAR_1);

  if (FUNC_0(VAR_11, (struct sockaddr *)&VAR_13, sizeof(VAR_13)) < 0) {
    FUNC_6("bind()");
    goto error;
  }

  int VAR_15 = FUNC_2(VAR_9, VAR_11);
  if (VAR_15 >= 0) {
    FUNC_9(VAR_9->port, "%d", VAR_10);
  }
  return VAR_15;
error:
  if(VAR_11 > 0) FUNC_1(VAR_11);
  return -1;
}
