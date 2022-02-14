
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*) ;

int FUNC_3(const char *VAR_1, char **VAR_2) {
 char *VAR_3 = *VAR_2;

 if (VAR_3) {
  if (!FUNC_2(VAR_3)) {
   FUNC_1("%s: --basedir option must be an absolute path, but was %s",
     VAR_0,
     VAR_3);
   return -1;
  } else {
   return 0;
  }
 }




 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3) {
  FUNC_1("%s: Failed to get base directory",
    VAR_0);
  return -1;
 }

 *VAR_2 = VAR_3;

 return 0;

}
