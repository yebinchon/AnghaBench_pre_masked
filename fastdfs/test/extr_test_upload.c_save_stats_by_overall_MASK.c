
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,char*,int,char*) ;
 int VAR_3 ;
 int FUNC_5 (char*,char*,char*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7()
{
 char VAR_7[64];
 FILE *VAR_8;

 FUNC_5(VAR_7, "%s.%d", VAR_1, VAR_3);
 if ((VAR_8=FUNC_2(VAR_7, "wb")) == ((void*)0))
 {
  FUNC_4("open file %s fail, errno: %d, error info: %s\n",
   VAR_7, VAR_2, FUNC_0(VAR_2));
  return VAR_2 != 0 ? VAR_2 : VAR_0;
 }

 FUNC_3(VAR_8, "#total_count success_count  time_used(s)\n");
 FUNC_3(VAR_8, "%d %d %d\n", VAR_6, VAR_5, (int)(FUNC_6(((void*)0)) - VAR_4));

 FUNC_1(VAR_8);
 return 0;
}
