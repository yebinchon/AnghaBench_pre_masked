
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(char *VAR_1){
  int VAR_2;
  for(VAR_2=0; VAR_1[VAR_2]>='0' && VAR_1[VAR_2]<='9'; VAR_2++){}
  if( VAR_2>0 && VAR_1[VAR_2]==0 ) return FUNC_0(VAR_1);
  if( FUNC_2(VAR_1, "on")==0 || FUNC_2(VAR_1,"yes")==0 ){
    return 1;
  }
  if( FUNC_2(VAR_1, "off")==0 || FUNC_2(VAR_1,"no")==0 ){
    return 0;
  }
  FUNC_1(VAR_0, "ERROR: Not a boolean value: \"%s\". Assuming \"no\".\n",
          VAR_1);
  return 0;
}
