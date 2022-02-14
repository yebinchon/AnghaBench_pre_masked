
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (void*,void const*,size_t) ;
 char* FUNC_2 (char const*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0)
{
  size_t VAR_1;
  char *VAR_2 = FUNC_2(VAR_0);
  if(!VAR_2)
    return ((void*)0);


  VAR_1 = FUNC_3(VAR_2);
  if(VAR_2[0] == '\"') {
    FUNC_1((void *)VAR_2, (const void *)(VAR_2 + 1), VAR_1);
    VAR_1--;
  }
  if(VAR_1 && (VAR_2[VAR_1 - 1] == '\"')) {
    VAR_2[VAR_1 - 1] = 0x0;
    VAR_1--;
  }


  if(VAR_2[0] != '/') {

    FUNC_0(VAR_2);
    VAR_2 = FUNC_2("/");
    return VAR_2;
  }


  if(VAR_1 && VAR_2[VAR_1 - 1] == '/') {
    VAR_2[VAR_1 - 1] = 0x0;
  }

  return VAR_2;
}
