
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; int tm_mon; int tm_mday; int tm_year; int tm_min; } ;
struct stat {int st_mode; int st_mtime; scalar_t__ st_size; } ;
struct dirent {char* d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 char* VAR_6 ;
 struct tm* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int,int,int,int,int,char) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int FUNC_9(char *VAR_7, char *VAR_8, int *VAR_9,
                          int *VAR_10, int *VAR_11, char *VAR_12)
{
 struct dirent *VAR_13;
 char VAR_14[VAR_1];



 for (;;) {
  VAR_13 = FUNC_5(VAR_5);
  if (VAR_13 == ((void*)0)) {
   FUNC_2(VAR_5);
   VAR_5 = ((void*)0);
   return VAR_0;
  }
  if (VAR_13->d_name[0] == '.') {

   if (VAR_6[0] != '.')
    continue;

   if (VAR_13->d_name[1] == '\0')
    continue;

   if (VAR_13->d_name[1] == '.' && VAR_13->d_name[2] == '\0')
    continue;
  }
  if (FUNC_4(VAR_6, VAR_13->d_name))
   break;
 }
 if (VAR_8 != ((void*)0))
  FUNC_8(VAR_8, VAR_13->d_name);
 FUNC_1(VAR_14, VAR_4, VAR_13->d_name);
 if (VAR_7 != ((void*)0))
  FUNC_8(VAR_7, VAR_14);
 {
  if (VAR_9 != ((void*)0))
   *VAR_9 = VAR_0;
  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_0;
  if (VAR_11 != ((void*)0))
   *VAR_11 = 0;
  if (VAR_12 != ((void*)0))
   FUNC_8(VAR_12, " 1-01-01 12:00p");
 }
 return VAR_3;
}
