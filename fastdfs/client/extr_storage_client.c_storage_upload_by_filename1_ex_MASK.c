
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int new_group_name ;
typedef int FDFSMetaData ;
typedef int ConnectionInfo ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 int FUNC_1 (char*,char*,char*,char*,char*) ;
 int FUNC_2 (int *,int *,int const,char const,char const*,char const*,int const*,int const,char*,char*) ;

int FUNC_3(ConnectionInfo *VAR_2, ConnectionInfo *VAR_3, const int VAR_4, const char VAR_5, const char *VAR_6, const char *VAR_7, const FDFSMetaData *VAR_8, const int VAR_9, const char *VAR_10, char *VAR_11)




{
 char VAR_12[VAR_1 + 1];
 char VAR_13[128];
 int VAR_14;

 if (VAR_10 == ((void*)0))
 {
  *VAR_12 = '\0';
 }
 else
 {
  FUNC_0(VAR_12, sizeof(VAR_12), "%s", VAR_10);

 }

 VAR_14 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12, VAR_13);




 if (VAR_14 == 0)
 {
  FUNC_1(VAR_11, "%s%c%s", VAR_12, VAR_0, VAR_13);

 }
 else
 {
  VAR_11[0] = '\0';
 }

 return VAR_14;
}
