
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int int64_t ;
typedef int ConnectionInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (int *,int *,int ,char const*,int *,int const,int ,char const*,char const*) ;

int FUNC_3(ConnectionInfo *VAR_4, ConnectionInfo *VAR_5, const char *VAR_6, const int64_t VAR_7, const char *VAR_8, const char *VAR_9)



{
 struct stat VAR_10;

 if (VAR_9 == ((void*)0) || *VAR_9 == '\0' || VAR_8 == ((void*)0) || *VAR_8 == '\0')

 {
  return VAR_0;
 }

 if (FUNC_1(VAR_6, &VAR_10) != 0)
 {
  return VAR_3 != 0 ? VAR_3 : VAR_1;
 }

 if (!FUNC_0(VAR_10.st_mode))
 {
  return VAR_0;
 }
 return FUNC_2(VAR_4, VAR_5, VAR_2, VAR_6, ((void*)0), VAR_7, VAR_10.st_size, VAR_8, VAR_9);



}
