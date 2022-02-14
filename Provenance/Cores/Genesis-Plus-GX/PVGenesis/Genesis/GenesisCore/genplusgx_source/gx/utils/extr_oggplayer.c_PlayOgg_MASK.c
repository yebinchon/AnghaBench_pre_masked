
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int mode; int volume; int seek_time; int vf; scalar_t__ flag; scalar_t__ eof; } ;


 int FUNC_0 (int *,void*,TYPE_1__*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (void*,int *,int *,int ,int ) ;
 TYPE_1__ VAR_6 ;

int FUNC_6(char * VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
  FUNC_1();

  VAR_6.fd = FUNC_3(VAR_7, VAR_8);

  if (VAR_6.fd < 0)
  {
    VAR_6.fd = -1;
    return -1;
  }

  VAR_6.mode = VAR_10;
  VAR_6.eof = 0;
  VAR_6.volume = 127;
  VAR_6.flag = 0;
  VAR_6.seek_time = -1;

  if (VAR_9 > 0)
    VAR_6.seek_time = VAR_9;

  if (FUNC_5((void *) &VAR_6.fd, &VAR_6.vf, ((void*)0), 0, VAR_1) < 0)
  {
    FUNC_2(VAR_6.fd);
    VAR_6.fd = -1;
    VAR_4 = 0;
    return -1;
  }

  if (FUNC_0(&VAR_2, (void *) VAR_3,
      &VAR_6, VAR_5, VAR_0, 80) == -1)
  {
    VAR_4 = 0;
    FUNC_4(&VAR_6.vf);
    VAR_6.fd = -1;
    return -1;
  }
  return 0;
}
