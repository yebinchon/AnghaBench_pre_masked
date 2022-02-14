
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

const char *FUNC_3(int VAR_9)
{
 static char VAR_10[256];

 FUNC_0(VAR_10, 256);

 if (VAR_9 & VAR_5)
  FUNC_1(VAR_10, "const/");
 if (VAR_9 & VAR_2)
  FUNC_1(VAR_10, "check/");
 if (VAR_9 & VAR_3)
  FUNC_1(VAR_10, "choice/");
 if (VAR_9 & VAR_4)
  FUNC_1(VAR_10, "choiceval/");
 if (VAR_9 & VAR_7)
  FUNC_1(VAR_10, "valid/");
 if (VAR_9 & VAR_6)
  FUNC_1(VAR_10, "optional/");
 if (VAR_9 & VAR_8)
  FUNC_1(VAR_10, "write/");
 if (VAR_9 & VAR_1)
  FUNC_1(VAR_10, "changed/");
 if (VAR_9 & VAR_0)
  FUNC_1(VAR_10, "auto/");

 VAR_10[FUNC_2(VAR_10) - 1] = '\0';

 return VAR_10;
}
