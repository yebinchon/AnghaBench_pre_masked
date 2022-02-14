
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int file_id ;
struct TYPE_2__ {int log_level; } ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (int *,int *,int ,char*,scalar_t__,scalar_t__,char**,int *,scalar_t__*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (char*,int *,int) ;
 int FUNC_10 (int *,int) ;
 int * FUNC_11 () ;

int FUNC_12(int VAR_5, char *VAR_6[])
{
 char *VAR_7;
 char *VAR_8;
 ConnectionInfo *VAR_9;
 int VAR_10;
 char VAR_11[128];
 int64_t VAR_12;
 int64_t VAR_13;
 int64_t VAR_14;

 if (VAR_5 < 3)
 {
  FUNC_5("Usage: %s <config_file> <file_id> " "[local_filename] [<download_offset> " "<download_bytes>]\n", VAR_6[0]);


  return 1;
 }

 FUNC_4();
 VAR_4.log_level = VAR_2;
 FUNC_3();

 VAR_7 = VAR_6[1];
 if ((VAR_10=FUNC_2(VAR_7)) != 0)
 {
  return VAR_10;
 }

 VAR_9 = FUNC_11();
 if (VAR_9 == ((void*)0))
 {
  FUNC_1();
  return VAR_3 != 0 ? VAR_3 : VAR_0;
 }

 FUNC_6(VAR_11, sizeof(VAR_11), "%s", VAR_6[2]);

 VAR_13 = 0;
 VAR_14 = 0;
 if (VAR_5 >= 4)
 {
  VAR_8 = VAR_6[3];
  if (VAR_5 >= 6)
  {
   VAR_13 = FUNC_9(VAR_6[4], ((void*)0), 10);
   VAR_14 = FUNC_9(VAR_6[5], ((void*)0), 10);
  }
 }
 else
 {
  VAR_8 = FUNC_8(VAR_11, '/');
  if (VAR_8 != ((void*)0))
  {
   VAR_8++;
  }
  else
  {
   VAR_8 = VAR_11;
  }
 }

 VAR_10 = FUNC_7(VAR_9, ((void*)0), VAR_1, VAR_11, VAR_13, VAR_14, &VAR_8, ((void*)0), &VAR_12);



 if (VAR_10 != 0)
 {
  FUNC_5("download file fail, " "error no: %d, error info: %s\n", VAR_10, FUNC_0(VAR_10));


 }

 FUNC_10(VAR_9, 1);
 FUNC_1();

 return 0;
}
