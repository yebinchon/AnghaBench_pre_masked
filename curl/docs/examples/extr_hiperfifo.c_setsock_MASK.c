
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_7__ {int evbase; } ;
struct TYPE_6__ {int action; int ev; int sockfd; int * easy; } ;
typedef TYPE_1__ SockInfo ;
typedef TYPE_2__ GlobalInfo ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ,int,int ,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(SockInfo *VAR_6, curl_socket_t VAR_7, CURL *VAR_8, int VAR_9,
                    GlobalInfo *VAR_10)
{
  int VAR_11 =
     ((VAR_9 & VAR_0) ? VAR_3 : 0) |
     ((VAR_9 & VAR_1) ? VAR_4 : 0) | VAR_2;

  VAR_6->sockfd = VAR_7;
  VAR_6->action = VAR_9;
  VAR_6->easy = VAR_8;
  FUNC_2(&VAR_6->ev);
  FUNC_1(&VAR_6->ev, VAR_10->evbase, VAR_6->sockfd, VAR_11, VAR_5, VAR_10);
  FUNC_0(&VAR_6->ev, ((void*)0));
}
