
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {int dummy; } ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 () ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (struct callback_data*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 char* FUNC_7 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_8(
  struct callback_data *VAR_3,
  const char *VAR_4
){
  char *VAR_5 = ((void*)0);
  const char *VAR_6 = VAR_4;
  char *VAR_7 = 0;
  FILE *VAR_8 = ((void*)0);
  int VAR_9 = 0;

  if (VAR_6 == ((void*)0)) {
    VAR_5 = FUNC_1();
    if( VAR_5==0 ){

      FUNC_3(VAR_1,"%s: Error: cannot locate your home directory\n", VAR_0);

      return 1;
    }
    FUNC_6();
    VAR_7 = FUNC_7("%s/.sqliterc",VAR_5);
    VAR_6 = VAR_7;
  }
  VAR_8 = FUNC_2(VAR_6,"rb");
  if( VAR_8 ){
    if( VAR_2 ){
      FUNC_3(VAR_1,"-- Loading resources from %s\n",VAR_6);
    }
    VAR_9 = FUNC_4(VAR_3,VAR_8);
    FUNC_0(VAR_8);
  }
  FUNC_5(VAR_7);
  return VAR_9;
}
