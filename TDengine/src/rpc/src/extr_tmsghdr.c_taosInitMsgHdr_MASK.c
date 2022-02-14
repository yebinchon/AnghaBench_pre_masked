
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct msghdr {int msg_namelen; struct msghdr* msg_iov; struct sockaddr_in* msg_name; } ;
struct iovec {int msg_namelen; struct iovec* msg_iov; struct sockaddr_in* msg_name; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (struct msghdr*,int ,size_t) ;

void FUNC_2(void **VAR_0, void *VAR_1, int VAR_2) {
  struct msghdr *VAR_3 = (struct msghdr *)FUNC_0(sizeof(struct msghdr));
  FUNC_1(VAR_3, 0, sizeof(struct msghdr));
  *VAR_0 = VAR_3;
  struct sockaddr_in *VAR_4 = (struct sockaddr_in *)VAR_1;

  VAR_3->msg_name = VAR_4;
  VAR_3->msg_namelen = sizeof(struct sockaddr_in);
  int VAR_5 = (int)sizeof(struct iovec) * VAR_2;
  VAR_3->msg_iov = (struct iovec *)FUNC_0((size_t)VAR_5);
  FUNC_1(VAR_3->msg_iov, 0, (size_t)VAR_5);
}
