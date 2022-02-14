
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {char* readptr; scalar_t__ sizeleft; } ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(char *VAR_1, size_t VAR_2, size_t VAR_3, void *VAR_4)
{
  struct WriteThis *VAR_5 = (struct WriteThis *)VAR_4;
  int VAR_6 = !*VAR_5->readptr;

  if(VAR_2*VAR_3 < 1)
    return 0;


  VAR_6 = VAR_5->sizeleft <= 0;
  if(!VAR_6)
    VAR_5->sizeleft--;


  if(!VAR_6) {
    *VAR_1 = *VAR_5->readptr;
    VAR_5->readptr++;
    return 1;
  }

  return 0;

}
