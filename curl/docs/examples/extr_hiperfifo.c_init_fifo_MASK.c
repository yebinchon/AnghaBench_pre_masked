
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int curl_socket_t ;
struct TYPE_4__ {int fifo_event; int evbase; int input; } ;
typedef TYPE_1__ GlobalInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int,int,int ,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(GlobalInfo *VAR_11)
{
  struct stat VAR_12;
  curl_socket_t VAR_13;

  FUNC_4(VAR_3, "Creating named pipe \"%s\"\n", VAR_9);
  if(FUNC_5 (VAR_9, &VAR_12) == 0) {
    if((VAR_12.st_mode & VAR_6) == VAR_7) {
      VAR_8 = VAR_0;
      FUNC_8("lstat");
      FUNC_2(1);
    }
  }
  FUNC_9(VAR_9);
  if(FUNC_6 (VAR_9, 0600) == -1) {
    FUNC_8("mkfifo");
    FUNC_2(1);
  }
  VAR_13 = FUNC_7(VAR_9, VAR_5 | VAR_4, 0);
  if(VAR_13 == -1) {
    FUNC_8("open");
    FUNC_2(1);
  }
  VAR_11->input = FUNC_3(VAR_13, "r");

  FUNC_4(VAR_3, "Now, pipe some URL's into > %s\n", VAR_9);
  FUNC_1(&VAR_11->fifo_event, VAR_11->evbase, VAR_13, VAR_2|VAR_1,
               VAR_10, VAR_11);
  FUNC_0(&VAR_11->fifo_event, ((void*)0));
  return (0);
}
