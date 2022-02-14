
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {char* readptr; scalar_t__ sizeleft; } ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(void *VAR_1, size_t VAR_2, size_t VAR_3, void *VAR_4)
{
  struct WriteThis *VAR_5 = (struct WriteThis *)VAR_4;

  if(VAR_2*VAR_3 < 1)
    return 0;

  if(VAR_5->sizeleft) {
    *(char *)VAR_1 = VAR_5->readptr[0];
    VAR_5->readptr++;
    VAR_5->sizeleft--;
    return 1;
  }

  return 0;

}
