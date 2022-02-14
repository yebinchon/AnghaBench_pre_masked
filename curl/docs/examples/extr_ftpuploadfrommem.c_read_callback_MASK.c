
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {size_t sizeleft; size_t readptr; } ;


 int FUNC_0 (void*,size_t,size_t) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
  struct WriteThis *VAR_4 = (struct WriteThis *)VAR_3;
  size_t VAR_5 = VAR_1*VAR_2;

  if(VAR_5 < 1)
    return 0;

  if(VAR_4->sizeleft) {
    size_t VAR_6 = VAR_5;
    if(VAR_6 > VAR_4->sizeleft)
      VAR_6 = VAR_4->sizeleft;
    FUNC_0(VAR_0, VAR_4->readptr, VAR_6);
    VAR_4->readptr += VAR_6;
    VAR_4->sizeleft -= VAR_6;
    return VAR_6;
  }

  return 0;
}
