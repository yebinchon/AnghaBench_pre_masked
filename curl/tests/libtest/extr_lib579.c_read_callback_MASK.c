
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {size_t counter; } ;


 int FUNC_0 (void*,char const*,size_t) ;
 char** VAR_0 ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_1, size_t VAR_2, size_t VAR_3, void *VAR_4)
{
  struct WriteThis *VAR_5 = (struct WriteThis *)VAR_4;
  const char *VAR_6;

  if(VAR_2*VAR_3 < 1)
    return 0;

  VAR_6 = VAR_0[VAR_5->counter];

  if(VAR_6) {
    size_t VAR_7 = FUNC_1(VAR_6);
    FUNC_0(VAR_1, VAR_6, VAR_7);
    VAR_5->counter++;
    return VAR_7;
  }
  return 0;
}
