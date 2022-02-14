
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int epfd; } ;
struct TYPE_6__ {int sockfd; } ;
typedef TYPE_1__ SockInfo ;
typedef TYPE_2__ GlobalInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(SockInfo *VAR_3, GlobalInfo* VAR_4)
{
  if(VAR_3) {
    if(VAR_3->sockfd) {
      if(FUNC_0(VAR_4->epfd, VAR_0, VAR_3->sockfd, ((void*)0)))
        FUNC_1(VAR_2, "EPOLL_CTL_DEL failed for fd: %d : %s\n",
                VAR_3->sockfd, FUNC_3(VAR_1));
    }
    FUNC_2(VAR_3);
  }
}
