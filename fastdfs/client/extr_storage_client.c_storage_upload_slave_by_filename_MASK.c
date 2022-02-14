
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int FDFSMetaData ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (int *,int *,int ,int ,int ,char const*,int *,int ,char const*,char const*,char const*,int const*,int const,char*,char*) ;

int FUNC_4(ConnectionInfo *VAR_5, ConnectionInfo *VAR_6, const char *VAR_7, const char *VAR_8, const char *VAR_9, const char *VAR_10, const FDFSMetaData *VAR_11, const int VAR_12, char *VAR_13, char *VAR_14)





{
 struct stat VAR_15;

 if (VAR_8 == ((void*)0) || *VAR_8 == '\0' || VAR_9 == ((void*)0) || VAR_13 == ((void*)0) || *VAR_13 == '\0')

 {
  return VAR_0;
 }

 if (FUNC_2(VAR_7, &VAR_15) != 0)
 {
  *VAR_13 = '\0';
  *VAR_14 = '\0';
  return VAR_4 != 0 ? VAR_4 : VAR_1;
 }

 if (!FUNC_0(VAR_15.st_mode))
 {
  *VAR_13 = '\0';
  *VAR_14 = '\0';
  return VAR_0;
 }

 if (VAR_10 == ((void*)0))
 {
  VAR_10 = FUNC_1(VAR_7);
 }

 return FUNC_3(VAR_5, VAR_6, 0, VAR_3, VAR_2, VAR_7, ((void*)0), VAR_15.st_size, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);





}
