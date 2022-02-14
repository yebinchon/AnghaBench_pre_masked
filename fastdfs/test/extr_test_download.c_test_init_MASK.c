
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_2 ;
 int * FUNC_3 (char*,char*) ;
 int * VAR_3 ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int VAR_4 ;
 int FUNC_6 (char*,char*,char*,int) ;

__attribute__((used)) static int FUNC_7()
{
 char VAR_5[64];

 if (FUNC_1("download", 0) != 0 && FUNC_4("download", 0755) != 0)
 {
 }

 if (FUNC_2("download") != 0)
 {
  FUNC_5("chdir fail, errno: %d, error info: %s\n", VAR_2, FUNC_0(VAR_2));
  return VAR_2 != 0 ? VAR_2 : VAR_0;
 }

 FUNC_6(VAR_5, "%s.%d", VAR_1, VAR_4);
 if ((VAR_3=FUNC_3(VAR_5, "wb")) == ((void*)0))
 {
  FUNC_5("open file %s fail, errno: %d, error info: %s\n",
   VAR_5, VAR_2, FUNC_0(VAR_2));
  return VAR_2 != 0 ? VAR_2 : VAR_0;
 }

 return 0;
}
