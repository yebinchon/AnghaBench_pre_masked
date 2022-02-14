
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char** VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_2){
  int VAR_3, VAR_4;
  if( FUNC_1(VAR_2, "SQLITE_", 7)==0 ) VAR_2 += 7;
  VAR_4 = FUNC_2(VAR_2);



  for(VAR_3=0; VAR_3<FUNC_0(VAR_0); VAR_3++){
    if( FUNC_1(VAR_2, VAR_0[VAR_3], VAR_4)==0
     && VAR_1[(unsigned char)VAR_0[VAR_3][VAR_4]]==0
    ){
      return 1;
    }
  }
  return 0;
}
