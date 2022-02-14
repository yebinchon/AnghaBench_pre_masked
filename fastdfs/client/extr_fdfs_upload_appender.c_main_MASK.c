
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log_level; } ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int,char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int VAR_5 ;
 int FUNC_7 (int *,int *,int,char*,int *,int *,int ,char*,char*) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int *,char*,int*) ;

int FUNC_11(int VAR_6, char *VAR_7[])
{
 char *VAR_8;
 char *VAR_9;
 char VAR_10[VAR_1 + 1];
 ConnectionInfo *VAR_11;
 int VAR_12;
 int VAR_13;
 ConnectionInfo VAR_14;
 char VAR_15[128];

 if (VAR_6 < 3)
 {
  FUNC_6("Usage: %s <config_file> <local_filename>\n", VAR_7[0]);
  return 1;
 }

 FUNC_5();
 VAR_4.log_level = VAR_2;
 FUNC_4();

 VAR_8 = VAR_7[1];
 if ((VAR_12=FUNC_2(VAR_8)) != 0)
 {
  return VAR_12;
 }

 VAR_11 = FUNC_9();
 if (VAR_11 == ((void*)0))
 {
  FUNC_1();
  return VAR_3 != 0 ? VAR_3 : VAR_0;
 }


 *VAR_10 = '\0';
 VAR_13 = 0;
 if ((VAR_12=FUNC_10(VAR_11, &VAR_14, VAR_10, &VAR_13)) != 0)

 {
  FUNC_1();
  FUNC_3(VAR_5, "tracker_query_storage fail, " "error no: %d, error info: %s\n", VAR_12, FUNC_0(VAR_12));


  return VAR_12;
 }

 VAR_9 = VAR_7[2];
 VAR_12 = FUNC_7(VAR_11, &VAR_14, VAR_13, VAR_9, ((void*)0), ((void*)0), 0, VAR_10, VAR_15);



 if (VAR_12 != 0)
 {
  FUNC_3(VAR_5, "upload file fail, " "error no: %d, error info: %s\n", VAR_12, FUNC_0(VAR_12));



  FUNC_8(VAR_11, 1);
  FUNC_1();
  return VAR_12;
 }

 FUNC_6("%s\n", VAR_15);

 FUNC_8(VAR_11, 1);
 FUNC_1();

 return 0;
}
