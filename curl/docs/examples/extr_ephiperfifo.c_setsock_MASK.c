
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int curl_socket_t ;
struct TYPE_8__ {int epfd; } ;
struct TYPE_7__ {int sockfd; int action; int * easy; } ;
typedef TYPE_2__ SockInfo ;
typedef TYPE_3__ GlobalInfo ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int,struct epoll_event*) ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int,char*) ;
 int VAR_7 ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(SockInfo *VAR_8, curl_socket_t VAR_9, CURL *VAR_10, int VAR_11,
                    GlobalInfo *VAR_12)
{
  struct epoll_event VAR_13;
  int VAR_14 = ((VAR_11 & VAR_0) ? VAR_2 : 0) |
             ((VAR_11 & VAR_1) ? VAR_3 : 0);

  if(VAR_8->sockfd) {
    if(FUNC_0(VAR_12->epfd, VAR_5, VAR_8->sockfd, ((void*)0)))
      FUNC_1(VAR_7, "EPOLL_CTL_DEL failed for fd: %d : %s\n",
              VAR_8->sockfd, FUNC_2(VAR_6));
  }

  VAR_8->sockfd = VAR_9;
  VAR_8->action = VAR_11;
  VAR_8->easy = VAR_10;

  VAR_13.events = VAR_14;
  VAR_13.data.fd = VAR_9;
  if(FUNC_0(VAR_12->epfd, VAR_4, VAR_9, &VAR_13))
    FUNC_1(VAR_7, "EPOLL_CTL_ADD failed for fd: %d : %s\n",
            VAR_9, FUNC_2(VAR_6));
}
