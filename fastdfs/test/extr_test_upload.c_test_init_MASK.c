
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_3 ;
 void* FUNC_3 (char*,char*) ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int VAR_6 ;
 int FUNC_6 (char*,char*,char*,int) ;

__attribute__((used)) static int FUNC_7()
{
 char VAR_7[64];

 if (FUNC_1("upload", 0) != 0 && FUNC_4("upload", 0755) != 0)
 {
 }

 if (FUNC_2("upload") != 0)
 {
  FUNC_5("chdir fail, errno: %d, error info: %s\n", VAR_3, FUNC_0(VAR_3));
  return VAR_3 != 0 ? VAR_3 : VAR_0;
 }

 FUNC_6(VAR_7, "%s.%d", VAR_2, VAR_6);
 if ((VAR_5=FUNC_3(VAR_7, "wb")) == ((void*)0))
 {
  FUNC_5("open file %s fail, errno: %d, error info: %s\n",
   VAR_7, VAR_3, FUNC_0(VAR_3));
  return VAR_3 != 0 ? VAR_3 : VAR_0;
 }

 FUNC_6(VAR_7, "%s.%d", VAR_1, VAR_6);
 if ((VAR_4=FUNC_3(VAR_7, "wb")) == ((void*)0))
 {
  FUNC_5("open file %s fail, errno: %d, error info: %s\n",
   VAR_7, VAR_3, FUNC_0(VAR_3));
  return VAR_3 != 0 ? VAR_3 : VAR_0;
 }

 return 0;
}
