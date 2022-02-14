
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
 int FUNC_3 (int ,char*,char*,...) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int VAR_4 ;
 int FUNC_7 (int *,int *,char*,char*) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 () ;

int FUNC_10(int VAR_5, char *VAR_6[])
{
 char *VAR_7;
 ConnectionInfo *VAR_8;
 int VAR_9;
 char VAR_10[128];
 char VAR_11[128];

 if (VAR_5 < 3)
 {
  FUNC_3(VAR_4, "regenerate filename for the appender file.\n"
                "NOTE: the regenerated file will be a normal file!\n"
                "Usage: %s <config_file> <appender_file_id>\n",
                VAR_6[0]);
  return 1;
 }

 FUNC_4();
 VAR_3.log_level = VAR_1;

 VAR_7 = VAR_6[1];
 if ((VAR_9=FUNC_2(VAR_7)) != 0)
 {
  return VAR_9;
 }

 VAR_8 = FUNC_9();
 if (VAR_8 == ((void*)0))
 {
  FUNC_1();
  return VAR_2 != 0 ? VAR_2 : VAR_0;
 }

 FUNC_6(VAR_10, sizeof(VAR_10), "%s", VAR_6[2]);
 if ((VAR_9=FUNC_7(VAR_8,
  ((void*)0), VAR_10, VAR_11)) != 0)
 {
  FUNC_3(VAR_4, "regenerate file %s fail, "
   "error no: %d, error info: %s\n",
   VAR_10, VAR_9, FUNC_0(VAR_9));
  return VAR_9;
 }

    FUNC_5("%s\n", VAR_11);

 FUNC_8(VAR_8, 1);
 FUNC_1();

 return VAR_9;
}
