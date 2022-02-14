
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int search ;
typedef int newsubdirs ;
typedef int filename ;
typedef int DIR ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,int,char*,char const*,...) ;
 char* FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*) ;
 int VAR_3 ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,struct stat*) ;
 scalar_t__ FUNC_8 (char*) ;

void FUNC_9( const char *VAR_4, char *VAR_5, char *VAR_6, char **VAR_7, int *VAR_8 ) {
 char VAR_9[VAR_1], VAR_10[VAR_1];
 char VAR_11[VAR_1];
 DIR *VAR_12;
 struct dirent *VAR_13;
 struct stat VAR_14;

 if ( *VAR_8 >= VAR_0 - 1 ) {
  return;
 }

 if (FUNC_8(VAR_5)) {
  FUNC_1( VAR_9, sizeof(VAR_9), "%s/%s", VAR_4, VAR_5 );
 }
 else {
  FUNC_1( VAR_9, sizeof(VAR_9), "%s", VAR_4 );
 }

 if ((VAR_12 = FUNC_5(VAR_9)) == ((void*)0)) {
  return;
 }

 while ((VAR_13 = FUNC_6(VAR_12)) != ((void*)0)) {
  FUNC_1(VAR_11, sizeof(VAR_11), "%s/%s", VAR_9, VAR_13->d_name);
  if (FUNC_7(VAR_11, &VAR_14) == -1)
   continue;

  if (VAR_14.st_mode & VAR_2) {
   if (FUNC_3(VAR_13->d_name, ".") && FUNC_3(VAR_13->d_name, "..")) {
    if (FUNC_8(VAR_5)) {
     FUNC_1( VAR_10, sizeof(VAR_10), "%s/%s", VAR_5, VAR_13->d_name);
    }
    else {
     FUNC_1( VAR_10, sizeof(VAR_10), "%s", VAR_13->d_name);
    }
    FUNC_9( VAR_4, VAR_10, VAR_6, VAR_7, VAR_8 );
   }
  }
  if ( *VAR_8 >= VAR_0 - 1 ) {
   break;
  }
  FUNC_1( VAR_11, sizeof(VAR_11), "%s/%s", VAR_5, VAR_13->d_name );
  if (!FUNC_0( VAR_6, VAR_11, VAR_3 ))
   continue;
  VAR_7[ *VAR_8 ] = FUNC_2( VAR_11 );
  (*VAR_8)++;
 }

 FUNC_4(VAR_12);
}
