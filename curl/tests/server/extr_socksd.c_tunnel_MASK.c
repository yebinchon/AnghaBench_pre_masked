
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perclient {int fromremote; int clientfd; int remotefd; int fromclient; } ;
typedef scalar_t__ ssize_t ;
typedef int fd_set ;
typedef int buffer ;
typedef int SEND_TYPE_ARG3 ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,char*,int,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct perclient *VAR_0, fd_set *VAR_1)
{
  ssize_t VAR_2;
  ssize_t VAR_3;
  char VAR_4[512];
  if(FUNC_0(VAR_0->clientfd, VAR_1)) {

    VAR_2 = FUNC_1(VAR_0->clientfd, VAR_4, sizeof(VAR_4), 0);
    if(VAR_2 > 0) {
      VAR_3 = FUNC_2(VAR_0->remotefd, (char *)VAR_4,
                    (SEND_TYPE_ARG3)VAR_2, 0);
      if(VAR_3 != VAR_2)
        return 1;
      VAR_0->fromclient += VAR_3;
    }
    else
      return 1;
  }
  if(FUNC_0(VAR_0->remotefd, VAR_1)) {

    VAR_2 = FUNC_1(VAR_0->remotefd, VAR_4, sizeof(VAR_4), 0);
    if(VAR_2 > 0) {
      VAR_3 = FUNC_2(VAR_0->clientfd, (char *)VAR_4,
                    (SEND_TYPE_ARG3)VAR_2, 0);
      if(VAR_3 != VAR_2)
        return 1;
      VAR_0->fromremote += VAR_3;
    }
    else
      return 1;
  }
  return 0;
}
