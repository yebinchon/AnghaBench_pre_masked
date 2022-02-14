
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int curl_socket_t ;
struct TYPE_3__ {int action; int ch; scalar_t__ ev; int * easy; int sockfd; } ;
typedef TYPE_1__ SockInfo ;
typedef int GlobalInfo ;
typedef int GIOCondition ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(SockInfo *VAR_5, curl_socket_t VAR_6, CURL *VAR_7, int VAR_8,
                    GlobalInfo *VAR_9)
{
  GIOCondition VAR_10 =
    ((VAR_8 & VAR_0) ? VAR_2 : 0) |
    ((VAR_8 & VAR_1) ? VAR_3 : 0);

  VAR_5->sockfd = VAR_6;
  VAR_5->action = VAR_8;
  VAR_5->easy = VAR_7;
  if(VAR_5->ev) {
    FUNC_1(VAR_5->ev);
  }
  VAR_5->ev = FUNC_0(VAR_5->ch, VAR_10, VAR_4, VAR_9);
}
