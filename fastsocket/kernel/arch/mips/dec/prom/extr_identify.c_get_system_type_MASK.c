
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int,char*,char*) ;

const char *FUNC_1(void)
{

 static char VAR_3[64];
 static int VAR_4 = 0;

 if (VAR_4 == 0) {
  VAR_4 = 1;
  FUNC_0(VAR_3, 64, "Digital %s",
    VAR_1[VAR_2]);
 }

 return VAR_3;
}
