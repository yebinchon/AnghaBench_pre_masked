
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int appender_file_id ;
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
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (int *,int *,char*,char*) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 () ;

int FUNC_9(int VAR_4, char *VAR_5[])
{
 char *VAR_6;
 char *VAR_7;
 ConnectionInfo *VAR_8;
 int VAR_9;
 char VAR_10[128];

 if (VAR_4 < 4)
 {
  FUNC_4("Usage: %s <config_file> <appender_file_id> " "<local_filename>\n", VAR_5[0]);

  return 1;
 }

 FUNC_3();
 VAR_3.log_level = VAR_1;

 VAR_6 = VAR_5[1];
 if ((VAR_9=FUNC_2(VAR_6)) != 0)
 {
  return VAR_9;
 }

 VAR_8 = FUNC_8();
 if (VAR_8 == ((void*)0))
 {
  FUNC_1();
  return VAR_2 != 0 ? VAR_2 : VAR_0;
 }

 FUNC_5(VAR_10, sizeof(VAR_10), "%s", VAR_5[2]);
 VAR_7 = VAR_5[3];
 if ((VAR_9=FUNC_6(VAR_8, ((void*)0), VAR_7, VAR_10)) != 0)

 {
  FUNC_4("append file fail, " "error no: %d, error info: %s\n", VAR_9, FUNC_0(VAR_9));


  return VAR_9;
 }

 FUNC_7(VAR_8, 1);
 FUNC_1();

 return VAR_9;
}
