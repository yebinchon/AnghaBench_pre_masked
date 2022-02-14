
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_iovlen; } ;



int FUNC_0(void *VAR_0) {
  struct msghdr *VAR_1 = (struct msghdr *)VAR_0;
  return (int)VAR_1->msg_iovlen;
}
