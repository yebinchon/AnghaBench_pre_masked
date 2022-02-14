
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msghdr {size_t msg_iovlen; TYPE_1__* msg_iov; } ;
struct TYPE_2__ {char* iov_base; size_t iov_len; } ;



void FUNC_0(void *VAR_0, char *VAR_1, int VAR_2) {
  struct msghdr *VAR_3 = (struct msghdr *)VAR_0;
  VAR_3->msg_iov[VAR_3->msg_iovlen].iov_base = VAR_1;
  VAR_3->msg_iov[VAR_3->msg_iovlen].iov_len = (size_t)VAR_2;
  VAR_3->msg_iovlen++;
}
