
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int file_id ;
struct TYPE_2__ {int log_level; } ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 () ;

int FUNC_10(int VAR_4, char *VAR_5[])
{
 char *VAR_6;
 ConnectionInfo *VAR_7;
 int VAR_8;
 char VAR_9[128];

 if (VAR_4 < 3)
 {
  FUNC_5("Usage: %s <config_file> <file_id>\n", VAR_5[0]);
  return 1;
 }

 FUNC_4();
 VAR_3.log_level = VAR_1;
 FUNC_3();

 VAR_6 = VAR_5[1];
 if ((VAR_8=FUNC_2(VAR_6)) != 0)
 {
  return VAR_8;
 }

 VAR_7 = FUNC_9();
 if (VAR_7 == ((void*)0))
 {
  FUNC_1();
  return VAR_2 != 0 ? VAR_2 : VAR_0;
 }

 FUNC_6(VAR_9, sizeof(VAR_9), "%s", VAR_5[2]);
 if ((VAR_8=FUNC_7(VAR_7, ((void*)0), VAR_9)) != 0)
 {
  FUNC_5("delete file fail, " "error no: %d, error info: %s\n", VAR_8, FUNC_0(VAR_8));


 }

 FUNC_8(VAR_7, 1);
 FUNC_1();

 return VAR_8;
}
