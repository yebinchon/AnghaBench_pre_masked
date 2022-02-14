
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_iovlen; } ;


 int FUNC_0 (int,struct msghdr*,int ) ;

void FUNC_1(void *VAR_0, int VAR_1) {
  struct msghdr *VAR_2 = (struct msghdr *)VAR_0;
  FUNC_0(VAR_1, VAR_2, 0);
  VAR_2->msg_iovlen = 0;
}
