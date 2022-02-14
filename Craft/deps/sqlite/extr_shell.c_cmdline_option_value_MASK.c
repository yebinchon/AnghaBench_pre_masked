
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_2(int VAR_1, char **VAR_2, int VAR_3){
  if( VAR_3==VAR_1 ){
    FUNC_1(VAR_0, "%s: Error: missing argument to %s\n",
            VAR_2[0], VAR_2[VAR_1-1]);
    FUNC_0(1);
  }
  return VAR_2[VAR_3];
}
