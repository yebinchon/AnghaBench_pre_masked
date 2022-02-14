
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int new_group_name ;
typedef int int64_t ;
typedef scalar_t__ UploadCallback ;
typedef int FDFSMetaData ;
typedef int ConnectionInfo ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 int FUNC_1 (char*,char*,char*,char*,char*) ;
 int FUNC_2 (int *,int *,int const,char const,int ,char*,void*,int const,int *,int *,char const*,int const*,int const,char*,char*) ;

int FUNC_3(ConnectionInfo *VAR_3, ConnectionInfo *VAR_4, const int VAR_5, const char VAR_6, UploadCallback VAR_7, void *VAR_8, const int64_t VAR_9, const char *VAR_10, const FDFSMetaData *VAR_11, const int VAR_12, const char *VAR_13, char *VAR_14)





{
 char VAR_15[VAR_1 + 1];
 char VAR_16[128];
 int VAR_17;

 if (VAR_13 == ((void*)0))
 {
  *VAR_15 = '\0';
 }
 else
 {
  FUNC_0(VAR_15, sizeof(VAR_15), "%s", VAR_13);

 }

 VAR_17 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_2, (char *)VAR_7, VAR_8, VAR_9, ((void*)0), ((void*)0), VAR_10, VAR_11, VAR_12, VAR_15, VAR_16);





 if (VAR_17 == 0)
 {
  FUNC_1(VAR_14, "%s%c%s", VAR_15, VAR_0, VAR_16);

 }
 else
 {
  VAR_14[0] = '\0';
 }

 return VAR_17;
}
