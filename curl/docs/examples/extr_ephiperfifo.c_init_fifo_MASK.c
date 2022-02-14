
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_4__ {int fd; } ;
struct epoll_event {TYPE_1__ data; int events; } ;
typedef int curl_socket_t ;
struct TYPE_5__ {int fifofd; int epfd; int input; } ;
typedef TYPE_2__ GlobalInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,struct epoll_event*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 char* VAR_9 ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(GlobalInfo *VAR_10)
{
  struct stat VAR_11;
  curl_socket_t VAR_12;
  struct epoll_event VAR_13;

  FUNC_3(VAR_3, "Creating named pipe \"%s\"\n", VAR_9);
  if(FUNC_4 (VAR_9, &VAR_11) == 0) {
    if((VAR_11.st_mode & VAR_6) == VAR_7) {
      VAR_8 = VAR_0;
      FUNC_7("lstat");
      FUNC_1(1);
    }
  }
  FUNC_8(VAR_9);
  if(FUNC_5 (VAR_9, 0600) == -1) {
    FUNC_7("mkfifo");
    FUNC_1(1);
  }
  VAR_12 = FUNC_6(VAR_9, VAR_5 | VAR_4, 0);
  if(VAR_12 == -1) {
    FUNC_7("open");
    FUNC_1(1);
  }

  VAR_10->fifofd = VAR_12;
  VAR_10->input = FUNC_2(VAR_12, "r");

  VAR_13.events = VAR_1;
  VAR_13.data.fd = VAR_12;
  FUNC_0(VAR_10->epfd, VAR_2, VAR_12, &VAR_13);

  FUNC_3(VAR_3, "Now, pipe some URL's into > %s\n", VAR_9);
  return 0;
}
