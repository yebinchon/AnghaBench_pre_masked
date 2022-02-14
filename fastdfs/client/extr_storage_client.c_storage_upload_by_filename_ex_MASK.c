
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int FDFSMetaData ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (int *,int *,int const,char const,int ,char const*,int *,int ,int *,int *,char const*,int const*,int const,char*,char*) ;

int FUNC_4(ConnectionInfo *VAR_3, ConnectionInfo *VAR_4, const int VAR_5, const char VAR_6, const char *VAR_7, const char *VAR_8, const FDFSMetaData *VAR_9, const int VAR_10, char *VAR_11, char *VAR_12)




{
 struct stat VAR_13;

 if (FUNC_2(VAR_7, &VAR_13) != 0)
 {
  VAR_11[0] = '\0';
  VAR_12[0] = '\0';
  return VAR_2;
 }

 if (!FUNC_0(VAR_13.st_mode))
 {
  VAR_11[0] = '\0';
  VAR_12[0] = '\0';
  return VAR_0;
 }

 if (VAR_8 == ((void*)0))
 {
  VAR_8 = FUNC_1(VAR_7);
 }

 return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_1, VAR_7, ((void*)0), VAR_13.st_size, ((void*)0), ((void*)0), VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);




}
