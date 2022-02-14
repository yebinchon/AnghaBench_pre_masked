
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*,int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*) ;

int FUNC_7(void)
{
  struct stat VAR_6;
  const char *VAR_7 = "hiper.fifo";
  int VAR_8;

  if(FUNC_2 (VAR_7, &VAR_6) == 0) {
    if((VAR_6.st_mode & VAR_3) == VAR_4) {
      VAR_5 = VAR_0;
      FUNC_5("lstat");
      FUNC_1(1);
    }
  }

  FUNC_6(VAR_7);
  if(FUNC_3 (VAR_7, 0600) == -1) {
    FUNC_5("mkfifo");
    FUNC_1(1);
  }

  VAR_8 = FUNC_4(VAR_7, VAR_2 | VAR_1, 0);

  if(VAR_8 == -1) {
    FUNC_5("open");
    FUNC_1(1);
  }
  FUNC_0("Now, pipe some URL's into > %s\n", VAR_7);

  return VAR_8;
}
