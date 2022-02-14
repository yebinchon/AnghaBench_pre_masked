
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0, const char *VAR_1){
  unsigned int VAR_2;
  FUNC_1('"', VAR_0);
  while( (VAR_2 = *(VAR_1++))!=0 ){
    if( VAR_2=='\\' ){
      FUNC_1(VAR_2, VAR_0);
      FUNC_1(VAR_2, VAR_0);
    }else if( VAR_2=='"' ){
      FUNC_1('\\', VAR_0);
      FUNC_1('"', VAR_0);
    }else if( VAR_2=='\t' ){
      FUNC_1('\\', VAR_0);
      FUNC_1('t', VAR_0);
    }else if( VAR_2=='\n' ){
      FUNC_1('\\', VAR_0);
      FUNC_1('n', VAR_0);
    }else if( VAR_2=='\r' ){
      FUNC_1('\\', VAR_0);
      FUNC_1('r', VAR_0);
    }else if( !FUNC_2(VAR_2) ){
      FUNC_0(VAR_0, "\\%03o", VAR_2&0xff);
    }else{
      FUNC_1(VAR_2, VAR_0);
    }
  }
  FUNC_1('"', VAR_0);
}
