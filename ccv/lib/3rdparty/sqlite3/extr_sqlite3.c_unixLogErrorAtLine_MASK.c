
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aErr ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int,char*,int,int,char const*,char const*,char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int,char*,int) ;

__attribute__((used)) static int FUNC_4(
  int VAR_1,
  const char *VAR_2,
  const char *VAR_3,
  int VAR_4
){
  char *VAR_5;
  int VAR_6 = VAR_0;
  VAR_5 = FUNC_2(VAR_6);


  if( VAR_3==0 ) VAR_3 = "";
  FUNC_1(VAR_1,
      "os_unix.c:%d: (%d) %s(%s) - %s",
      VAR_4, VAR_6, VAR_2, VAR_3, VAR_5
  );

  return VAR_1;
}
