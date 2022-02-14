
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t*,char*,char*,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;

int FUNC_3(int VAR_1, char **VAR_2)
{
  char *VAR_3;
  size_t VAR_4;

  if(VAR_1< 3) {
    FUNC_2("./testpart main sub\n");
  }
  else {
    int VAR_5 = FUNC_1(&VAR_3, &VAR_4, VAR_2[1], VAR_2[2], VAR_0);
    size_t VAR_6;
    if(VAR_5)
      return VAR_5;
    for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
      FUNC_2("%c", VAR_3[VAR_6]);
    FUNC_0(VAR_3);
  }
  return 0;
}
