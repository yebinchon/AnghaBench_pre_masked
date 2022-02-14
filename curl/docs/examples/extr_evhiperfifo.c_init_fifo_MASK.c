
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int curl_socket_t ;
struct TYPE_3__ {int fifo_event; int loop; int input; } ;
typedef TYPE_1__ GlobalInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (char const*,int,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(GlobalInfo *VAR_9)
{
  struct stat VAR_10;
  static const char *VAR_11 = "hiper.fifo";
  curl_socket_t VAR_12;

  FUNC_4(VAR_2, "Creating named pipe \"%s\"\n", VAR_11);
  if(FUNC_5 (VAR_11, &VAR_10) == 0) {
    if((VAR_10.st_mode & VAR_5) == VAR_6) {
      VAR_7 = VAR_0;
      FUNC_8("lstat");
      FUNC_2(1);
    }
  }
  FUNC_9(VAR_11);
  if(FUNC_6 (VAR_11, 0600) == -1) {
    FUNC_8("mkfifo");
    FUNC_2(1);
  }
  VAR_12 = FUNC_7(VAR_11, VAR_4 | VAR_3, 0);
  if(VAR_12 == -1) {
    FUNC_8("open");
    FUNC_2(1);
  }
  VAR_9->input = FUNC_3(VAR_12, "r");

  FUNC_4(VAR_2, "Now, pipe some URL's into > %s\n", VAR_11);
  FUNC_0(&VAR_9->fifo_event, VAR_8, VAR_12, VAR_1);
  FUNC_1(VAR_9->loop, &VAR_9->fifo_event);
  return (0);
}
