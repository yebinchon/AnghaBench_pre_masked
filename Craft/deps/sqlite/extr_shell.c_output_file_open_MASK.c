
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static FILE *FUNC_3(const char *VAR_2){
  FILE *VAR_3;
  if( FUNC_2(VAR_2,"stdout")==0 ){
    VAR_3 = VAR_1;
  }else if( FUNC_2(VAR_2, "stderr")==0 ){
    VAR_3 = VAR_0;
  }else if( FUNC_2(VAR_2, "off")==0 ){
    VAR_3 = 0;
  }else{
    VAR_3 = FUNC_0(VAR_2, "wb");
    if( VAR_3==0 ){
      FUNC_1(VAR_0, "Error: cannot open \"%s\"\n", VAR_2);
    }
  }
  return VAR_3;
}
