
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {char* readptr; scalar_t__ sizeleft; } ;



__attribute__((used)) static size_t FUNC_0(char *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
  struct WriteThis *VAR_4 = (struct WriteThis *)VAR_3;
  int VAR_5 = !*VAR_4->readptr;

  if(VAR_1*VAR_2 < 1)
    return 0;

  VAR_5 = VAR_4->sizeleft <= 0;
  if(!VAR_5)
    VAR_4->sizeleft--;

  if(!VAR_5) {
    *VAR_0 = *VAR_4->readptr;
    VAR_4->readptr++;
    return 1;
  }

  return 0;
}
