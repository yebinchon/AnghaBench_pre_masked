
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int localkey_t ;


 char* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,int,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(localkey_t VAR_1, const char * VAR_2)

{
  int VAR_3;
  char * VAR_4;

  if(!VAR_2)
    return (char *) ((void*)0);

  VAR_3 = FUNC_2(VAR_2) + 1;
  VAR_4 = FUNC_0(VAR_1, VAR_0 * VAR_3 + 1);

  if(VAR_4) {
    VAR_3 = FUNC_1(VAR_4, VAR_2, VAR_0 * VAR_3, VAR_3);
    VAR_4[VAR_3] = '\0';
  }

  return VAR_4;
}
