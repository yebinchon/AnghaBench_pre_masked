
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WriteThis {size_t counter; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*,char const*,size_t) ;
 char** VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_2, size_t VAR_3, size_t VAR_4, void *VAR_5)
{
  struct WriteThis *VAR_6 = (struct WriteThis *)VAR_5;
  const char *VAR_7;

  if(VAR_3*VAR_4 < 1)
    return 0;

  VAR_7 = VAR_0[VAR_6->counter];

  if(VAR_7) {
    size_t VAR_8 = FUNC_2(VAR_7);
    if(VAR_3*VAR_4 < VAR_8) {
      FUNC_0(VAR_1, "read buffer is too small to run test\n");
      return 0;
    }
    FUNC_1(VAR_2, VAR_7, VAR_8);
    VAR_6->counter++;
    return VAR_8;
  }
  return 0;
}
